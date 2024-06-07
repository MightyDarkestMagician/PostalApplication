#include "pch.h"
#include "PostalApplicationSheet.h"

IMPLEMENT_DYNAMIC(CPostalApplicationSheet, CPropertySheet)

CPostalApplicationSheet::CPostalApplicationSheet(CWnd* pWndParent)
    : CPropertySheet(_T("Postal Application"), pWndParent)
{
    AddPage(&m_newspaperPage);
    AddPage(&m_printingHousePage);
    AddPage(&m_postOfficePage);
    AddPage(&m_queryPage);
    AddPage(&m_aboutPage);
}

CPostalApplicationSheet::~CPostalApplicationSheet()
{
}

BEGIN_MESSAGE_MAP(CPostalApplicationSheet, CPropertySheet)
END_MESSAGE_MAP()
