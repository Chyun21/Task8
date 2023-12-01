//include headers and libraries
#include <iostream>
#include "Library.h"
using namespace std;
int main(){
    string cmd, bookName;
    Library library;
    //ask for commands and execute
    while (true) {
        cout << "Enter command: ";
        cin >> cmd;
        if (cmd == "a") {
            cin >> bookName;
            library.addBook(bookName);
        }
        else if (cmd == "r") {
            cin >> bookName;
            library.removeBook(bookName);
        }
        else if (cmd == "p") {
            library.print();
        }
        else if (cmd == "q") {
            cout << "Exiting";
            return 0;
        }
    }
}
