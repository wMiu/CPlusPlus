#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item total, book;
    if (cin >> total){
        while (cin >> book){
            if (book.isbn == total.isbn){
                total += book;
            }else {
                cout << total << endl;
                total = book;
            }
        }
        cout << total << endl;
    }else {
        cout << "您没有销售记录-程序结束" << endl;
    }
    return 0;
}