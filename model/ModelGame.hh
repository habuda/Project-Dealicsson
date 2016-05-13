/* 
 * File:   ModelGame.hh
 * Author: abaj
 *
 * Created on May 5, 2016, 1:48 PM
 */

#ifndef MODELGAME_HH
#define	MODELGAME_HH

//==================================================================================================

class ModelData;

//==================================================================================================

#include "../Functions.hh"
#include "../Session.hh"
#include "db_objects/Game.hh"
#include "../model/Product.hh"

//==================================================================================================

namespace dbo = Wt::Dbo;

//==================================================================================================

class ModelGame
{
public:
    ModelGame(ModelData *a_pModelData, Session &a_rMainSession);
    virtual ~ModelGame();
    
    dbo::ptr<Game> createNewGame();
    void increaseScore(int value = 1);
    dbo::ptr<Game> getGameById(long long a_lGameId);
    int getScore();
    
    Product weed;
private:
    Session &m_rSession;
    ModelData *m_pModelData;
};

//==================================================================================================

#endif	/* MODELGAME_HH */

