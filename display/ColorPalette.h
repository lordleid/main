/*
* 
*
* This file is part of BRAT 
*
* BRAT is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* BRAT is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef __brathlGuiCommon_H__
#define __brathlGuiCommon_H__

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma interface "ColorPalette.h"
#endif

#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "List.h" 
using namespace brathl;

const string PALETTE_AEROSOL2 = "Aerosol2";
const string PALETTE_AEROSOL = "Aerosol";
const string PALETTE_BLACKTOWHITE = "BlackToWhite";
const string PALETTE_WHITETOBLACK = "WhiteToBlack";
const string PALETTE_REDTOGREEN = "RedToGreen";
const string PALETTE_GREENTORED = "GreenToRed";
const string PALETTE_CLOUD = "Cloud";
const string PALETTE_RAINBOW = "Rainbow";
const string PALETTE_RAINBOW2 = "Rainbow2";
const string PALETTE_OZONE = "Ozone";
const string PALETTE_BLACKBODY = "Blackbody";

//-------------------------------------------------------------
//------------------- CListColorPalette class --------------------
//-------------------------------------------------------------

class CListColorPalette: public CStringArray
{
public:
  /// CIntMap ctor
  CListColorPalette();

  /// CIntMap dtor
  virtual ~CListColorPalette();

  static CListColorPalette&  GetInstance();


  void NamesToArrayString(wxArrayString& array);
  void NamesToComboBox(wxComboBox& combo);

protected:

public:


private :


};

#endif
