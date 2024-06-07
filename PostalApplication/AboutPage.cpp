#include "pch.h"
#include "AboutPage.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(CAboutPage, CPropertyPage)

CAboutPage::CAboutPage() : CPropertyPage(IDD_ABOUT_PAGE)
{
}

CAboutPage::~CAboutPage()
{
}

void CAboutPage::DoDataExchange(CDataExchange* pDX)
{
    CPropertyPage::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutPage, CPropertyPage)
END_MESSAGE_MAP()
