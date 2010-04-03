// TortoiseSVN - a Windows shell extension for easy version control

// Copyright (C) 2010 - TortoiseSVN

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once
#include "EditPropBase.h"
#include "StandAloneDlg.h"

class CEditPropMimeType : public CStandAloneDialog, public EditPropBase
{
    DECLARE_DYNAMIC(CEditPropMimeType)

public:
    CEditPropMimeType(CWnd* pParent = NULL);   // standard constructor
    virtual ~CEditPropMimeType();

    enum { IDD = IDD_EDITPROPMIMETYPE };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();
    virtual void OnOK();

    afx_msg void OnBnClickedType();
    afx_msg void OnBnClickedProprecursive();

    DECLARE_MESSAGE_MAP()

    INT_PTR DoModal() { return CStandAloneDialog::DoModal(); }

private:
    CString             m_sCustomMimeType;
};
