#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool borrowed;

public:
    Book(int i, string t, string a) : id(i), title(t), author(a), borrowed(false) {}

    int getId() { return id; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
    bool isBorrowed() { return borrowed; }

    void borrow() { borrowed = true; }
    void giveBack() { borrowed = false; }
};

#endif
