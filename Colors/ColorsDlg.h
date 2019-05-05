#include "CColors.h"

// ColorsDlg.h : header file
//

#pragma once


// CColorsDlg dialog
class CColorsDlg : public CDialogEx
{
// Construction
public:
	CColorsDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COLORS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CColors m_edit;
	COLORREF m_culText;
	COLORREF m_culBkgnd;
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
};
