#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int index = 1; index <= 100; ++index){
		sum += index;
	}
	cout << "从1加到100(For)的结果为：" << sum << endl;
	return 0;
}