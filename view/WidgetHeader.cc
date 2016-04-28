//==================================================================================================
/* 
 * File:   WidgetHeader.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:28 AM
 */
//==================================================================================================

#include "WidgetHeader.hh"

//==================================================================================================

WidgetHeader::WidgetHeader(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    WString tpl = SINGLETON(Templates).getHeader();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
}

//==================================================================================================

WidgetHeader::~WidgetHeader()
{
}

//==================================================================================================
