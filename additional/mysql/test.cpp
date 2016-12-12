#include <stdlib.h>
#include <iostream>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
using namespace std;

int main(){
    try {
        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "123456");
        con->setSchema("prog1");
        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT matricula, nome from alunos");
        cout << "Mat.\tNome" << endl;
        while (res->next()) {
            cout << res->getString("matricula") << "\t";
            cout << res->getString("nome") << endl;
        }
        delete res;
        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        cout << "# ERR: SQLException in " << __FILE__;
        cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
        cout << "# ERR: " << e.what();
        cout << " (MySQL error code: " << e.getErrorCode();
        cout << ", SQLState: " << e.getSQLState() << " )" << endl;
    }
    return 1;
}
