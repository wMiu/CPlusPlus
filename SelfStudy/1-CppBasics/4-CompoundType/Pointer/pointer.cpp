#include <iostream>
using namespace std;

int main(){

    int num = 1;
    int *ptr_num = &num;
    cout << "num的值：" << num << "\n" 
         << "&num: " << &num << "\n"
         << "ptr_num: " << ptr_num << "\n"
         << "*ptr_num: " << *ptr_num << endl;
		 
	int i = 42;
	int *p1 = 0;
	if (p1) {
		cout << "p1" << endl;
	}
	int *p2 = &i;
	if (p2) {
		cout << "p2" << endl;
	}
	// 任何非0指针都为True

    return 0;
}