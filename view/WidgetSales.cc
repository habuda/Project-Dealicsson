#include "WidgetSales.hh"

//==================================================================================================

WidgetSales::WidgetSales(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    WString tpl = SINGLETON(Templates).getSales();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
}

//==================================================================================================

WidgetSales::~WidgetSales()
{
}
