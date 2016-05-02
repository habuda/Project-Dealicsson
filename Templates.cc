//==================================================================================================
/* 
 * File:   Templates.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:01 AM
 */
//==================================================================================================

#include "Templates.hh"
#include "Functions.hh"

//==================================================================================================

Templates::Templates()
{
    m_wsFooter                  = openTemplate("footer.tpl");
    m_wsHeader                  = openTemplate("header.tpl");
    m_wsIndex                   = openTemplate("index.tpl");
    m_wsSales                   = openTemplate("sales.tpl");
    m_wsProduction              = openTemplate("production.tpl");
}

//==================================================================================================

Templates::~Templates()
{
}

//==================================================================================================

WString Templates::openTemplate(std::string a_sFileName)
{
    std::ifstream l_isFileStream;
    std::string l_sLine;
    std::string l_sTemplate         = "";
    std::string l_sFileName         = "templates/" + a_sFileName;

    l_isFileStream.open(l_sFileName.c_str());

    if(l_isFileStream.is_open())
    {
        while(!l_isFileStream.eof())
        {
            std::getline(l_isFileStream, l_sLine);
            l_sTemplate             +=l_sLine;
            
            std::cerr << "\nLINIA: " << l_sLine << "\n";
        }
    }
    else
    {
        std::cerr << "Error in template file: " << a_sFileName << "\n";
    }

    l_isFileStream.close();

    return WString::fromUTF8(l_sTemplate, false);
}

//==================================================================================================
