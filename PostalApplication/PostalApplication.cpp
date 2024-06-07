#include "pch.h"
#include "framework.h"
#include "PostalApplication.h"
#include "PostalApplicationDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CPostalApplicationApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CPostalApplicationApp::CPostalApplicationApp()
{
}

CPostalApplicationApp theApp;

BOOL CPostalApplicationApp::InitInstance()
{
    CWinApp::InitInstance();

    AfxEnableControlContainer();

    CShellManager* pShellManager = new CShellManager;

    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

    CPostalApplicationDlg dlg;
    m_pMainWnd = &dlg;
    INT_PTR nResponse = dlg.DoModal();
    if (nResponse == IDOK)
    {
    }
    else if (nResponse == IDCANCEL)
    {
    }

    if (pShellManager != nullptr)
    {
        delete pShellManager;
    }

#ifndef _AFXDLL
    ControlBarCleanUp();
#endif

    return FALSE;
}
