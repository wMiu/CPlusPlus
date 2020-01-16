#include <iostream>
using namespace std;

int main(){
	int val = 1024;
	int &refVal = val;
	// int &refVal;  // 报错，引用未初始化。
	return 0;
}