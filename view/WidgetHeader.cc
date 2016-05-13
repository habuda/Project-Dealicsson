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
    
    l_paSales = new WAnchor();
    l_paSales->setText("Sales");
    l_paSales->setRefInternalPath("/sales");
    
    m_pTemplate->bindWidget("sales", l_paSales);
    
    l_paProduction = new WAnchor();
    l_paProduction->setText("Production");
    l_paProduction->setRefInternalPath("/production");
    
    m_pTemplate->bindWidget("production", l_paProduction);
    
    l_paDealiCsson = new WAnchor();
    l_paDealiCsson->setText("DealiCsson");
    l_paDealiCsson->setRefInternalPath("/");
    l_paDealiCsson->addStyleClass("navbar-brand");
    
    m_pTemplate->bindWidget("dealicsson", l_paDealiCsson); 
}

//==================================================================================================

WidgetHeader::~WidgetHeader()
{
}

//==================================================================================================

void WidgetHeader::hideTabs(){
    l_paSales->hide();
    l_paProduction->hide();
}

//==================================================================================================
void WidgetHeader::showTabs(){
    l_paSales->show();
    l_paProduction->show();   
}