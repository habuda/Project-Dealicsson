//==================================================================================================
/* 
 * File:   Session.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:18 AM
 */
//==================================================================================================

#ifndef SESSION_HH
#define SESSION_HH

//==================================================================================================

#include <Wt/Dbo/Session>
#include <Wt/Dbo/ptr>
#include <Wt/WSignal>
#include <Wt/Dbo/backend/Sqlite3>


//==================================================================================================

namespace dbo = Wt::Dbo;

class User;

class Session : public dbo::Session
{
public:
  Session(const std::string& sqliteDb);

  void setUser(dbo::ptr<User> user);
  dbo::ptr<User> user() const { return user_; }


private:
  dbo::backend::Sqlite3 connection_;
  dbo::ptr<User> user_;
};

//==================================================================================================

#endif /* SESSION_HH */

//==================================================================================================
