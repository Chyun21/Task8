//include headers and libraries
#include <iostream>
#include <array>
#include <string>
#include "Library.h"
using namespace std;
int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string bookName;
    while(true){
        cout << "Enter command: ";
        cin >> command;
        if(command == "add"){
            cin >> bookName;
            library.addBook(bookName);
        }
        else if(command == "remove"){
            cin >> bookName;
            library.removeBook(bookName);
        }
        else if(command == "print"){
            library.print();
        }
        else if(command == "quit"){
            break;
        }
        else{
            cout << "Invalid command." << endl;
        }
    }

}
