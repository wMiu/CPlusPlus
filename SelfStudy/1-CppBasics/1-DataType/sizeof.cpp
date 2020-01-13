#include <iostream>
using namespace std;

int main(){
	// sizeof() 返回数据类型占用的字节数。
	
	cout << "Bool: " << "占用" << sizeof(bool) << "字节" << endl;
	cout << "Char: " << "占用" << sizeof(char) << "字节" << endl;
	cout << "Whcar_t: " << "占用" << sizeof(wchar_t) << "字节" << endl;
	cout << "Char16_t: " << "占用" << sizeof(char16_t) << "字节" << endl;
	cout << "Char32_t: " << "占用" << sizeof(char32_t) << "字节" << endl;
	
	cout << "Short："<< "占用" << sizeof(short) << "字节" << endl;
	cout << "Int: " << "占用" << sizeof(int) << "字节" << endl;
	cout << "Long: " << "占用" << sizeof(long) << "字节" << endl;
	cout << "LongLong: " << "占用" << sizeof(long long) << "字节" << endl;
	
	cout << "Float: " << "占用" << sizeof(float) << "字节" << endl;
	cout << "Double: " << "占用" << sizeof(double) << "字节" << endl;
	cout << "LongDouble: " << "占用" << sizeof(long double) << "字节" << endl;
	
	return 0;
}


