//==================================================================================================
/* 
 * File:   WidgetIndex.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:29 AM
 */
//==================================================================================================

#include "WidgetIndex.hh"
#include <Wt/WAnchor>
#include <Wt/WPushButton>
#include <Wt/WTimer>
//==================================================================================================

    int c = 0;


    
WidgetIndex::WidgetIndex(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    WString tpl = SINGLETON(Templates).getIndex();

    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );
    
    
    WAnchor *start = new WAnchor();
    start->setText("start");
    start->setStyleClass("btn btn-primary");
    start->clicked().connect(std::bind([=](){

    }));
    
    m_pTemplate->bindWidget("start", start);
        
    WAnchor *stop = new WAnchor();
    stop->setText("stop");
    stop->setStyleClass("btn btn-danger");
    stop->clicked().connect(std::bind([=](){
        for(int i = 0; i < 10; i++)
        {
            WTimer *timer = new WTimer();
            timer->setInterval(2000);
            timer->start();
            ++c;
        }
    }));
    
    m_pTemplate->bindWidget("stop", stop);
}



//==================================================================================================

WidgetIndex::~WidgetIndex()
{
}

//==================================================================================================
