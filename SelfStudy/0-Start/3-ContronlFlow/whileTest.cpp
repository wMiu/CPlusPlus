#include <iostream>
using namespace std;

int main(){
	/*
	练习 1.11 编写程序，提示用户输入两个整数，
	并打印这个整数之间所有的整数。
	 */
	 
	int startNum = 0, endNum = 0;
	cout << "请输入开始的数字："; 
	cin >> startNum;
	cout << "请输入结束的数字：";
	cin >> endNum;
	cout << endl;
	
	while (endNum >= startNum){
		cout << startNum << " ";
		++startNum;
	}
	cout << endl;
	
	return 0;
}