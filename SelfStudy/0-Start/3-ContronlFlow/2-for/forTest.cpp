#include <iostream>
using namespace std;

int main(){
	int startNum = 0, endNum = 0;
	cout << "请输入开始的数：";
	cin >> startNum;
	cout << "请输入结束的数：";
	cin >> endNum;
	cout << endl;
	for (startNum; startNum <= endNum; ++startNum){
		cout << startNum << " ";
	}
	cout << endl;
	return 0;
}