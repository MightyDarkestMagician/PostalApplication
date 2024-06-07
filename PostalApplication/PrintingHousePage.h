#pragma once

#include "pch.h" // добавьте это включение
#include "resource.h" // добавьте включение заголовочного файла ресурсов
#include <afxwin.h> // добавьте включение для CString и CDataExchange

class CPrintingHousePage : public CPropertyPage
{
    DECLARE_DYNAMIC(CPrintingHousePage)

public:
    CPrintingHousePage();
    virtual ~CPrintingHousePage();

#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_PRINTINGHOUSE_PAGE };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX);

    DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnBnClickedAddPrintingHouse();

private:
    CString m_name;
    CString m_address;
    CString m_directorFirstName;
    CString m_directorLastName;
    CString m_directorMiddleName;
};


