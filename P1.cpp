//include headers and libraries
#include <string>
#include <iostream>
#include "Library.h"

using namespace std;


int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string book;

    while (true) {
        cout << "Enter command: ";
        cin >> command;

        if (command == "q") {
            cout << "Exiting\n";
            break;
        } else if (command == "r") {
            cin >> book;
            if (!library.removeBook(book)) {
                cout << "Cannot remove the book.\n";
            }
        } else if (command == "a") {
            cin >> book;
            if (!library.addBook(book)) {
                cout << "Cannot add the book.\n";
            }
        } else if (command == "p") {
            library.print();
        } else {
            cout << "Invalid command\n";
        }
    }

    return 0;
}
