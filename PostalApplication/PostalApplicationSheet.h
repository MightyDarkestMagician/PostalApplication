#pragma once

#include "NewspaperPage.h"
#include "PrintingHousePage.h"
#include "PostOfficePage.h"
#include "QueryPage.h"
#include "AboutPage.h"

class CPostalApplicationSheet : public CPropertySheet
{
    DECLARE_DYNAMIC(CPostalApplicationSheet)

public:
    CPostalApplicationSheet(CWnd* pWndParent = NULL);
    virtual ~CPostalApplicationSheet();

protected:
    CNewspaperPage m_newspaperPage;
    CPrintingHousePage m_printingHousePage;
    CPostOfficePage m_postOfficePage;
    CQueryPage m_queryPage;
    CAboutPage m_aboutPage;

    DECLARE_MESSAGE_MAP()
};
