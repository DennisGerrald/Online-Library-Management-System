#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;

    lib.addBook(Book(1, "C++", "Stroustrup"));
    lib.addBook(Book(2, "Clean Code", "Martin"));

    lib.addUser(User(1, "Alice"));

    lib.borrowBook(1);
    lib.returnBook(1);

    cout << "Program executed successfully" << endl;
    return 0;
}
