#include "pch.h"
#include "QueryPage.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(CQueryPage, CPropertyPage)

CQueryPage::CQueryPage() : CPropertyPage(IDD_QUERY_PAGE)
{
}

CQueryPage::~CQueryPage()
{
}

void CQueryPage::DoDataExchange(CDataExchange* pDX)
{
    CPropertyPage::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT_QUERY, m_query);
    DDX_Text(pDX, IDC_STATIC_RESULT, m_result);
    DDX_Text(pDX, IDC_EDIT_FILENAME, m_filename);
}

BEGIN_MESSAGE_MAP(CQueryPage, CPropertyPage)
    ON_BN_CLICKED(IDC_BUTTON_QUERY_PH, &CQueryPage::OnBnClickedQueryNewspapersByPrintingHouse)
    ON_BN_CLICKED(IDC_BUTTON_QUERY_NP, &CQueryPage::OnBnClickedQueryPrintingHousesByNewspaper)
    ON_BN_CLICKED(IDC_BUTTON_QUERY_COST, &CQueryPage::OnBnClickedQueryTotalCostByNewspaper)
    ON_BN_CLICKED(IDC_BUTTON_SAVE_RESULTS, &CQueryPage::OnBnClickedSaveResults)
END_MESSAGE_MAP()

void CQueryPage::OnBnClickedQueryNewspapersByPrintingHouse()
{
    UpdateData(TRUE);
    // Логика выполнения запроса
    // Например:
    // m_result = getNewspapersByPrintingHouse((LPCTSTR)m_query);
    UpdateData(FALSE);
}

void CQueryPage::OnBnClickedQueryPrintingHousesByNewspaper()
{
    UpdateData(TRUE);
    // Логика выполнения запроса
    // Например:
    // m_result = getPrintingHousesByNewspaper((LPCTSTR)m_query);
    UpdateData(FALSE);
}

void CQueryPage::OnBnClickedQueryTotalCostByNewspaper()
{
    UpdateData(TRUE);
    // Логика выполнения запроса
    // Например:
    // m_result.Format(_T("%.2f"), getTotalCostByNewspaper((LPCTSTR)m_query));
    UpdateData(FALSE);
}

void CQueryPage::OnBnClickedSaveResults()
{
    UpdateData(TRUE);
    // Логика сохранения результатов в файл
    // Например:
    // saveResultsToFile((LPCTSTR)m_result, (LPCTSTR)m_filename);
    AfxMessageBox(_T("Results saved!"));
}
