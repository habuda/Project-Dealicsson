#include "WidgetProduction.hh"
#include <Wt/WTemplate>
#include <string>
#include <vector>
#include <iostream>

//==================================================================================================

WidgetProduction::WidgetProduction(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    WString tpl = SINGLETON(Templates).getProduction();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );  
    
    seed = new WContainerWidget();
    m_pTemplate->bindWidget("seed",seed);
    seed->clicked().connect(this, &WidgetProduction::seedWeed);
    seed->setStyleClass("btn btn-primary");
    seed->addWidget(new WText("seed"));
    
    WText *icon_load = new WText("", seed);
    icon_load->setStyleClass("glyphicon glyphicon-play-circle");
    
    textWeed = new WText(intToString(m_pController->m_ModelData.m_ModelGame.weed.getAmount()));
    m_pTemplate->bindWidget("textWeed",textWeed);  
   // m_pTemplate->bindInt("sc",m_pController->weed.getAmount());
    m_pTemplate->bindInt("sc",m_pController->m_ModelData.m_ModelGame.weed.getAmount());
    
    //update();
}

//==================================================================================================

WidgetProduction::~WidgetProduction()
{
}

//==================================================================================================

void WidgetProduction::seedWeed(){
    m_pController->m_ModelData.m_ModelGame.weed.seedWeed();
    textWeed = new WText(intToString(m_pController->m_ModelData.m_ModelGame.weed.getAmount()));
    m_pTemplate->bindWidget("textWeed",textWeed);
    m_pController->m_ModelData.m_ModelGame.increaseScore(100);
}
