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
**      An Implementation of DocumentFile class.
**
**      @file       DocumentFile.cpp
**/

#include    "PreCompile.h"

#include    "DocumentFile.h"

#include    <msclr/marshal_cppstd.h>
using       namespace   msclr::interop;


namespace  ScoreWrapper  {
namespace  Document  {

//========================================================================
//
//    DocumentFile  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

DocumentFile::DocumentFile()
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

DocumentFile::~DocumentFile()
{
    this->!DocumentFile();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

DocumentFile::!DocumentFile()
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
//    バイナリ形式で保存するのに必要な容量を計算する。
//

FileLength
DocumentFile::computeImageSize(
        ScoreDocument^      objDoc,
        BlockSizeInfo^      bsInfo)
{
    return ( 0 );
}

//----------------------------------------------------------------
//    データをバイナリファイルから読み込む。
//

ErrCode
DocumentFile::readFromBinaryFile(
        System::String^     fileName,
        ScoreDocument^%     ptrDoc)
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    データをテキストファイルから読み込む。
//

ErrCode
DocumentFile::readFromTextFile(
        System::String^     fileName,
        ScoreDocument^%     ptrDoc)
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    データをバイナリファイルに書き込む。
//

ErrCode
DocumentFile::saveToBinaryFile(
        ScoreDocument^      objDoc,
        System::String^     fileName)
{
    return ( ErrCode::ERR_SUCCESS );
}

//----------------------------------------------------------------
//    データをテキストファイルに書き込む。
//

ErrCode
DocumentFile::saveToTextFile(
        ScoreDocument^      objDoc,
        System::String^     fileName)
{
    return ( ErrCode::ERR_SUCCESS );
}

//========================================================================
//
//    Accessors.
//

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Document
}   //  End of namespace  ScoreWrapper
