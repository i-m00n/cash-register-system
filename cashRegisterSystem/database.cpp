#include "database.h"
Database::Database(const char* filename) {
    int rc = sqlite3_open(filename, &m_db);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Cannot open database");
        msg.exec();
    }
}

Database::~Database() {
    sqlite3_close(m_db);
}

void Database::initialize() {
    // Create table
    const char* createProdTable = "CREATE TABLE IF NOT EXISTS Products (name TEXT NOT NULL, quantity INTEGER NOT NULL, price TEXT NOT NULL, type TEXT NOT NULL);";
    const char* createCustomerTable = "CREATE TABLE IF NOT EXISTS Customers (name TEXT NOT NULL, phone_number TEXT NOT NULL PRIMARY KEY, total_paid INTEGER NOT NULL, class TEXT NOT NULL);";
    const char* createOperationsTable = "CREATE TABLE IF NOT EXISTS Operations (name TEXT NOT NULL, quantity INTEGER NOT NULL, price TEXT NOT NULL, type TEXT NOT NULL, operation_type TEXT NOT NULL, date TEXT NOT NULL);";
    char* errMsg;
    int rc = sqlite3_exec(m_db, createProdTable, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in initializing database");
        msg.exec();
    }
    rc = sqlite3_exec(m_db, createCustomerTable, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in initializing database");
        msg.exec();
    }
    rc = sqlite3_exec(m_db, createOperationsTable, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in initializing database");
        msg.exec();
    }
    sqlite3_free(errMsg);
}

void Database::insertCustomerRows(string name, string phone_number, int total_paid, string Class)
{
    const char* insertProduct = sqlite3_mprintf("INSERT INTO Customers(name, phone_number, total_paid, class) VALUES('%q', '%q', %d, '%q');", name.c_str(), phone_number.c_str(), total_paid, Class.c_str());
    char* errMsg;
    int rc = sqlite3_exec(m_db, insertProduct, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText(errMsg);
        msg.exec();
    }
}

void Database::DeleteCustomerRow(string phoneNumber) {
    sqlite3_stmt* stmt;
    const char* delete_query = "DELETE FROM Customers WHERE phone_number = ?";
    int rc = sqlite3_prepare_v2(m_db, delete_query, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        // handle error
        return;
    }

    rc = sqlite3_bind_text(stmt, 1, phoneNumber.c_str(), -1, SQLITE_TRANSIENT);
    if (rc != SQLITE_OK) {
        // handle error
        return;
    }

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        // handle error
        return;
    }

    sqlite3_finalize(stmt);
}

void Database::updateCustomerTotalPaid(string phone_number, float additional_pay, char type)
{
    sqlite3_stmt* stmt;
    const char* gettingTotalPaid = "SELECT total_paid FROM Customers WHERE phone_number = ?";

    int rc = sqlite3_prepare_v2(m_db, gettingTotalPaid, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("updateCustomerTotalPaid prepare wrong");
        msg.exec();
        return;
    }

    rc = sqlite3_bind_text(stmt, 1, phone_number.c_str(), -1, SQLITE_TRANSIENT);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText(sqlite3_errmsg(m_db));
        msg.exec();
        return;
    }

    float current_total = 0.0f;
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW)
        current_total = static_cast<float>(sqlite3_column_double(stmt, 0));
    sqlite3_finalize(stmt);
    float new_total = 0;
    if(type=='+')
        new_total = current_total + additional_pay;
    else if(type=='-')
         new_total = current_total - additional_pay;

    const char* update_query = "UPDATE Customers SET total_paid = ? WHERE phone_number = ?";
    sqlite3_prepare_v2(m_db, update_query, -1, &stmt, NULL);
    sqlite3_bind_double(stmt, 1, new_total);
    sqlite3_bind_text(stmt, 2, phone_number.c_str(), -1, SQLITE_TRANSIENT);

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        QMessageBox msg;
        msg.setText(sqlite3_errmsg(m_db));
        msg.exec();
        return;
    }
    sqlite3_finalize(stmt);
}

void Database::updateProductQuantity(string name, int additional_quantity, char type) {

    sqlite3_stmt* stmt;
    const char* totalQuantity = "SELECT quantity FROM products WHERE name = ?";
    int rc = sqlite3_prepare_v2(m_db, totalQuantity, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("updateProductQuantity prepare wrong");
        msg.exec();
        return;
    }
    rc = sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText(sqlite3_errmsg(m_db));
        msg.exec();
        return;
    }

    int currentQuantity = 0;
    rc = sqlite3_step(stmt);
    if (rc == SQLITE_ROW)
        currentQuantity = static_cast<int>(sqlite3_column_double(stmt, 0));
    sqlite3_finalize(stmt);
    int new_Quantity = 0;
    if (type == '+')
        new_Quantity = currentQuantity + additional_quantity;
    else if (type == '-')
        new_Quantity = currentQuantity - additional_quantity;

    const char* update_query = "UPDATE products SET quantity = ? where name = ?";
    sqlite3_prepare_v2(m_db, update_query, -1, &stmt, NULL);
    sqlite3_bind_int(stmt, 1, new_Quantity);
    sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_TRANSIENT);
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        QMessageBox msg;
        msg.setText(sqlite3_errmsg(m_db));
        msg.exec();
        return;
    }
    sqlite3_finalize(stmt);
}

void Database::insertProdRows(string name, string price, int quantity, string type)
{
    const char* insertProduct = sqlite3_mprintf("INSERT INTO Products(name, price, quantity, type) VALUES('%q', '%q', %d, '%q');", name.c_str(), price.c_str(), quantity, type.c_str());
    char* errMsg;
    int rc = sqlite3_exec(m_db, insertProduct, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText(errMsg);
        msg.exec();
    }
}

