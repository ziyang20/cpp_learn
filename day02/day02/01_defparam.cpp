// 缺省(默认)参数:某个形参带有默认值
#include <iostream>
using namespace std;

void foo( int a, double b=3.14, float c=3.1, short d=2, char e='A' );

void foo( int x ) { 
    //...
}
int main( void ) {
    foo( 3, 3.14, 3.1, 2 );
    foo( 3, 3.14, 3.1, 2, 'B' );

//  foo( 10 ); // 匹配歧义
    return 0;
}
// 定义
void foo( int a, double b, float c, short d, char e ) {
    cout << "e=" << e << endl;
}


