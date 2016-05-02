/* 
 * File:   WidgetSales.hh
 * Author: troz
 *
 * Created on May 2, 2016, 11:31 AM
 */

#ifndef WIDGETPRODUCTION_HH
#define	WIDGETPRODUCTION_HH

#include "Widget.hh"

//==================================================================================================

using namespace Wt;

//==================================================================================================

class WidgetProduction : public Widget
{
public:
    WidgetProduction(Controller *a_pController = 0, Wt::WContainerWidget *a_pParent = 0);
    virtual ~WidgetProduction();
};

#endif	/* WIDGETSALES_HH */

