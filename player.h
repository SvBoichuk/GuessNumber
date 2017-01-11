#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using std::string;

class UserStatistic final {
private:
    std::size_t winCount;
    std::size_t loseCount;
public:
    explicit UserStatistic(int win = 0, int lose = 0);

    void setUserStat(int win, int lose) noexcept {
        winCount = win;
        loseCount = lose;
    }
    std::pair<int, int> getUserStat() const noexcept {return std::make_pair(winCount, loseCount);}

    UserStatistic(const UserStatistic&) = default;
    UserStatistic& operator=(const UserStatistic&) = default;
    ~UserStatistic() = default;
};

class Player final
{
private:
    string login;
    string password;
    string playerName;
    UserStatistic stat;
public:
    Player(const string& login_, const string& pass_, const  string& name_,
           const UserStatistic& stat_);

    string getName() const noexcept     {return playerName;}
    string getLogin() const noexcept    {return login;}
    string getPassword() const noexcept {return password;}
    std::pair<int, int> getStatistic() const noexcept { return stat.getUserStat();}

    void setPlayerName(const string& name_) noexcept    {playerName = name_;}
    void setPassword(const string& pass_) noexcept      {password = pass_;}
    void setLogin(const string& login_) noexcept        {login = login_;}
    void loadStatistic(int win, int lose) noexcept { stat.setUserStat(win, lose);}

    Player() = default;
    Player(const Player&) = default;
    Player& operator=(const Player&) = default;
    ~Player() = default;
};


#endif // PLAYER_H
