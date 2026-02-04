#include <iostream>
#include <cassert>
#include "Library.h"
using namespace std;

int main() {
    Library lib;

    lib.addBook(Book(1, "Test", "Author"));

    assert(lib.borrowBook(1) == true);
    assert(lib.borrowBook(1) == false);

    assert(lib.returnBook(1) == true);
    assert(lib.returnBook(1) == false);

    cout << "All tests passed" << endl;
    return 0;
}
