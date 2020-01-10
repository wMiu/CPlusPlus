## Author - wMiu
注：使用 Unix 与 Windows 系统完成的本笔记

### 初识C++
   - C++是一个[静态类型](#)、编译式、通用的、大小写敏感、不规则的变成语言；支持面向过程、面向对象和泛型编程。
   - C++程序包含一个或多个函数(functioin)，且只有一个main()函数。
```C++
int main(){
    return 0;
}
```

### 编译与运行程序
1. 因为C++是编译型语言，所以编写好程序后需要对他进行编译。
   - 编译程序依赖于操作系统和编译器。
   - 可以使用[集成开发环境](#集成开发环境)(IntegratedDeveloped Environment,IDE)进行编译。
   - 源文件(source file)的命名规则
      1. 组成
         - 文件名 + . + 后缀名
         - 例如： `Cpp.cpp`
      2. 常见的C++程序后缀名
         - `.cpp`
         - `.cp`
         - `.cxx`
         - `.cc`
      3. 使用 **GUN**编译器编译
         - `g++ HelloWorld.cpp -o HelloWorld`
         1. 对文件名 HelloWorld.cpp 的文件进行编译
         2. -o 指定可执行文件的名称，若省略-o则会生成一个文件名为 **a**的可执行文件
         - Unix平台可执行文件后缀为 `.out`
         - Windows 为`.exe`
   
### 输入与输出
C++并为定义任何输入输出 (IO(Input/Output)) 语句, 而是有一个非常全面的标准库(standard library) 来提供 IO机制。
- iostream :标准库定义了 4 个IO 对象 
   - istream (input stream) 输入流
      - cin 标准输入(standard input)
   - ostream (output stream) 输出流
      - cout 标准输出(standard output)
      - cerr 标准错误(standard error)
      - clog 标准错误；与cerr的区别，clog将错误信息存放在缓冲区，当缓冲区满了才会输出。
   1. 一个流(stream)就代表着一个字符序列，字符序列是顺序生成或消耗的。
   
#### 程序分析
```C++
#include <iostream>  // 告诉编译器使用 iostream库
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
```
- #include <iostream>
   - 告诉编译器将要使用iostream库。
   - <> 中指出了一头文件。
   - 每个使用标准库的程序都必须包括相关的头文件。
   - #include 指令和头文件名字必须卸载同一行中。
   - 通常情况下，#include 必须出现在所有函数之外，将其放在源文件开始的位置。
- 向流写入数据
   - `std::cout << "请输入一个值: ";`
   - 一个表达式(expression)通常由一个或多个运算对象和一个运算符组成。
   - 该语句使用了 **输出运算符(<<)**
   - << 运算符接收两个运算对象:
      - 左侧对象必须是一个ostream对象，右侧则是要打印的内容
      - [<<运算符](#<<运算符)
- 使用标准库中的名字
   - 使用的是 `std::endl`而非 `endl`
     - `std::`指出 cout endl定义在名为**std**的命名空间(namespace)中,命名空间可以帮助避免不经意的名字定义冲突,以及使用库中相同名字导致的冲突问题.
     - C++ 标准库定义的所有名字都在命名空间std中
     - 通过命名空间使用标准库必须显示的说明,我们使用来自命名空间std中的名字,例如`std::cout`,通过[作用域运算符::](#作用域运算符)来住处我们向访问命名空间std中的cout。
     - 可以在调用之前写上 `using namespace std;`
- 从流读取数据


### 函数(Function)
   - 函数定义需要满足四个条件
      - 返回类型(return type)
      - 函数名(funciton name)
      - 参数列表(parameter list)
      - 函数体(function body)
   - main() 函数
      - main() 函数是一个程序的主函数，有且只有一个。
      - main() 函数的返回类型必须为 int(整数类型)
   - return
      - 终止函数
      - 且可以向调用者返回一个值，该值可以为数组(array)
        - 返回的值[类型](#类型)需要与返回类型相同


### 类型
1. 类型是程序设计中最基本的概念之一，类型定义了数据元素的内容与这类数据可以进行的操作。
2. 程序处理的数据一般情况下都会保存在[变量](#变量)中，每个变量都必须有自己的类型。

### 运算符
#### <<运算符
1. << 运算符是标准的输入运算符，接受两个值，分别为：左侧的ostream对象，与右侧的需要打印的对象。
   
   - 将右侧的值写入到左侧的ostream对象中， 输出运算符的计算结构就是其左侧运算对象。
```C++
std::cout << "Hello World" << std::endl;
// 等价于
   (std::cout << "Hello World") << std::endl;
```
   - 两次<<运算符，第一个运算符的结果成为了第二个运算符的左侧运算对象。
   - endl
     - 操作符（manipulator）
     - 写入endl的效果是结束当前行，并将设备关联的缓冲区（buffer）中的内容刷新到设备中。
       - 刷新缓冲区操作可以保证到目前为止程序所产生的所有输出都真正的写入输出流中，而不是仅停留在内存中等待写入流。


2. <<二进制左移运算符，做操作数的数值向左移动右操作数指定的位数。
   ```C++
60 << 2  // 0011 1100 << 2 -> 1111 0000 
   ```


### 专业英语
|    英文     |   中文   |
| :---------: | :------: |
|  function   |   函数   |
|  parameter  |   参数   |
|  algorithm  |   算法   |
|    type     |   类型   |
|    class    |    类    |
|    list     |   列表   |
|    array    |   数组   |
| string(str) |  字符串  |
|    true     |    真    |
|    flase    |    假    |
|    main     |  主函数  |
|   return    |   返回   |
|    break    |   终止   |
|  standard   |   标准   |
|   library   |    库    |
|    using    |   使用   |
|   include   |   包含   |
|  namespace  | 命名空间 |
| expression  |  表达式  |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |
|             |          |


```

```