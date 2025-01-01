
#include "admin_functions.hpp"
#include "console_functions.hpp"



void admin_menu() {

    string L1 = " --------------------------- \n";
    string L2 = "|                           |\n";
    string L3 = "|       1.ADD BOOK          |\n";
    string L4 = "|      2.DELETE BOOK        |\n";
    string L5 = "|        3.SEARCH           |\n";
    string L6 = "|      4.UPDATE BOOK        |\n";
    string L8 = "|   5.DISPLAY ALL BOOKS     |\n";
    string L10 = "|    6.ACCOUNT SETTING      |\n";
    string L9 = "|         7.BACK            |\n";
    string L7 = "|       CHOICE -            |\n";
    string L0 = "                                          ADMIN(STAFF) PAGE          ";
    string L01 = "------------------------------------------------------------------------------------------";
    
    //************************************************************

    gotoxy(5, 1);
    SetConsoleTextAttribute(hConsole, 7);
    Delayer_menu(L0);

    gotoxy(5, 2);
    SetConsoleTextAttribute(hConsole, 7);
    Delayer_menu(L01);

    gotoxy(5, 4);
    SetConsoleTextAttribute(hConsole, 10);
    Delayer_menu(L1);
    gotoxy(5, 5);
    SetConsoleTextAttribute(hConsole, 10);
    Delayer_menu(L2);
    gotoxy(5, 6);
    SetConsoleTextAttribute(hConsole, 10);
    Delayer_menu(L3);
    gotoxy(5, 7);
    SetConsoleTextAttribute(hConsole, 10);
    Delayer_menu(L2);
    gotoxy(5, 8);
    SetConsoleTextAttribute(hConsole, 10);
    Delayer_menu(L1);

    //--------------------------------------
  
    gotoxy(35, 4);
    SetConsoleTextAttribute(hConsole, 8);
    Delayer_menu(L1);
    gotoxy(35, 5);
    SetConsoleTextAttribute(hConsole, 8);
    Delayer_menu(L2);
    gotoxy(35, 6);
    SetConsoleTextAttribute(hConsole, 8);
    Delayer_menu(L4);
    gotoxy(35, 7);
    SetConsoleTextAttribute(hConsole, 8);
    Delayer_menu(L2);
    gotoxy(35, 8);
    SetConsoleTextAttribute(hConsole, 8);
    Delayer_menu(L1);

    //--------------------------------------
  
    gotoxy(65, 4);
    SetConsoleTextAttribute(hConsole, 11);
    Delayer_menu(L1);
    gotoxy(65, 5);
    SetConsoleTextAttribute(hConsole, 11);
    Delayer_menu(L2);
    gotoxy(65, 6);
    SetConsoleTextAttribute(hConsole, 11);
    Delayer_menu(L5);
    gotoxy(65, 7);
    SetConsoleTextAttribute(hConsole, 11);
    Delayer_menu(L2);
    gotoxy(65, 8);
    SetConsoleTextAttribute(hConsole, 11);
    Delayer_menu(L1);

    gotoxy(5, 10);
    SetConsoleTextAttribute(hConsole, 14);
    Delayer_menu(L1);
    gotoxy(5, 11);
    SetConsoleTextAttribute(hConsole, 14);
    Delayer_menu(L2);
    gotoxy(5, 12);
    SetConsoleTextAttribute(hConsole, 14);
    Delayer_menu(L6);
    gotoxy(5, 13);
    SetConsoleTextAttribute(hConsole, 14);
    Delayer_menu(L2);
    gotoxy(5, 14);
    SetConsoleTextAttribute(hConsole, 14);
    Delayer_menu(L1);

    //--------------------------------------
    
    gotoxy(35, 10);
    SetConsoleTextAttribute(hConsole, 3);
    Delayer_menu(L1);
    gotoxy(35, 11);
    SetConsoleTextAttribute(hConsole, 3);
    Delayer_menu(L2);
    gotoxy(35, 12);
    SetConsoleTextAttribute(hConsole, 3);
    Delayer_menu(L8);
    gotoxy(35, 13);
    SetConsoleTextAttribute(hConsole, 3);
    Delayer_menu(L2);
    gotoxy(35, 14);
    SetConsoleTextAttribute(hConsole, 3);
    Delayer_menu(L1);

    //--------------------------------------
    
    gotoxy(65, 10);
    SetConsoleTextAttribute(hConsole, 4);
    Delayer_menu(L1);
    gotoxy(65, 11);
    SetConsoleTextAttribute(hConsole, 4);
    Delayer_menu(L2);
    gotoxy(65, 12);
    SetConsoleTextAttribute(hConsole, 4);
    Delayer_menu(L10);
    gotoxy(65, 13);
    SetConsoleTextAttribute(hConsole, 4);
    Delayer_menu(L2);
    gotoxy(65, 14);
    SetConsoleTextAttribute(hConsole, 4);
    Delayer_menu(L1);
    //---------------------------------------------------------------
    gotoxy(5, 16);
    SetConsoleTextAttribute(hConsole, 6);
    Delayer_menu(L1);
    gotoxy(5, 17);
    SetConsoleTextAttribute(hConsole, 6);
    Delayer_menu(L2);
    gotoxy(5, 18);
    SetConsoleTextAttribute(hConsole, 6);
    Delayer_menu(L9);
    gotoxy(5, 19);
    SetConsoleTextAttribute(hConsole, 6);
    Delayer_menu(L2);
    gotoxy(5, 20);
    SetConsoleTextAttribute(hConsole, 6);
    Delayer_menu(L1);
    //------------------------------------------
    gotoxy(5, 21);
    SetConsoleTextAttribute(hConsole, 13);
    Delayer_menu(L1);
    gotoxy(5, 22);
    SetConsoleTextAttribute(hConsole, 13);
    Delayer_menu(L7);
    gotoxy(5, 23);
    SetConsoleTextAttribute(hConsole, 13);
    Delayer_menu(L1);
}



