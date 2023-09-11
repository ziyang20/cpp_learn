// 引用:就是一块内存的别名
#include <iostream>
using namespace std;
int main( void ) {
    int a = 10;
    int& b = a; // 不要理解为a给b赋值,而应该理解为b是a代表内存的别名

    b = 50; // 不要理解为给b赋值,应该理解为给引用b的目标内存(a)赋值
    cout << "a=" << a << ", b=" << b << endl;
    // 不要理解为读取引用b的值,应该理解为读取引用b的目标内存(a)的值
    
    cout << "&a:" << &a << ", &b:" << &b << endl;
    // &b-求的是引用b的目标内存a的地址
    
    int c = 30;
    b = c;
    cout << "&a:" << &a << ", &b:" << &b << ", &c:" << &c << endl;

    int& d = b;
    cout << "&a:" << &a << ", &b:" << &b << ", &d:" << &d << endl;
    
    // 别名的常属性 需和 目标内存保持"一致"
    const int e = 10;
//  int& f = e; // error, 别名不可以比真名限定的更加宽松
    const int& g = e; // ok

    // 别名可以比真名限定的更加严格
    const int& h = a; // ok
    return 0;
}






