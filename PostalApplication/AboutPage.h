#pragma once

class CAboutPage : public CPropertyPage
{
    DECLARE_DYNAMIC(CAboutPage)

public:
    CAboutPage();
    virtual ~CAboutPage();

    // Данные диалога
#ifdef AFX_DESIGN_TIME
    enum { IDD = IDD_ABOUT_PAGE };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX); // поддержка DDX/DDV

    DECLARE_MESSAGE_MAP()
};
