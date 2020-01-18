#include <iostream>
using namespace std;

int main(){

    int num = 1;
    int *ptr_num = &num;
    cout << "num的值：" << num << "\n" 
         << "&num: " << &num << "\n"
         << "ptr_num: " << ptr_num << "\n"
         << "*ptr_num: " << *ptr_num << endl;  

    return 0;
}