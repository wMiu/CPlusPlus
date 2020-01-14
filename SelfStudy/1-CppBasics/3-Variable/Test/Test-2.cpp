#include <iostream>
using namespace std;
string global_str;
int global_int;
	
int main(){
	cout << global_str << " 1 " << global_int << endl;
	int local_int;
	string local_str;
	cout << local_int << " 2 " << local_str << endl;
	return 0;
}