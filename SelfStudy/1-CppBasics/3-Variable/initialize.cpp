#include <iostream>
using namespace std;

int main(){
	long double ld = 3.14;
	//int t1{ld};  // 编译错误
	int t2(ld);  // 编译成功
	cout <<  t2 << endl;
	int a;
	cout << a << endl;
	return 0;
}