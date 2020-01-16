#include <iostream>
using namespace std;

int main(){
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	
	r2 = 3.1415926;
	r2 = r1;
	i = r2;
	r1 = d;
	
	int x, &rx = x;
	x = 5; rx = 10;
	cout << x << "  " << rx << endl;

	return 0;
}