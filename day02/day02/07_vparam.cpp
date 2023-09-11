// 引用作为函数形参
#include <iostream>
using namespace std;

void Swap( int& x, int& y ) { // 非常引用型参数
    int tmp = x;
    x = y;
    y = tmp;
}

void Swap( int* x, int* y ) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
// 如果能够保证函数内部不修改实参，大胆挂上const
void Print( const int& x, const int& y ) { // 常引用型 参数
//  x = 888; 
    cout << x << ' ' << y << endl;
}
int main( void ) {
    int a=10, b=20;
    cout << "a=" << a << ", b=" << b << endl;
    Swap( a, b );
    cout << "a=" << a << ", b=" << b << endl;
    Print( a, b );

    Print( 666, 999 );
    return 0;
}






