//==================================================================================================
/* 
 * File:   Templates.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:01 AM
 */
//==================================================================================================

#ifndef TEMPLATES_H
#define	TEMPLATES_H

//==================================================================================================

#include <string.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <Wt/WString>

#include "Singleton.hh"

using namespace std;
using namespace Wt;

//==================================================================================================

class Templates
{
private:
    WString m_wsFooter;
    WString m_wsHeader;
    WString m_wsIndex;

    WString openTemplate(std::string a_sFileName);

public:
    Templates();
    ~Templates();
    
    inline WString getFooter()                  { return m_wsFooter; }
    inline WString getHeader()                  { return m_wsHeader; }
    inline WString getIndex()                   { return m_wsIndex; }
};    
  
//==================================================================================================

#endif	/* TEMPLATES_H */

//==================================================================================================
