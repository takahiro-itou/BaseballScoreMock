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
**      @file       ScoreInterface.cpp
**/

#include    "PreCompile.h"

#include    "ScoreInterface.h"

#include    "ConvertManageType.h"


namespace  ScoreWrapper  {
namespace  Common  {

}   //  End of namespace  Common


#if 0
//----------------------------------------------------------------
//    アンマネージ型をマネージ型に変換する。
//

Common::WinsForBeatList^
copyToManageType(
        const  CoreCommon::WinsForBeatList &wbSrc)
{
    const  int  num = static_cast<int>(wbSrc.size());

    Common::WinsForBeatList^
            wbDest  = gcnew Common::WinsForBeatList(num);

    for ( int i = 0; i < num; ++ i ) {
        wbDest[i]   = gcnew Common::NumWinsForBeat;
        wbDest[i]->filterType   =
                static_cast<ScoreWrapper::MagicFilter>(wbSrc[i].filterType);
        wbDest[i]->numNeedWins  = wbSrc[i].numNeedWins;
        wbDest[i]->numRestGame  = wbSrc[i].numRestGame;
        wbDest[i]->numWinsSelf  = wbSrc[i].numWinsSelf;
        wbDest[i]->numWinsDiff  = wbSrc[i].numWinsDiff;
    }

    return ( wbDest );
}

//----------------------------------------------------------------
/**   アンマネージ型をマネージ型に変換する。
**
**/

Common::MagicInfo^
copyToManageType(
        const  CoreCommon::MagicInfo  & miSrc)
{
    Score4Wrapper::Common::MagicInfo^
            miTrg   = gcnew Score4Wrapper::Common::MagicInfo;
    miTrg->rankLow  = miSrc.rankLow;
    miTrg->rankHigh = miSrc.rankHigh;

    miTrg->magicFlags   = castArrayToManage<MagicInfoFlags>(miSrc.magicFlags);
    miTrg->magicNumber  = copyArrayToManage(miSrc.magicNumber);

    return ( miTrg );
}

//----------------------------------------------------------------
//    アンマネージ型をマネージ型に変換する。
//

ErrCode
copyToManageType(
        const  CoreCommon::CountedScores  & csSrc,
        Common::CountedScores             ^ csTrg)
{
    csTrg->numWons      = copyArrayToManage(csSrc.numWons);
    csTrg->numLost      = copyArrayToManage(csSrc.numLost);
    csTrg->numDraw      = copyArrayToManage(csSrc.numDraw);
    csTrg->numGames     = copyArrayToManage(csSrc.numGames);
    csTrg->vsWons       = toManageFromTable(csSrc.vsWons);
    csTrg->vsLost       = toManageFromTable(csSrc.vsLost);
    csTrg->vsDraw       = toManageFromTable(csSrc.vsDraw);
    csTrg->restGames    = toManageFromTable(csSrc.restGames);

    csTrg->numLeagueRestGames
            = copyArrayToManage(csSrc.numLeagueRestGames);
    csTrg->numInterRestGames
            = copyArrayToManage(csSrc.numInterRestGames);
    csTrg->numTotalRestGames
            = copyArrayToManage(csSrc.numTotalRestGames);

    csTrg->totalMagicInfo   = copyToManageType(csSrc.totalMagic);
    csTrg->currentRank      = csSrc.currentRank;
    csTrg->numWinsForBeat   = copyToManageType(csSrc.numWinsForBeat);

    csTrg->totalGotScores   = copyArrayToManage(csSrc.totalGotScores);
    csTrg->totalLostScores  = copyArrayToManage(csSrc.totalLostScores);
    csTrg->vsGotScores      = toManageFromTable(csSrc.vsGotScores);
    csTrg->vsLostScores     = toManageFromTable(csSrc.vsLostScores);

    return ( ErrCode::ERR_SUCCESS );
}

#endif

}   //  End of namespace  ScoreWrapper
