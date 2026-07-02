#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    // Tạo đối tượng Library
    Library myLib;

    cout << "--- TEST THEM SACH ---" << endl;
    myLib.addBook("Lap Trinh C++ Co Ban");
    myLib.addBook("Cau Truc Du Lieu Va Giai Thuat");
    myLib.addBook("Tri Tue Nhan Tao");

    // In tất cả sách
    myLib.displayAll();

    cout << "--- TEST TIM KIEM SACH ---" << endl;
    string searchTitle = "Lap Trinh C++ Co Ban";
    if (myLib.searchBook(searchTitle)) {
        cout << "[Kq] Ton tai sach: " << searchTitle << " trong thu vien." << endl;
    } else {
        cout << "[Kq] Khong co sach: " << searchTitle << endl;
    }

    searchTitle = "Python Nang Cao"; // Sách không có thật
    if (myLib.searchBook(searchTitle)) {
        cout << "[Kq] Ton tai sach: " << searchTitle << " trong thu vien." << endl;
    } else {
        cout << "[Kq] Khong co sach: " << searchTitle << endl;
    }
    cout << endl;

    cout << "--- TEST XOA SACH ---" << endl;
    myLib.removeBook("Cau Truc Du Lieu Va Giai Thuat");
    
    // Thử xóa sách không tồn tại
    myLib.removeBook("Python Nang Cao");

    // In lại danh sách sau khi xóa
    myLib.displayAll();

    return 0;
}
