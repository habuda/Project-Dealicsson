//==================================================================================================
/* 
 * File:   WidgetFooter.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:27 AM
 */
//==================================================================================================

#include "WidgetFooter.hh"

//==================================================================================================

WidgetFooter::WidgetFooter(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    WString tpl = SINGLETON(Templates).getFooter();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
}

//==================================================================================================

WidgetFooter::~WidgetFooter()
{
}

//==================================================================================================
