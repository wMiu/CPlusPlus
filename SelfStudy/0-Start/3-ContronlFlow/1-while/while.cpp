#include <iostream>
using namespace std;

int main(){
	// 从 1 加到 100 while
	int sum = 0, index = 1;
	while (index <= 100){
		sum += index;
		++index;
	}
	cout << "从1加到100，和为: " << sum
	     << endl;
	return 0;
	
}