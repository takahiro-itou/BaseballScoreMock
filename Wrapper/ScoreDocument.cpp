//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                  ---  Baseball  Score  Wrapper  ---                  **
**                                                                      **
**          Copyright (C), 2017-2026, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      An Implementation of ScoreDocument class.
**
**      @file       ScoreDocument.cpp
**/

#include    "PreCompile.h"

#include    "ScoreDocument.h"

#include    "ConvertManageType.h"

//  #include    "BaseballScore/Common/DateTimeFormat.h"


#include    <msclr/marshal_cppstd.h>
using       namespace   msclr::interop;

namespace  Score4Wrapper  {
namespace  Document  {

namespace  {

//  using       Score4Core::Common::DateTimeFormat;

inline  System::DateTime^
getDateTime(
        const   DateSerial  dsVal)
{
    System::DateTime^   dtWork  = gcnew  System::DateTime(
            2016, 3, 1);
    return ( dtWork );
}

inline  DateSerial
getDateSerial(
        System::DateTime^   dtVal)
{
    return ( 42430 );
}

}   //  End of (Unnamed) namespace

//========================================================================
//
//    ScoreDocument  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

ScoreDocument::ScoreDocument()
    : m_trgDate(0)
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

ScoreDocument::~ScoreDocument()
{
    this->!ScoreDocument();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

ScoreDocument::!ScoreDocument()
{
}

//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//

//========================================================================
//
//    Public Member Functions.
//

//----------------------------------------------------------------
//    ゲームレコードを追加登録する。
//

ErrCode
ScoreDocument::appendGameRecord(
        GameResult^     gameRecord)
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    全てのレコードを検査して最終日付を設定する。
//

System::DateTime^
ScoreDocument::checkLastDate()
{
    return ( getDateTime(42430) );
}

//----------------------------------------------------------------
//    ドキュメントの内容をクリアする。
//

ErrCode
ScoreDocument::clearDocument()
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    指定したリーグに属するチームを、成績順にソートする。
//

TeamIndex
ScoreDocument::computeRankOrder(
        LeagueIndex         idxLeague,
        array<TeamIndex>^   bufIndex)
{
    return ( 6 );
}

//----------------------------------------------------------------
//    指定したデータのコピーを作成する。
//

ScoreDocument^
ScoreDocument::copyFrom(
        ScoreDocument^  src)
{
    return ( this );
}

//----------------------------------------------------------------
//    試合結果を集計する。
//

ErrCode
ScoreDocument::countScores(
        System::DateTime^   trgLastDate)
{
    DateSerial  dsLast  = getDateSerial(trgLastDate);

    const  LeagueIndex  numLeagues  = getNumLeagues();
    const  TeamIndex    numTeams    = getNumTeams();

    this->m_csiBuf  = gcnew cli::array<CountedScores^, 1>(numTeams);
    for ( TeamIndex i = 0; i < numTeams; ++ i ) {
        this->m_csiBuf[i]   = gcnew  CountedScores;
    }

    this->m_trgDate = dsLast;
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    指定した条件の対戦カードを検索する。
//

RecordIndex
ScoreDocument::findGameRecords(
        System::DateTime^           gameDate,
        const   TeamIndex           homeTeam,
        const   TeamIndex           visitorTeam,
        Common::RecordIndexList^%   bufRecord)
{
    return ( 0 );
}

//----------------------------------------------------------------
//    勝率テーブルを作成する。
//

GamesCount
ScoreDocument::makeWinningRateTable(
        const  LeagueIndex  leagueIndex,
        WinningRateTable^%  rateTable)
{
    return ( 20 );
}

//----------------------------------------------------------------
//    ゲームレコードを最適化する。
//

ErrCode
ScoreDocument::optimizeGameRecords()
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    最終日付を更新する。
//

ErrCode
ScoreDocument::updateLastDate(
        System::Boolean     flgRecordOnly,
        System::DateTime^   lastDate)
{
    return ( ErrCode::ERR_SUCCESS );
}

//========================================================================
//
//    Public Member Functions (Static).
//

//----------------------------------------------------------------
//    指定したデータのコピーを作成する。
//

ScoreDocument^
ScoreDocument::createCopy(
        ScoreDocument^  src)
{
    ScoreDocument^  dst = gcnew ScoreDocument;
    return ( dst );
}

//----------------------------------------------------------------
//    表示桁数リストを作成する。
//

NumOfDigits
ScoreDocument::makeDigitsList(
        WinningRateList^    rateList,
        NumOfDigitsList^%   digitsList)
{
    return ( 3 );
}

//----------------------------------------------------------------
//    表示桁数テーブルを作成する。
//

NumOfDigits
ScoreDocument::makeDigitsTable(
        WinningRateTable^   rateTable,
        NumOfDigitsTable^%  digitsTable)
{
    return ( 3 );
}

//========================================================================
//
//    Accessors.
//

//----------------------------------------------------------------
//    ゲームレコードを取得する。
//

ScoreDocument::GameResult^
ScoreDocument::getGameRecord(
        const  RecordIndex  idxRecord)
{
    Common::GameResult^  managedRecord  = gcnew Common::GameResult;

    managedRecord->GameFlags    = RecordFlag::GAME_RESULT;
    managedRecord->RecordDate   = getDateTime(42430);
    managedRecord->AwayTeam     = 0;
    managedRecord->HomeTeam     = 1;
    managedRecord->AwayScore    = 3;
    managedRecord->HomeScore    = 2;

    return ( managedRecord );
}

//----------------------------------------------------------------
//    ゲームレコードを設定する。
//

ErrCode
ScoreDocument::setGameRecord(
        const  RecordIndex  idxRecord,
        GameResult^         gameRecord)
{
    return ( ErrCode::ERR_SUCCESS );
}

#if 0

//----------------------------------------------------------------
//    ネイティブのインスタンスを取得する。
//

Score4Core::Document::ScoreDocument  &
ScoreDocument::toNativeInstance()
{
    return ( *(this->m_ptrObj) );
}

//----------------------------------------------------------------
//    ネイティブのインスタンスを取得する。
//

Score4Core::Document::ScoreDocument  *
ScoreDocument::toNativePointer()
{
    return ( (this->m_ptrObj) );
}

#endif

//----------------------------------------------------------------
//    登録されているリーグ数を取得する。
//

LeagueIndex
ScoreDocument::getNumLeagues()
{
    return ( 2 );
}

//----------------------------------------------------------------
//    記録されているゲームレコード数を取得する。
//

RecordIndex
ScoreDocument::getNumRecords()
{
    return ( 10 );
}

//----------------------------------------------------------------
//    登録されているチーム数を取得する。
//

TeamIndex
ScoreDocument::getNumTeams()
{
    return ( 12 );
}

//----------------------------------------------------------------
//    最適化済みフラグを取得する。
//

System::Boolean
ScoreDocument::getOptimizedFlag()
{
    return ( false );
}

//========================================================================
//
//    Properties.
//

//----------------------------------------------------------------
//    プロパティ  lastActiveDate
//

System::DateTime^
ScoreDocument::lastActiveDate::get()
{
    return  getDateTime(42430);
}

void
ScoreDocument::lastActiveDate::set(
        System::DateTime^  dtVal)
{
}

//----------------------------------------------------------------
//    プロパティ  lastImportDate
//

System::DateTime^
ScoreDocument::lastImportDate::get()
{
    return  getDateTime(42430);
}

void
ScoreDocument::lastImportDate::set(
        System::DateTime^  dtVal)
{
}

//----------------------------------------------------------------
//    プロパティ  lastRecordDate
//

System::DateTime^
ScoreDocument::lastRecordDate::get()
{
    return  getDateTime(42430);
}

void
ScoreDocument::lastRecordDate::set(
        System::DateTime^  dtVal)
{
}

//----------------------------------------------------------------

Common::LeagueInfo^
ScoreDocument::leagueInfo::get(
        int  idxLeague)
{
    LeagueInfo^     retVal  = gcnew LeagueInfo(idxLeague);

    retVal->LeagueName  = "League A";
    retVal->NumPlayOff  = 3;

    return ( retVal );
}

void
ScoreDocument::leagueInfo::set(
        int  idxLeague,  LeagueInfo^  leagueInfo)
{
}

//----------------------------------------------------------------
//    プロパティ  teamInfo
//

//----------------------------------------------------------------

Common::TeamInfo^
ScoreDocument::teamInfo::get(
        int  idxTeam)
{
    TeamInfo^   retVal  = gcnew TeamInfo;

    retVal->LeagueID    = (idxTeam / 6);
    retVal->TeamName    = "Team Dummy";

    return ( retVal );
}

void
ScoreDocument::teamInfo::set(
        int  idxTeam,  TeamInfo^  teamInfo)
{
}

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Document
}   //  End of namespace  Score4Wrapper
