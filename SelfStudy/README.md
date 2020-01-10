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

### 专业英语
|    英文     |  中文  |
| :---------: | :----: |
|  function   |  函数  |
|  parameter  |  参数  |
|  algorithm  |  算法  |
|    type     |  类型  |
|    class    |   类   |
|    list     |  列表  |
|    array    |  数组  |
| string(str) | 字符串 |
|    true     |   真   |
|    flase    |   假   |
|    main     | 主函数 |
|   return    |  返回  |
|    break    |  终止  |
|  standard   |  标准  |
|   library   |   库   |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |
|             |        |

