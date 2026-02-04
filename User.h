#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class User {
private:
    int userId;
    string name;
    vector<int> books;

public:
    User(int id, string n) : userId(id), name(n) {}

    int getId() { return userId; }
    string getName() { return name; }

    void borrowBook(int bookId) {
        books.push_back(bookId);
    }

    void returnBook(int bookId) {
        books.erase(remove(books.begin(), books.end(), bookId), books.end());
    }
};

#endif
