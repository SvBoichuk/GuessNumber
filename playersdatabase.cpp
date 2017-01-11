#include "playersdatabase.h"

void PlayersDataBase::init(const DbConfigData & defaultConf)
{
    db.setDatabaseName(defaultConf.dbName);
    db.setUserName(defaultConf.dbUserName);
    db.setPassword(defaultConf.dbPass);
    db.setHostName(defaultConf.dbHost);
    db.setPort(defaultConf.dbPort);

    isOpen = db.open();
}

PlayersDataBase::PlayersDataBase()
{
    init();
   //TODO
    if(isOpen)
        ;
    else ;
}
