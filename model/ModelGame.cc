//==================================================================================================
/* 
 * File:   ModelUser.cc
 * Author: kdur
 *
 * Created on April 28, 2016, 9:36 AM
 */
//==================================================================================================

#include "ModelGame.hh"
#include "ModelData.hh"

//==================================================================================================

ModelGame::ModelGame(ModelData *a_pModelData, Session &a_rSession)
        :   m_rSession(a_rSession),
            m_pModelData(a_pModelData)
{
}

//==================================================================================================

ModelGame::~ModelGame()
{
}

//==================================================================================================

dbo::ptr<Game> ModelGame::createNewGame()
{
    std::cerr << "\nT12\n";
    dbo::Transaction t(m_rSession);
    std::cerr << "\nT2\n";
    dbo::ptr<Game> l_Game;
    std::cerr << "\nT3\n";
    try
    {
    std::cerr << "\nT4\n";
        Game *l_pGame           = new Game();
    std::cerr << "\nT5\n";
        l_pGame->date           = Wt::WDateTime::currentDateTime();
    std::cerr << "\nT6\n";
        l_pGame->score          = 0;
       // l_pGame->money          = 0;
    std::cerr << "\nT7\n";
        l_Game                  = m_rSession.add(l_pGame);
    std::cerr << "\nT8\n";
    }
    catch(dbo::Exception &e)
    {
        std::cerr<< std::endl << "ModelGame::createNewGame() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
        std::cerr<< "\nError ModelGame::createNewGame() -- catch Error\n";
    }
    std::cerr << "\nT9\n";
    t.commit();
    std::cerr << "\nT10\n";
    
    return l_Game;
}

//==================================================================================================

void ModelGame::increaseScore(int value)
{
    dbo::Transaction t(m_rSession);
    try
    {
        if(m_rSession.game())
        {
    std::cerr << "\nK3\n";
            Game *l_pGame               = m_rSession.game().modify();
    std::cerr << "\nK4\n";
            l_pGame->score              += value;
    std::cerr << "\nK5\n";
        }
    }
    catch(dbo::Exception &e)
    {
        std::cerr<< std::endl << "ModelGame::increaseScore() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
        std::cerr<< "\nError ModelGame::increaseScore() -- catch Error\n";
    }
    std::cerr << "\nK6\n";
    t.commit();
    std::cerr << "\nK7\n";
}

//==================================================================================================

dbo::ptr<Game> ModelGame::getGameById(long long a_lGameId)
{
    std::cerr << "\nMG1\n";
    dbo::ptr<Game> l_pGame;
    
    std::cerr << "\nMG2\n";
    dbo::Transaction t(m_rSession);
    try
    {
    std::cerr << "\nMG3\n";
  
    std::cerr << "\nMG4\n";
    l_pGame     = m_rSession.find<Game>().where("id = ?").bind(a_lGameId);
   
    }
    catch(dbo::Exception &e)
    {
    std::cerr << "\nMG6\n";
        std::cerr<< std::endl << "ModelGame::getGameById() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
    std::cerr << "\nMG7\n";
        std::cerr<< "\nError ModelGame::getGameById() -- catch Error\n";
    }
    std::cerr << "\nMG8\n";
    t.commit();
    std::cerr << "\nMG9\n";
    return l_pGame;
}

//==================================================================================================

int ModelGame::getScore(){
    
    int scr = 0;
    
    dbo::Transaction t(m_rSession);
    try
    {
        if(m_rSession.game())
        {
            Game *l_pGame               = m_rSession.game().modify();
            scr                         = l_pGame->score;
        }
    }
    catch(dbo::Exception &e)
    {
        std::cerr<< std::endl << "ModelGame::increaseScore() Error dbo: "<< e.what() <<std::endl;
    }
    catch(...)
    {
        std::cerr<< "\nError ModelGame::increaseScore() -- catch Error\n";
    }
    t.commit();
    return scr;
}
