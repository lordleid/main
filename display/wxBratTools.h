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

#ifndef __wxBratTools_H__
#define __wxBratTools_H__

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma interface "wxBratTools.h"
#endif

#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "List.h"
using namespace brathl;

// When debugging changes all calls to �new� to be calls to �DEBUG_NEW� allowing for memory leaks to
// give you the file name and line number where it occurred.
// Needs to be included after all #include commands
#include "Win32MemLeaksAccurate.h"


//-------------------------------------------------------------
//------------------- wxBratTools class --------------------
//-------------------------------------------------------------


class wxBratTools
{
public:

  static wxLongLong_t wxStringTowxLongLong_t(const wxString& str);

  static wxString MutexErrorToString(wxMutexError error);

  static bool ParseTime(const wxString& value, wxTimeSpan& ts, wxString& error);

  static bool ParseDate(const wxString& value, wxDateTime& dt, wxString& error);
  static bool ParseTime(const wxString& value, wxDateTime& dt, wxString& error);
  static bool ParseDateTime(const wxString& value, wxDateTime& dt, wxString& error);

  static bool RemoveFile(const wxString& name);
  static bool RenameFile(const wxString& oldName, const wxString& newName);

  static void CStringArrayToWxArray(CStringArray& from, wxArrayString& to);
  static void CStringListToWxArray(CStringList& from, wxArrayString& to);


protected:
  wxBratTools();
  ~wxBratTools();




};




#endif
