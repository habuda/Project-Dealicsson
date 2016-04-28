//==================================================================================================
/* 
 * File:   ModelUser.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:36 AM
 */
//==================================================================================================

#include "ModelUser.hh"
#include "ModelData.hh"

//==================================================================================================

ModelUser::ModelUser(ModelData *a_pModelData, Session &a_rSession)
        :   m_rSession(a_rSession),
            m_pModelData(a_pModelData)
{
}

//==================================================================================================

ModelUser::~ModelUser()
{
}

//==================================================================================================

dbo::ptr<User> ModelUser::createNewUser(WString a_wsEmail, WString a_wsName)
{
    dbo::Transaction t(m_rSession);
    dbo::ptr<User> l_User;
    try
    {
        User *l_pUser           = new User();
        l_pUser->e_mail         = a_wsEmail;
        l_User                  = m_rSession.add(l_pUser);
    }
    catch(dbo::Exception &e)
    {
        std::cerr<< std::endl << "ModelUser::createNewUser() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
        std::cerr<< "\nError ModelUser::createNewUser() -- catch Error\n";
    }
    t.commit();
    
    return l_User;
}

//==================================================================================================

void ModelUser::changeUserName(dbo::ptr<User> a_User, WString a_wsName)
{
    dbo::Transaction t(m_rSession);
    try
    {
        if(a_User)
        {
            User *l_pUser               = a_User.modify();
            l_pUser->name               = a_wsName;
        }
    }
    catch(dbo::Exception &e)
    {
        std::cerr<< std::endl << "ModelUser::changeUserName() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
        std::cerr<< "\nError ModelUser::changeUserName() -- catch Error\n";
    }
    t.commit();
}

//==================================================================================================
