/* 
 * File:   WidgetSales.hh
 * Author: troz
 *
 * Created on May 2, 2016, 11:31 AM
 */

#ifndef WIDGETPRODUCTION_HH
#define	WIDGETPRODUCTION_HH

#include "Widget.hh"
#include <vector>
#include <Wt/WPushButton>
#include <string>
#include <Wt/WTimer>
#include <Wt/WLineEdit>
#include <Wt/WText>

//==================================================================================================

using namespace Wt;

//==================================================================================================

class WidgetProduction : public Widget
{
public:
    WidgetProduction(Controller *a_pController = 0, Wt::WContainerWidget *a_pParent = 0);
    virtual ~WidgetProduction();
    WText        *textWeed;
    void seedWeed();
private:
    WContainerWidget *seed;
    WTimer *timer;
};



#endif	/* WIDGETSALES_HH */

