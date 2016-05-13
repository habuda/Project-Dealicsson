//==================================================================================================
/* 
 * File:   WidgetIndex.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:29 AM
 */
//==================================================================================================

#ifndef WIDGETINDEX_HH
#define WIDGETINDEX_HH

//==================================================================================================

#include "Widget.hh"
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WAnchor>

//==================================================================================================

using namespace Wt;

//==================================================================================================

class WidgetIndex : public Widget
{
public:
    WidgetIndex(Controller *a_pController = 0, Wt::WContainerWidget *a_pParent = 0);
    virtual ~WidgetIndex();
    
    void loadGameById();
    void newGame();
    
private:
    WAnchor *start;
    WAnchor *load;
    WLineEdit        *textField;
};

//==================================================================================================

#endif /* WIDGETINDEX_HH */

//==================================================================================================
