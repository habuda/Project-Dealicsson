/* 
 * File:   Game.hh
 * Author: abaj
 *
 * Created on May 5, 2016, 1:44 PM
 */

#ifndef GAME_HH
#define	GAME_HH

//==================================================================================================

#include <Wt/Dbo/Types>
#include <Wt/WDateTime>
#include <Wt/Dbo/WtSqlTraits>

//==================================================================================================

using namespace Wt;
namespace dbo = Wt::Dbo;

//==================================================================================================

class Game
{
public:
    WDateTime date;
    int score;
    double money;

    template<class Action>
    void persist(Action& a)
    {
        dbo::field(a, date, "date");
        dbo::field(a, score, "score");
        dbo::field(a, money, "money");
    }
};

//==================================================================================================

typedef dbo::collection< dbo::ptr<Game> > Games;
typedef std::vector< dbo::ptr<Game> > CopiedGames;

//==================================================================================================

DBO_EXTERN_TEMPLATES(Game);

//==================================================================================================

//==================================================================================================

#endif	/* GAME_HH */

