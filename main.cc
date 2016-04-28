//==================================================================================================
/* 
 * File:   main.cc
 * Author: kdur
 *
 * Created on April 27, 2016, 3:31 PM
 */
//==================================================================================================

#include <Wt/WApplication>
#include <Wt/WContainerWidget>
#include <Wt/WServer>
#include <Wt/WText>
#include <Wt/WString>
#include "view/Controller.hh"
#include <iostream>

//==================================================================================================

static const char *StartURL="/";

using namespace Wt;

class Dealicsson : public WApplication
{
public:
    Dealicsson(const WEnvironment& env)
        : WApplication(env)
    {
        root()->addWidget(new MainView( StartURL, "dealicsson.db"));
    }
};

WApplication* createApplication(const WEnvironment& env)
{
    return new Dealicsson(env);
}

int main(int argc, char** argv)
{
    try
    {
        WServer server(argv[0]);

        server.setServerConfiguration(argc, argv, WTHTTP_CONFIGURATION);

        server.addEntryPoint(Application, createApplication, StartURL);

        if (server.start())
        {
            WServer::waitForShutdown();
            server.stop();
        }
    }
    catch (Wt::WServer::Exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    return 0;
}

//==================================================================================================
