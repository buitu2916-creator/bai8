#include "Library.h"

// Khởi tạo thư viện ban đầu có 0 cuốn sách
Library::Library() {
    bookCount = 0;
}

void Library::addBook(string title) {
    if (bookCount < 100) {
        books[bookCount] = title;
        bookCount++;
        cout << "[+] Da them sach: " << title << endl;
    } else {
        cout << "[-] Thu vien da day (toi da 100 cuon), khong the them!" << endl;
    }
}

void Library::removeBook(string title) {
    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (books[i] == title) {
            found = true;
            // Dồn các phần tử phía sau lên trước để lấp khoảng trống
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            cout << "[-] Da xoa sach: " << title << endl;
            break;
        }
    }
    if (!found) {
        cout << "[!] Khong tim thay sach: " << title << " de xoa." << endl;
    }
}

bool Library::searchBook(string title) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i] == title) {
            return true; // Tìm thấy
        }
    }
    return false; // Không tìm thấy
}

void Library::displayAll() {
    if (bookCount == 0) {
        cout << "Thu vien hien dang trong." << endl;
        return;
    }
    
    cout << "\n=== DANH SACH SACH TRONG THU VIEN ===" << endl;
    for (int i = 0; i < bookCount; i++) {
        cout << i + 1 << ". " << books[i] << endl;
    }
    cout << "=====================================\n" << endl;
}
