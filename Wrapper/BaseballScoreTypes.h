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
**      Type Definitions.
**
**      @file       BaseballScoreTypes.h
**/

#pragma     once

//  #include    "BaseballScore/Common/Score4Types.h"


namespace  Score4Wrapper  {

//----------------------------------------------------------------
/**
**    エラーコード。
**/

public enum  class  ErrCode
{
    ERR_SUCCESS,
    ERR_FAILURE,
    ERR_FILE_OPEN_ERROR,
    ERR_FILE_IO_ERROR,
    ERR_INDEX_OUT_OF_RANGE,
};

//  typedef     Score4Core::Boolean         Boolean;
typedef     System::Boolean             Boolean;


//----------------------------------------------------------------
/**
**    レコードフラグ。
**/

public enum  class  RecordFlag
{
    GAME_EMPTY,
    GAME_SCHEDULE,
    GAME_CANCEL,
    GAME_RESULT,
    GAME_REGULAR,
    GAME_NOT_REGULAR,
};

//----------------------------------------------------------------
/**
**    ゲームフィルタフラグ。
**/

public enum  class  GameFilter
{
    FILTER_HOME_GAMES,
    FILTER_AWAY_GAMES,
    FILTER_ALL_GAMES,

    FILTER_SCHEDULE,
    FILTER_SCDL_HOMES,
    FILTER_SCDL_AWAYS,
    FILTER_SCDL_ALLS,

    FILTER_GAMES_FIRST,
    FILTER_GAMES_END,
    FILTER_SCDL_FIRST,
    FILTER_SCDL_END,
};

//----------------------------------------------------------------
/**
**    マジック等の状態を示すフィルタフラグ。
**/

public enum  class  MagicFilter
{
    MF_DIFFERENT_LEAGUE,
    MF_ON_MAGIC,
    MF_MAGIC_IF_RIVAL_LOSE,
    MF_BEAT_IF_WIN_DIRECT,
    MF_CANNOT_BEAT_BY_SELF,
    MF_NEVER_BEAT,
};

//----------------------------------------------------------------
/**
**    マジックの計算対象の種類を示す列挙型。
**/

public enum  class  MagicNumberMode
{
    MAGIC_VICTORY,
    MAGIC_PLAYOFF,
    NUM_MAGIC_MODES,
};

public enum  class  MagicInfoFlags
{
    MIF_WINS_DIFF,
    MIF_ON_MAGIC,
};

//========================================================================

#if 0
typedef     Score4Core::DateSerial      DateSerial;
typedef     Score4Core::TeamIndex       TeamIndex;
typedef     Score4Core::LeagueIndex     LeagueIndex;
typedef     Score4Core::GamesCount      GamesCount;
typedef     Score4Core::WinningRate     WinningRate;
typedef     Score4Core::RecordIndex     RecordIndex;
typedef     Score4Core::ScoreValue      ScoreValue;
typedef     Score4Core::NumOfDigits     NumOfDigits;
typedef     Score4Core::FileLength      FileLength;
#endif

typedef     double      DateSerial;
typedef     int         TeamIndex;
typedef     int         LeagueIndex;
typedef     int         GamesCount;
typedef     double      WinningRate;
typedef     int         RecordIndex;
typedef     int         ScoreValue;
typedef     int         NumOfDigits;
typedef     size_t      FileLength;


}   //  End of namespace  Score4Wrapper
