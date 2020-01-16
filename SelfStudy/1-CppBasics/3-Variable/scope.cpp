#include <iostream>
using namespace std;

int global_val = 1;  // 拥有全局作用域
int val = 2;
int main(){
	cout << global_val << endl;  // 在块局部作用域中可以访问全局作用域定义的变量
	
	// 定义局部作用域
	int v = 3;
	cout << v << endl;
	
	int val = 4;  // #13 局部定义变量val ；在局部作用域中覆盖全局作用域 val
	cout << val << endl;
	
	cout << ::val << endl;  // 使用域操作符调用全局变量
	
	val = 5;  // （在局部作用域中修改全局作用域） 若在局部定义了同名变量则修改的是局部变量。
	cout << val << endl;
	
	cout << ::val << endl;  // 使用域操作符调用全局变量（注释掉#13定义局部变量此时的值为 5）
	return 0;
}