#include <iostream>
using namespace std;

int main(){
	if (1 < 0){
		int a = 1;
	}
	// cout << a << endl;  // a的作用域只在if中。
	return 0;
}