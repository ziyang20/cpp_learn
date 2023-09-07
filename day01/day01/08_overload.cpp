// 函数之间关系-重载(1)同一作用域内 (2)函数名相同 (3)形参表不同
// 形参表是否相同 与 形参个数以及每个对应形参类型 有关,和形参名毫无关系
#include <iostream>
using namespace std;

void foo( char* c, short s ) {
    cout << "1. foo(char*,short)" << endl;
}
void foo( int i, double d ) {
    cout << "2. foo(int,double)" << endl;
}
void foo( const char* c, short s ) {
    cout << "3. foo(const char*, short)" << endl;
}
void foo( double d, int i ) {
    cout << "4. foo(double,int)" << endl;
}
// int foo( double i, int d ) {} // 是否为重载关系与返回值类型无关

int main( void ) {
    char* c;    short s;
    foo( c, s ); // 1
    const char* cc;
    foo( cc, s ); // 3
    int i;  double d;
    foo( i, d ); // 2
    foo( d, i ); // 4
    return 0;
}
