//==================================================================================================
/* 
 * File:   WidgetHeader.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:28 AM
 */
//==================================================================================================

#ifndef WIDGETHEADER_HH
#define WIDGETHEADER_HH

//==================================================================================================

#include "Widget.hh"

//==================================================================================================

class WidgetHeader : public Widget
{
public:
    WidgetHeader(Controller *a_pController = 0, Wt::WContainerWidget *a_pParent = 0);
    virtual ~WidgetHeader();
    
    void hideTabs();
    void showTabs();
    
private:
    WAnchor *l_paSales;
    WAnchor *l_paProduction;
    WAnchor *l_paDealiCsson;
};

//==================================================================================================

#endif /* WIDGETHEADER_HH */

//==================================================================================================
