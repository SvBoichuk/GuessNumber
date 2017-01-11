#ifndef PLAYERSDATABASE_H
#define PLAYERSDATABASE_H

#include "someconstants.h"

struct DbConfigData {
    QString dbName;
    QString dbPass;
    QString dbHost;
    QString dbPort;
    QString dbUserName;

    DbConfigData() {
        dbName = csDbName;
        dbPass = csDbPass;
        dbHost = csDbHost;
        dbPort = csDbPort;
        dbUserName = csDbUserName;
    }
};

class PlayersDataBase
{
private:
    QSqlDatabase db;
    bool isOpen;

    DbConfigData defaultConfig;

    void init(const DbConfigData& defaultConf = defaultConfig);
public:
    PlayersDataBase();

    bool isOpenDb() const noexcept { return isOpen; }
};

#endif // PLAYERSDATABASE_H
