#include "WidgetProduction.hh"

//==================================================================================================

WidgetProduction::WidgetProduction(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    WString tpl = SINGLETON(Templates).getProduction();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
}

//==================================================================================================

WidgetProduction::~WidgetProduction()
{
}
