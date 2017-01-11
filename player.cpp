#include "player.h"

Player::Player(const std::string &login_, const std::string &pass_, const std::string &name_, const UserStatistic &stat_) :
    login(login_), password(pass_), playerName(name_), stat(stat_)
{

}


UserStatistic::UserStatistic(int win, int lose) : winCount(win) ,
    loseCount(lose)
{

}
