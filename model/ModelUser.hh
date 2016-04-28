//==================================================================================================
/* 
 * File:   ModelUser.hh
 * Author: kdur
 *
 * Created on April 28, 2016, 9:35 AM
 */
//==================================================================================================

#ifndef MODELUSER_HH
#define MODELUSER_HH

//==================================================================================================

class ModelData;

//==================================================================================================

#include "../Functions.hh"
#include "../Session.hh"
#include "db_objects/User.hh"

//==================================================================================================

namespace dbo = Wt::Dbo;

//==================================================================================================

class ModelUser
{
public:
    ModelUser(ModelData *a_pModelData, Session &a_rMainSession);
    virtual ~ModelUser();
    
    dbo::ptr<User> createNewUser(WString a_wsEmail, WString a_wsName);
    void changeUserName(dbo::ptr<User> a_User, WString a_wsName);
    dbo::ptr<User> getUserById(long long a_lUserId);
    
private:
    Session &m_rSession;
    ModelData *m_pModelData;
};

//==================================================================================================

#endif /* MODELUSER_HH */

//==================================================================================================
