#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>

using namespace std;

class Library {
private:
    string books[100]; // Mảng chứa tối đa 100 cuốn sách
    int bookCount;     // Biến đếm số lượng sách hiện có

public:
    Library(); // Constructor khởi tạo
    
    void addBook(string title);
    void removeBook(string title);
    bool searchBook(string title);
    void displayAll();
};

#endif
