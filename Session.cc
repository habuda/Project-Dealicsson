//==================================================================================================
/* 
 * File:   Session.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:19 AM
 */
//==================================================================================================

#include "Session.hh"

#include "model/db_objects/User.hh"
#include <iostream>

//==================================================================================================

namespace dbo = Wt::Dbo;

//==================================================================================================

Session::Session(const std::string& sqliteDb)
  : connection_(sqliteDb)
{
    setConnection(connection_);

    mapClass<User>("user");

//    try
//    {
//        createTables();
//    }
//    catch(std::exception& e)
//    {
//        std::cerr << e.what() << std::endl;
//        std::cerr << "Using existing database";
//    }
}

void Session::setUser(dbo::ptr<User> user)
{
  user_ = user;
}

//==================================================================================================
