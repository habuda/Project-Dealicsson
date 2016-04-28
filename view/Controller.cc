//==================================================================================================
/* 
 * File:   Controller.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:31 AM
 */
//==================================================================================================

#include <Wt/WEnvironment>

#include "Controller.hh"

#include "WidgetFooter.hh"
#include "WidgetHeader.hh"
#include "WidgetIndex.hh"

//==================================================================================================

using namespace Wt;

//==================================================================================================

Controller::Controller(const std::string& a_sBasePath, const std::string& a_sDatabase)
        :   m_sBasePath(a_sBasePath),
            m_Session(a_sDatabase),
            m_ModelData(m_Session),
            m_pWidget(0),
            m_pWidgetHeader(0),
            m_pWidgetFooter(0)
{
    wApp->setTitle(utf8("Dealicsson"));
    wApp->messageResourceBundle().use( WApplication::appRoot() );
    wApp->internalPathChanged().connect(this, &Controller::handlePathChange);
    
//    wApp->useStyleSheet("/resources/assets/css/bootstrap.css");
//    wApp->useStyleSheet("/resources/assets/css/font-awesome.css");
//    wApp->useStyleSheet("/resources/assets/css/ace-fonts.css");
//    wApp->useStyleSheet("/resources/assets/css/ace.css");
//    wApp->useStyleSheet("/resources/assets/css/ace-part2.css");
//    wApp->useStyleSheet("/resources/assets/css/ace-rtl.css");
//    wApp->useStyleSheet("/resources/assets/css/colorbox.css");
//    
//    wApp->require("http://code.jquery.com/jquery-latest.js");
//    wApp->require("/resources/assets/js/jquery.colorbox.js");
//    wApp->require("/resources/assets/js/bootstrap.js");
    wApp->require("/resources/functions.js");
    
    m_Session.setUser(dbo::ptr<User>());
    
    m_pWidgetHeader     = new WidgetHeader(this, this);
    
    handlePathChange(wApp->internalPath());
}

//==================================================================================================

Controller::~Controller()
{
    clear();
}

//==================================================================================================

void Controller::hideAllWidget()
{
    if(m_pWidget)
    {
        delete m_pWidget;
        m_pWidget = 0;
    }
    
    if(m_pWidgetFooter)
    {
        delete m_pWidgetFooter;
        m_pWidgetFooter = 0;
    }
}

//==================================================================================================

void Controller::handlePathChange(const std::string& a_sPath)
{
    if ( !wApp->internalPathMatches(m_sBasePath) )
        return;

    std::string l_sPath         = wApp->internalPathNextPart(m_sBasePath);

    hideAllWidget();
    
    std::cerr << "\n11111111111\n";
    
    if(l_sPath == "")
    {
    std::cerr << "\n11111111111BBB\n";
        m_pWidget = new WidgetIndex(this, this);
    }
    else if(l_sPath == "statystyki")
    {
        //m_pWidget = new WidgetStats
    }
    std::cerr << "\n11111111111BBBCCC\n";
    
    if(!m_pWidgetFooter)
        m_pWidgetFooter = new WidgetFooter(this, this);
    m_pWidgetFooter->show();
}

//==================================================================================================

MainView::MainView(const std::string& a_sBasePath, const std::string& a_sDatabase,
            WContainerWidget *parent) : Wt::WCompositeWidget(parent)
{
    m_pController            = new Controller(a_sBasePath, a_sDatabase);
    this->setImplementation( m_pController );
}

//==================================================================================================
