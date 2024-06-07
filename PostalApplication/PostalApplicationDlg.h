#pragma once

#include "NewspaperPage.h"
#include "PrintingHousePage.h"
#include "PostOfficePage.h"
#include "QueryPage.h"
#include "AboutPage.h"

class CPostalApplicationDlg : public CDialogEx
{
public:
    CPostalApplicationDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_POSTALAPPLICATION_DIALOG };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

protected:
    HICON m_hIcon;
    CPropertySheet m_propertySheet;
    CNewspaperPage m_newspaperPage;
    CPrintingHousePage m_printingHousePage;
    CPostOfficePage m_postOfficePage;
    CQueryPage m_queryPage;
    CAboutPage m_aboutPage;

    virtual BOOL OnInitDialog();
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
};
