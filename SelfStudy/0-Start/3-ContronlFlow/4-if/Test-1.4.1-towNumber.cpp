#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "请输入第一个数字：";
    cin >> num1;
    cout << "请输入第二个数字：";
    cin >> num2;
    cout << endl;

    if (num1 < num2){
        while (num1 <= num2){
            cout << num1 << " ";
            ++num1;
        }
        cout << endl;
    } else {
        cout << "第二个数字比第一个数字小-程序终止" << endl;
    }

}