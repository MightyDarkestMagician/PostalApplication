#include "pch.h"
#include "framework.h"
#include "PostalApplication.h"
#include "PostalApplicationDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CPostalApplicationDlg::CPostalApplicationDlg(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_POSTALAPPLICATION_DIALOG, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPostalApplicationDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPostalApplicationDlg, CDialogEx)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()

BOOL CPostalApplicationDlg::OnInitDialog()
{
    CDialogEx::OnInitDialog();

    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);

    m_propertySheet.AddPage(&m_newspaperPage);
    m_propertySheet.AddPage(&m_printingHousePage);
    m_propertySheet.AddPage(&m_postOfficePage);
    m_propertySheet.AddPage(&m_queryPage);
    m_propertySheet.AddPage(&m_aboutPage);

    m_propertySheet.Create(this, WS_CHILD | WS_VISIBLE, 0);
    CRect rc;
    GetClientRect(rc);
    m_propertySheet.SetWindowPos(NULL, 0, 0, rc.Width(), rc.Height(), SWP_NOZORDER | SWP_NOACTIVATE);

    return TRUE;
}

void CPostalApplicationDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this);

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialogEx::OnPaint();
    }
}

HCURSOR CPostalApplicationDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}
