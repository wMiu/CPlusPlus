#include <iostream>
#include "Sales_item.h"
using namespace std;

// 此程序只能记录连续ISBN号相同的书出现几次。

int main(){
    Sales_item book, oldBook;
    int count = 1;
    cin >> oldBook;
    while (cin >> book){
        if (book.isbn == oldBook.isbn){
            ++count;
        }else {
            cout << oldBook.isbn << "有" << count << "本" << endl;
            oldBook = book.isbn;
            count = 1;
        }
    }
    cout << oldBook.isbn << "有" << count << "本" << endl;
    return 0;
}