void loginadmin(MYSQL *conn) {

    system("CLS");
    MYSQL_RES *res; 
    MYSQL_ROW row;

    string email, password;
    string correct_email_password = "Logged in Successfully!";
    string incorrect_email_password = "Invalid Email or Password.";
    cin.ignore();

    gotoxy(33, 4);
    cout << "Enter Email :\n";
    gotoxy(55, 3);
    cout << " --------------------------------- \n";
    gotoxy(55, 4);
    cout << "|                                 |\n";
    gotoxy(55, 5);
    cout << " --------------------------------- \n";

    gotoxy(33, 8);
    cout << "Enter Password: ";
    gotoxy(55, 7);
    cout << " --------------------------------- \n";
    gotoxy(55, 8);
    cout << "|                                 |\n";
    gotoxy(55, 9);
    cout << " --------------------------------- \n";

    gotoxy(56, 4);
    getline(cin, email);
    user_email = email;

    gotoxy(56, 8);
    getline(cin, password);
    user_password = password;

	gotoxy(33, 11);
	

    if (checkCredentials(conn, email, password)) {

        gotoxy(50, 13);
        SetConsoleTextAttribute(hConsole, 10);
        Delayer(correct_email_password);

        system("pause");
        system("CLS");

        int AC;
    	admin_page:admin_menu();

        gotoxy(23, 22);
        cin >> AC;

        switch (AC) {

        case 1:
            addbook(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 2:
            Delete(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 3:
            search(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 4:
            updatedbook(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 5:
            displayAllBooks(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 6:
            accountSetting_admin(conn);
            system("pause");
            system("CLS");
            goto admin_page;
            break;

        case 7:
            system("CLS");
            break;

        default:
            cout << "invalid inpute" << endl;
            system("pause");
            system("CLS");
            goto admin_page;
            break;
        }

    } else {
        gotoxy(50, 13);
        SetConsoleTextAttribute(hConsole, 12);
        Delayer(incorrect_email_password);

        system("pause");
        system("CLS");
    }
}



void registerAdmin(MYSQL *conn, const string &firstName, const string &lastName, const string &gender, const string &username, const string &email, const string &password) {
    
    string query = "INSERT INTO admin (first_name, last_name, gender, username, email, password) VALUES ('" + firstName + "', '" + lastName + "', '" + gender + "', '" + username + "', '" + email +
                   "', '" + password + "')";

    string admin_reg_succ = "Admin registration successful! \n";
    string admin_reg_not_succ = " Error Admin registration! \n";
    
    if (mysql_query(conn, query.c_str())) {
        gotoxy(50, 29);
        SetConsoleTextAttribute(hConsole, 11);
        Delayer(admin_reg_not_succ);

    } else {
        gotoxy(50, 29);
        SetConsoleTextAttribute(hConsole, 10);
        Delayer(admin_reg_succ);
    }
}



bool checkCredentials(MYSQL *conn, const string &email, const string &password) {
    
    string query = "SELECT * FROM admin WHERE email = '" + email + "' AND password = '" + password + "'";

    if (mysql_query(conn, query.c_str())) {
        cout << "Error executing SQL query" << endl;
        return false;
    }

    MYSQL_RES *res = mysql_store_result(conn); 
    bool isValid = (mysql_num_rows(res) == 1);
    mysql_free_result(res);

    return isValid;
    
}



void addbook(MYSQL *conn) {

    system("CLS");
    string title, author, publicationDate, department, status;
    cin.ignore();

    gotoxy(15, 3);
    cout << "\t\tEnter book details ";
    gotoxy(15, 5);
    cout << "Title                             : ";

    gotoxy(15, 7);
    cout << "Author                            : ";

    gotoxy(15, 9);
    cout << "Publication Date (YYYY-MM-DD)     : ";

    gotoxy(15, 11);
    cout << "Department                        : ";

    gotoxy(15, 13);
    cout << "Status (Available / Not Available): ";

    gotoxy(52, 5);
    getline(cin, title);
    gotoxy(52, 7);
    getline(cin, author);
    gotoxy(52, 9);
    getline(cin, publicationDate);
    gotoxy(52, 11);
    getline(cin, department);
    gotoxy(52, 13);
    getline(cin, status);

    string query =
        "INSERT INTO books (title, author, publication_date, department, status) VALUES ('" + title + "', '" + author + "', '" + publicationDate + "', '" + department + "', '" + status + "')";

    string str = "\n\t\tAdding  ...";
    int color = 13;

    countdown(str, color, 26, 15);

    if (mysql_query(conn, query.c_str())) {
        cout << "\n\t\tError executing SQL query \n" << endl;

    } else
        cout << "\n\t\tBook added successfully!\n" << endl;
}



void Delete(MYSQL *conn) {
	
    system("CLS");
    MYSQL_RES *res;
    MYSQL_ROW row;

    string check_delete = "Are you sure you want to delete this book(y/n)? --> ";
    string bookTitle;
    cin.ignore();

    gotoxy(15, 4);
    cout << "Enter the book title to delete: ";
    gotoxy(47, 4);
    getline(cin, bookTitle);

    gotoxy(15, 7);
    Delayer(check_delete);
    char check_d;
    gotoxy(70, 7);
    cin >> check_d;

    if (check_d == 'y' || check_d == 'Y') {
       
        string checkQuery = "SELECT * FROM books WHERE title = '" + bookTitle + "'";

        if (mysql_query(conn, checkQuery.c_str())) {
            cout << "\n\t\tERROR EXECUTING SQL QUERY.\n" << mysql_error(conn) << endl;
            return;
        }

        res = mysql_store_result(conn); 
        if (res == NULL) {
            cout << "\n\t\tERROR STORING RESULT.\n" << mysql_error(conn) << endl;
            return;
        }

        if ((row = mysql_fetch_row(res))) {
        	
            string deleteQuery = "DELETE FROM books WHERE title = '" + bookTitle + "'";
            string str = "\n\t\tDeleting...  ";
            int color = 12;

            countdown(str, color, 29, 9);
            if (mysql_query(conn, deleteQuery.c_str())) {
                cout << "\n\t\tERROR DELETING BOOK \n" << mysql_error(conn) << endl;
            } else {
                cout << "\n\t\tBOOK DELETED SUCCESSFULLY!\n" << endl;
            }
        } else {
            cout << "\n\t\tBOOK NOT FOUND. PLEASE CHECK THE TITLE.\n" << endl;
        }

        mysql_free_result(res);
    }
}



void search(MYSQL *conn) {
    system("CLS");

    MYSQL_RES *res; 
    MYSQL_ROW row;
    string str = "\n\t\tSearching... ";
    int color = 10;
    string searchBy;
    string keyword;
    cin.ignore();
   
    gotoxy(15, 4);
    cout << "Search by (title/author): ";
    gotoxy(42, 5);
    cout << "-----------------------------------------";
    gotoxy(42, 4);
    cin >> searchBy;

    cin.ignore(); 

    gotoxy(15, 7);
    cout << "Enter the " << searchBy << " to search: ";
    gotoxy(42, 8);
    cout << "-----------------------------------------";
    gotoxy(42, 7);
    getline(cin, keyword);

    string query;
    if (searchBy == "title") {
        query = "SELECT * FROM books WHERE title LIKE '%" + keyword + "%'";
    } else if (searchBy == "author") {
        query = "SELECT * FROM books WHERE author LIKE '%" + keyword + "%'";
    } else {
        cout << "\n\t\tInvalid search criteria." << endl;
    }

    countdown(str, color, 29, 9);
    cout << endl << endl;
    
    if (mysql_query(conn, query.c_str())) {
        cout << "\n\t\tError executing SQL query: " << endl;
        return;
    }

    else {

        res = mysql_use_result(conn);

        if ((row = mysql_fetch_row(res))) {
            cout << "\n\n\t\tMatching books found:" << endl;
            while (row) {
                cout << "\n\n";
                // Print book details
                cout << "\t\tTitle           : " << row[1] << endl;
                cout << "\t\tAuthor          : " << row[2] << endl;
                cout << "\t\tPublication Date: " << row[3] << endl;
                cout << "\t\tDepartment      : " << row[4] << endl;
                cout << "\t\tStatus          : " << row[5] << endl;
                cout << "\t\t-----------------------------------------------------------------------------" << endl;

                row = mysql_fetch_row(res);
            }
        } else {
            cout << "\n\t\tNo matching books found." << endl;
        }
    }
    
    mysql_free_result(res);
}



void updatedbook(MYSQL *conn) {

    system("CLS");
    MYSQL_RES *res; 
    MYSQL_ROW row;
    string title, author, publicationDate, department, status;
    cin.ignore();
   
    gotoxy(15, 4);
    cout << "Enter the title of the book to update: ";
    gotoxy(55, 5);
    cout << "-----------------------------------------";
    gotoxy(55, 4);
    getline(cin, title);

    string query = "SELECT * FROM books WHERE title = '" + title + "'";

    if (mysql_query(conn, query.c_str())) {
        cout << "\tError executing SQL query: " << endl;
        return;
    } else {

        res = mysql_use_result(conn);

        if ((row = mysql_fetch_row(res))) {
            cout << "\n\n";
            cout << "\t\t\tEnter new book details\n" << endl;
            cout << "\t\tAuthor                       : ";
            getline(cin, author);
            cout << "\t\tPublication Date (YYYY-MM-DD): ";
            getline(cin, publicationDate);
            cout << "\t\tDepartment                   : ";
            getline(cin, department);
            cout << "\t\tStatus                       : ";
            getline(cin, status);

            mysql_free_result(res);

            query =	"UPDATE books SET author = '" + author + "', publication_date = '" + publicationDate + "', department = '" + department + "', status = '" + status + "' WHERE title = '" + title + "'";

            string str = "\n\t\tUpdating  ...";
            int color = 14;
            countdown(str, color, 29, 14);

            if (mysql_query(conn, query.c_str())) {
                cout << "\n\t\tError executing SQL query \n" << endl;
                return;
            }

            cout << "\n\t\tBook details updated successfully!\n" << endl;
        } else {
            cout << "\n\t\tBook not found in the database.\n" << endl;
        }
    }
}



void displayAllBooks(MYSQL *conn) {
    system("CLS");
    MYSQL_RES *res; 
    MYSQL_ROW row;
    
    string query = "SELECT * FROM books";
    if (mysql_query(conn, query.c_str())) {
        cout << "\tError executing SQL query: " << endl;

    }else {

        res = mysql_use_result(conn);

        int book_id = 1;
        while ((row = mysql_fetch_row(res))) {

            cout << endl;
            cout << "\t" << book_id << "."
                 << "  Title: " << row[1] << endl;
            cout << "\t    Author: " << row[2] << endl;
            cout << "\t    Publication Date: " << row[3] << endl;
            cout << "\t    Department: " << row[4] << endl;
            cout << "\t    Status: " << row[5] << endl;
            cout << "--------------------------------------------------------------------------------------------" << endl;
            book_id++;
        }
 
        mysql_free_result(res);
    }
}



void accountSetting_admin(MYSQL* conn) {
    MYSQL_RES* res; 
    MYSQL_ROW row;  

    system("CLS");
    string email = user_email;
    string password = user_password;

    string query = "SELECT * FROM admin WHERE email = '" + email + "' AND password = '" + password + "'";

    if (mysql_query(conn, query.c_str())) {
        cout << "\n\tError executing SQL query\n " << mysql_error(conn) << endl;
        return;
    }

    res = mysql_store_result(conn);
    if (res == NULL) {
        cout << "\n\tError storing result\n " << mysql_error(conn) << endl;
        return;
    }

    if ((row = mysql_fetch_row(res))) {
        cout << "\n\n";
        cout << "\t\t\tYour Profile  " << endl;
        cout << "\t-----------------------------------------" << endl << endl;
        cout << "\tFirst Name : " << row[1] << endl << endl;
        cout << "\tLast Name  : " << row[2] << endl << endl;
        cout << "\tGender     : " << row[3] << endl << endl;
        cout << "\tUsername   : " << row[4] << endl << endl;
        cout << "\tEmail      : " << row[5] << endl << endl;
        cout << "\tPassword   : " << row[6] << endl << endl;

        char choice;
        cout << "\n\tDo you want to edit your profile? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            cin.ignore(); 
            
            string firstName, lastName, gender, username, newPassword, newEmail;
            cout << endl << endl;
            cout << "\tEnter first name : ";
            cin.ignore();
            getline(cin, firstName);

            cout << "\tEnter last name   : ";
            getline(cin, lastName);

            cout << "\tEnter gender      : ";
            getline(cin, gender);

            cout << "\tEnter username    : ";
            getline(cin, username);

            cout << "\tEnter email       : ";
            getline(cin, newEmail);

            cout << "\tEnter password    : ";
            getline(cin, newPassword);

            query = "UPDATE admin SET first_name = '" + firstName + "', last_name = '" + lastName + "', gender = '" + gender + "', username = '" + username + "', email = '" + newEmail +
                    "', password = '" + newPassword + "' WHERE email = '" + email + "' AND password = '" + password + "'";

            if (mysql_query(conn, query.c_str())) {
                cout << "\n\tError executing SQL query\n " << mysql_error(conn) << endl;
            } else {
                cout << "\n\tProfile updated successfully!\n" << endl;
            }
        }
    } else {
        cout << "\n\tProfile not found. Invalid email or password.\n" << endl;
    }

    mysql_free_result(res);
}



void countdown(string str, int color, int x, int y) {

    int seconds = 3;
    SetConsoleTextAttribute(hConsole, color);
    Delayer_menu(str);

    while (seconds > 0) {
        gotoxy(x, y);
        cout << "\r";
        gotoxy(x, y);
        cout << seconds;
        gotoxy(x, y);
        cout.flush();

        Sleep(1000); 

        seconds--;
    }

    cout << endl;
}
