#include "pch.h"
#include "PostOfficePage.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(CPostOfficePage, CPropertyPage)

CPostOfficePage::CPostOfficePage() : CPropertyPage(IDD_POSTOFFICE_PAGE)
{
}

CPostOfficePage::~CPostOfficePage()
{
}

void CPostOfficePage::DoDataExchange(CDataExchange* pDX)
{
    CPropertyPage::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT_PO_NUMBER, m_number);
    DDX_Text(pDX, IDC_EDIT_PO_ADDRESS, m_address);
    DDX_Text(pDX, IDC_EDIT_PO_DISTRICT, m_district);
}

BEGIN_MESSAGE_MAP(CPostOfficePage, CPropertyPage)
    ON_BN_CLICKED(IDC_BUTTON_ADD_PO, &CPostOfficePage::OnBnClickedAddPostOffice)
END_MESSAGE_MAP()

void CPostOfficePage::OnBnClickedAddPostOffice()
{
    UpdateData(TRUE);
    // Добавить логику добавления почтового отделения в список
    // Например:
    // addPostOffice((LPCTSTR)m_number, (LPCTSTR)m_address, (LPCTSTR)m_district);
    AfxMessageBox(_T("Post Office added!"));
}
