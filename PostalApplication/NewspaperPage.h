#pragma once

class CNewspaperPage : public CPropertyPage
{
    DECLARE_DYNAMIC(CNewspaperPage)

public:
    CNewspaperPage();
    virtual ~CNewspaperPage();

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_NEWSPAPER_PAGE };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnBnClickedAddNewspaper();

private:
    CString m_name;
    CString m_topic;
    CString m_index;
    CString m_editorFirstName;
    CString m_editorLastName;
    CString m_editorMiddleName;
    int m_circulation;
    double m_price;
};
