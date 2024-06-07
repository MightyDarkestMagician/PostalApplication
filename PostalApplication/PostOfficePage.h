#pragma once

class CPostOfficePage : public CPropertyPage
{
    DECLARE_DYNAMIC(CPostOfficePage)

public:
    CPostOfficePage();
    virtual ~CPostOfficePage();

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_POSTOFFICE_PAGE };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnBnClickedAddPostOffice();

private:
    CString m_number;
    CString m_address;
    CString m_district;
};