void Database::DeleteProdRow(string name) {
    sqlite3_stmt* stmt;
    const char* delete_query = "DELETE FROM products WHERE name = ?";
    int rc = sqlite3_prepare_v2(m_db, delete_query, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        // handle error
        return;
    }

    rc = sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
    if (rc != SQLITE_OK) {
        // handle error
        return;
    }

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        // handle error
        return;
    }

    sqlite3_finalize(stmt);

}

void Database::insertOrUpdateOperation(string name, int quantity, float price, string operationType, char t)
{
    string type = (t == '+') ? "sell" : "retrieve";

    string date = getTodayDate();

    if (isRowExist(name, operationType, type, date)) {
        updateOperation(name, quantity, price, operationType, type, date);
    }
    else {
        insertOperation(name, quantity, price, operationType, type, date);
    }
}

void Database::insertOperation(string name, int quantity, float price, string operationType, string type, string date) {
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(m_db, "INSERT INTO operations (name, quantity, price, type, operation_type, date) VALUES (?, ?, ?, ?, ?, ?)", -1, &stmt, NULL) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_int(stmt, 2, quantity) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_double(stmt, 3, price) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 4, type.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 5, operationType.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 6, date.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        sqlite3_finalize(stmt);
        return;
    }
    sqlite3_finalize(stmt);
}

void Database::updateOperation(string name, int quantity, float price, string operationType, string type, string date) {
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(m_db, "UPDATE operations SET price = price + ?, quantity = quantity + ? WHERE name = ? AND type = ? AND operation_type = ? AND date = ?", -1, &stmt, NULL) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_double(stmt, 1, price) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_int(stmt, 2, quantity) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 3, name.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 4, type.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 5, operationType.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 6, date.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        sqlite3_finalize(stmt);
        return;
    }
    sqlite3_finalize(stmt);
}

bool Database::isRowExist(string name, string operationType, string type, string date) {
    std::stringstream ss;
    ss << "SELECT COUNT(*) FROM Operations WHERE name = ? AND operation_type = ? AND type = ? AND date = ?";
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(m_db, ss.str().c_str(), -1, &stmt, NULL) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    if (sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    if (sqlite3_bind_text(stmt, 2, operationType.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    if (sqlite3_bind_text(stmt, 3, type.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    if (sqlite3_bind_text(stmt, 4, date.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return false;
    }
    bool exists = false;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        int count = sqlite3_column_int(stmt, 0);
        exists = count > 0;
    }
    sqlite3_finalize(stmt);
    return exists;
}

bool Database::checkPhoneNumber(const string phoneNumber, QString& customerClass) {
    sqlite3_stmt* stmt;
    const string query = "SELECT class FROM Customers WHERE phone_number = ?";
    if (sqlite3_prepare_v2(m_db, query.c_str(), -1, &stmt, NULL) != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Cannot prepare query");
        msg.exec();
    }

    if (sqlite3_bind_text(stmt, 1, phoneNumber.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Cannot bind parameter");
        msg.exec();
    }

    int result = sqlite3_step(stmt);

    if (result == SQLITE_ROW) {
        customerClass = QString::fromUtf8((const char*)sqlite3_column_text(stmt, 0));
        sqlite3_finalize(stmt);
        return true;
    }
    sqlite3_finalize(stmt);
    return false;
}

void Database::editProductPrice(string name ,string price) {
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(m_db, "UPDATE Products SET price = ? WHERE name = ?", -1, &stmt, NULL) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_bind_text(stmt, 1, price.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }

    if (sqlite3_bind_text(stmt, 2, name.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return;
    }
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        sqlite3_finalize(stmt);
        return;
    }
    sqlite3_finalize(stmt);
}

string Database::selectProductPrice(string name) {
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(m_db, "SELECT price FROM Products WHERE name = ?", -1, &stmt, NULL) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return 0;
    }

    if (sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        sqlite3_finalize(stmt);
        return 0;
    }
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        string price = (const char*)sqlite3_column_text(stmt, 0);
        sqlite3_finalize(stmt);
        return price;
    }
    sqlite3_finalize(stmt);

    return 0;
}

string Database::getTodayDate() {
    // Get the current system time
    auto now = std::chrono::system_clock::now();

    // Convert the system time to a time_t value
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);

    // Convert the time_t value to a struct tm value
    std::tm* time_info = localtime(&current_time);

    // Format the date as a string in "yyyy-mm-dd" format
    std::ostringstream oss;
    oss << std::put_time(time_info, "%Y-%m-%d");
    // return date as string
    return oss.str();
}

void Database::beginTransaction() {
    // Begin a transaction using SQLite API
    int rc = sqlite3_exec(this->m_db, "BEGIN;", 0, 0, 0);
    if (rc != SQLITE_OK) {
        return;
    }
}

void Database::commitTransaction() {
    // Commit the transaction using SQLite API
    int rc = sqlite3_exec(this->m_db, "COMMIT;", 0, 0, 0);
    if (rc != SQLITE_OK) {
        return;
    }
}

void Database::rollbackTransaction() {
    // Rollback the transaction using SQLite API
    int rc = sqlite3_exec(this->m_db, "ROLLBACK;", 0, 0, 0);
    if (rc != SQLITE_OK) {
        return;
    }
}

void Database::ExecuteStatement(const char* sql) {
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(m_db, sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        // handle error
        return;
    }

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        // handle error
        return;
    }

    sqlite3_finalize(stmt);
}

void Database::DeleteAllProdRow() {
    ExecuteStatement("DELETE FROM products");
    ExecuteStatement("VACUUM");
}