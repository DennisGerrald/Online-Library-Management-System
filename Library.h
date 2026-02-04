#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "User.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void removeBook(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getId() == id) {
                books.erase(books.begin() + i);
                break;
            }
        }
    }

    Book* findBook(string title) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getTitle() == title) {
                return &books[i];
            }
        }
        return NULL;
    }

    void addUser(User u) {
        users.push_back(u);
    }

    bool borrowBook(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getId() == id && !books[i].isBorrowed()) {
                books[i].borrow();
                return true;
            }
        }
        return false;
    }

    bool returnBook(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getId() == id && books[i].isBorrowed()) {
                books[i].giveBack();
                return true;
            }
        }
        return false;
    }
};

#endif
