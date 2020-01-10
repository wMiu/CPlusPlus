#include <iostream>
// using namespace std;

int main(){
    // iostream
    std::string a;
    std::cout << "请输入一个值: ";
    std::cin >> a;
	std::cout << "您输入的值为 ：" << a << std::endl;
	std::cerr << "错误信息 - CErr" << std::endl;
	std::clog << "错误信息 - CLog" << std::endl;
    return 0;
}

