// 左值 和 右值
#include <iostream>
using namespace std;
int foo( ) {
    int m = 666;
    return m;
}
int main( void ) {
// 当前作用域的生命期
// 具名内存-->能够取址-->左值|非常左值(无const修饰)
//                           |常左值  (有const修饰)
    int a = 10;
    &a;
    a = 15;

    const int b = 10;
    &b;
//  b = 15; // error

//  语句级的生命期
//  匿名内存-->不能取址-->右值|(更改右值毫无意义--98/03标准给出的结论)
//
    5;
//  &5; // error
//  5 = 15; // error

    /*|666|*/foo(); // (1)申请匿名内存空间 (2)生成跳转指令
//  &foo(); // error
//  foo() = 15; // error
    return 0;
}






