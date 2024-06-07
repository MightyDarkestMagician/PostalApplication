#pragma once

class CQueryPage : public CPropertyPage
{
    DECLARE_DYNAMIC(CQueryPage)

public:
    CQueryPage();
    virtual ~CQueryPage();

    // Данные диалога
#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_QUERY_PAGE };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX); // поддержка DDX/DDV

    DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnBnClickedQueryNewspapersByPrintingHouse();
    afx_msg void OnBnClickedQueryPrintingHousesByNewspaper();
    afx_msg void OnBnClickedQueryTotalCostByNewspaper();
    afx_msg void OnBnClickedSaveResults();

private:
    CString m_query;
    CString m_result;
    CString m_filename;
};
