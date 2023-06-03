#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "nodenot_bd9"
#define CONNECT_TYPE "QODBC"
#define USERNAME "rlaborde003_bd"
#define HOSTNAME "lakartxela.iutbayonne.univ-pau.fr"
#define PORT 3306

class Database {

public:
    Database();
    bool openDataBase();
    void closeDataBase();
private:
    QSqlDatabase myDb;
};

#endif // DATABASE_H
