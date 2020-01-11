#include <iostream>
using namespace std;

int main(){
    int v = 0, sum = 0;
    cout << "请输入一个数字（Ctrl + D）结束：";
    while (cin >> v){
        cout << endl;
        sum += v;
        cout << "请输入一个数字（Ctrl + C）结束：";
    }
    cout << "您输入的数字总和是：" << sum << endl;
    return 0;
}
