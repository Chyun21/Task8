//include headers and libraries
#include <iostream>
#include <array>
#include <string>
#include "Library.h"
using namespace std;
//implement class functions
Library::Library(){
    string books[10];
}
bool Library::addBook(string bookName) {
    for(int i=0; i<10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }

    }
    cout << "Cannot add the book.";
    return false;
}

bool Library::removeBook(string bookName) {
    for (int i = 0; i <= 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    cout << "Cannot remove the book.";
    return false;
}

void Library::print() {
    cout << "Library contents: \n";
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}


