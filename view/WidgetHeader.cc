//==================================================================================================
/* 
 * File:   WidgetHeader.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:28 AM
 */
//==================================================================================================

#include "WidgetHeader.hh"

#include <Wt/WAnchor>

//==================================================================================================

WidgetHeader::WidgetHeader(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    WString tpl = SINGLETON(Templates).getHeader();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
    
    WAnchor *l_paSales = new WAnchor();
    l_paSales->setText("Sales");
    l_paSales->setRefInternalPath("/sales");
    
    m_pTemplate->bindWidget("sales", l_paSales);
}

//==================================================================================================

WidgetHeader::~WidgetHeader()
{
}

//==================================================================================================
