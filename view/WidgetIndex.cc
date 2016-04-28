//==================================================================================================
/* 
 * File:   WidgetIndex.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:29 AM
 */
//==================================================================================================

#include "WidgetIndex.hh"

//==================================================================================================

WidgetIndex::WidgetIndex(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    std::cerr << "\nk1\n";
    
    WString tpl = SINGLETON(Templates).getIndex();

    std::cerr << "\nk2: " << tpl << "\n";
    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
    std::cerr << "\nk3\n";
}

//==================================================================================================

WidgetIndex::~WidgetIndex()
{
}

//==================================================================================================
