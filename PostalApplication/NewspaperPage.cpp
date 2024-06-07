#include "pch.h"
#include "NewspaperPage.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(CNewspaperPage, CPropertyPage)

CNewspaperPage::CNewspaperPage() : CPropertyPage(IDD_NEWSPAPER_PAGE)
{
}

CNewspaperPage::~CNewspaperPage()
{
}

void CNewspaperPage::DoDataExchange(CDataExchange* pDX)
{
    CPropertyPage::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT_NAME, m_name);
    DDX_Text(pDX, IDC_EDIT_TOPIC, m_topic);
    DDX_Text(pDX, IDC_EDIT_INDEX, m_index);
    DDX_Text(pDX, IDC_EDIT_EDITOR_FIRSTNAME, m_editorFirstName);
    DDX_Text(pDX, IDC_EDIT_EDITOR_LASTNAME, m_editorLastName);
    DDX_Text(pDX, IDC_EDIT_EDITOR_MIDDLENAME, m_editorMiddleName);
    DDX_Text(pDX, IDC_EDIT_CIRCULATION, m_circulation);
    DDX_Text(pDX, IDC_EDIT_PRICE, m_price);
}

BEGIN_MESSAGE_MAP(CNewspaperPage, CPropertyPage)
    ON_BN_CLICKED(IDC_BUTTON_ADD_NEWSPAPER, &CNewspaperPage::OnBnClickedAddNewspaper)
END_MESSAGE_MAP()

void CNewspaperPage::OnBnClickedAddNewspaper()
{
    UpdateData(TRUE);
    // Add logic to add a newspaper
    AfxMessageBox(_T("Newspaper added!"));
}
