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
#include <Wt/WPushButton>
//==================================================================================================

WidgetHeader::WidgetHeader(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    WString tpl = SINGLETON(Templates).getHeader();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
    
    //logo button
    WAnchor *l_paHome= new WAnchor();
    l_paHome->setText("DealiCsson");
    l_paHome->setStyleClass("navbar-brand");
    l_paHome->setRefInternalPath("/");
    m_pTemplate->bindWidget("DealiCsson", l_paHome);
    
    //sales button
    WAnchor *l_paSales = new WAnchor();
    l_paSales->setText("Sales");
    //l_paSales->setStyleClass("btn btn-primary");
    l_paSales->setRefInternalPath("/sales");
    m_pTemplate->bindWidget("sales", l_paSales);
    
    //production button
    WAnchor *l_paProduction = new WAnchor();
    l_paProduction->setText("Production");
    l_paProduction->setRefInternalPath("/production");
    m_pTemplate->bindWidget("production", l_paProduction);
    
}

//==================================================================================================

WidgetHeader::~WidgetHeader()
{
}

//==================================================================================================
