#include <iostream>
using namespace std;
int i = 42;
int main(){
	int i = 100;
	int j = i;
	cout << j << endl;
	
	int x = 100, sum = 0;
	for (int x= 0; x != 10; ++x){
		sum += x;
	}
	cout << x << "  " << sum << endl;
	return 0;
}