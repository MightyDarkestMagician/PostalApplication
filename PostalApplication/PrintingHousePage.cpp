#include "pch.h"
#include "PrintingHousePage.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(CPrintingHousePage, CPropertyPage)

CPrintingHousePage::CPrintingHousePage() : CPropertyPage(IDD_PRINTINGHOUSE_PAGE)
{
}

CPrintingHousePage::~CPrintingHousePage()
{
}

void CPrintingHousePage::DoDataExchange(CDataExchange* pDX)
{
    CPropertyPage::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT_PH_NAME, m_name);
    DDX_Text(pDX, IDC_EDIT_PH_ADDRESS, m_address);
    DDX_Text(pDX, IDC_EDIT_PH_DIRECTOR_FIRSTNAME, m_directorFirstName);
    DDX_Text(pDX, IDC_EDIT_PH_DIRECTOR_LASTNAME, m_directorLastName);
    DDX_Text(pDX, IDC_EDIT_PH_DIRECTOR_MIDDLENAME, m_directorMiddleName);
}

BEGIN_MESSAGE_MAP(CPrintingHousePage, CPropertyPage)
    ON_BN_CLICKED(IDC_BUTTON_ADD_PH, &CPrintingHousePage::OnBnClickedAddPrintingHouse)
END_MESSAGE_MAP()

void CPrintingHousePage::OnBnClickedAddPrintingHouse()
{
    UpdateData(TRUE);
    // Add logic to add a printing house
    AfxMessageBox(_T("Printing House added!"));
}
