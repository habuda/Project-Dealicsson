//==================================================================================================
/* 
 * File:   WidgetIndex.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:29 AM
 */
//==================================================================================================

#include "WidgetIndex.hh"

#include <Wt/WText>
#include <Wt/WIntValidator>
#include <iostream>
#include "../Functions.hh"
#include <Wt/WApplication>
#include <Wt/WPushButton>

//==================================================================================================

WidgetIndex::WidgetIndex(Controller *a_pController, Wt::WContainerWidget *a_pParent)
            : Widget(a_pController, a_pParent)
{
    setStyleClass("index");
    
    WString tpl = SINGLETON(Templates).getIndex();
    m_pTemplate = new WTemplate(this);
    m_pTemplate->setTemplateText( tpl,  XHTMLUnsafeText );

    //////////////////////////////BUTTON_START//////////////////////////////////;  
    start = new WAnchor();
    m_pTemplate->bindWidget("start",start);
    start->clicked().connect(this, &WidgetIndex::newGame);
    start->setStyleClass("btn btn-primary");
    start->setText("Start");
    start->setRefInternalPath("/production");
    ////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////BUTTON_LOAD///////////////////////////////////
    load = new WAnchor();
    m_pTemplate->bindWidget("load",load);
    load->clicked().connect(this, &WidgetIndex::loadGameById);
    load->setStyleClass("btn btn-primary");
    load->addWidget(new WText("Load"));
    load->setRefInternalPath("/production");
    ////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////TEXT_FIELD////////////////////////////////////
    textField = new Wt::WLineEdit();
    textField->setValidator(new Wt::WIntValidator(0, 130));
    m_pTemplate->bindWidget("textField",textField);
    ////////////////////////////////////////////////////////////////////////////
}

//==================================================================================================

WidgetIndex::~WidgetIndex()
{
}

//==================================================================================================

void WidgetIndex::newGame()
{
    m_pController->m_Session.setGame(m_pController->m_ModelData.m_ModelGame.createNewGame());  
}

void WidgetIndex::loadGameById()
{
    long long id = WStringToInt(textField->text());
    m_pController->m_Session.setGame(m_pController->m_ModelData.m_ModelGame.getGameById(id));
}