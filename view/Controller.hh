//==================================================================================================
/* 
 * File:   Controller.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:30 AM
 */
//==================================================================================================

#ifndef CONTROLLER_HH
#define CONTROLLER_HH

//==================================================================================================

class Controller;
class Widget;
class WidgetHeader;
class WidgetFooter;

//==================================================================================================

#include <Wt/WCompositeWidget>
#include <Wt/WStackedWidget>
#include <Wt/WApplication>
#include <Wt/Dbo/backend/Sqlite3>
#include <Wt/Http/Request>
#include <Wt/WAnimation>


#include "../Functions.hh"
#include "../Templates.hh"
#include "../Singleton.hh"
#include "../Session.hh"

#include "../model/db_objects/User.hh"
#include "../model/ModelData.hh"


#include "Widget.hh"


#include "../model/Product.hh"
//==================================================================================================

using namespace Wt;

//==================================================================================================

class Controller  : public WContainerWidget
{
public:
    Controller(const std::string& a_sBasePath, const std::string& a_sDatabase);
    ~Controller();
    
    Session m_Session;
    ModelData m_ModelData;

    void logout();
    void hideAllWidget();

    void handlePathChange(const std::string& a_sPath);
    
    Product weed;  
private:
    bool m_bShowHelp;
    std::string m_sBasePath;
    unsigned int m_uiLevel;
    
    Widget *m_pWidget;
    
    WidgetHeader *m_pWidgetHeader;
    WidgetFooter *m_pWidgetFooter;
};

//==================================================================================================

class MainView : public Wt::WCompositeWidget
{
public:
    MainView(const std::string& a_sBasePath, const std::string& a_sDatabase, Wt::WContainerWidget *parent = 0);
    
    void logout();

private:
    MainView(const MainView& orig) {}

    Controller *m_pController;
};

//==================================================================================================

#endif /* CONTROLLER_HH */

//==================================================================================================
