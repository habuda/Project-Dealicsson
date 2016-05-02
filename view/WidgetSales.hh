/* 
 * File:   WidgetSales.hh
 * Author: troz
 *
 * Created on May 2, 2016, 11:31 AM
 */

#ifndef WIDGETSALES_HH
#define	WIDGETSALES_HH

#include "Widget.hh"

//==================================================================================================

using namespace Wt;

//==================================================================================================

class WidgetSales : public Widget
{
public:
    WidgetSales(Controller *a_pController = 0, Wt::WContainerWidget *a_pParent = 0);
    virtual ~WidgetSales();
};

#endif	/* WIDGETSALES_HH */

