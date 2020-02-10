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
	
	int ii = 1;
	double dd = 1.01; 
	void *pp1 = &ii;
	cout << pp1 << endl;
	pp1 = &dd;
	cout << pp1 << endl;
	
    return 0;
}