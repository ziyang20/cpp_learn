// 引用作为函数返回值
#include <iostream>
using namespace std;

int g_value = 0;
int& foo( ) { // 非常引用型返回值
    return g_value;
}
const int& cfo( ) { // 常引用型返回值
    return g_value;
}
int& bar( ) {
    static int s_value = 0;
    // 在程序启动时只执行一次,不是每次调用bar函数执行
    cout << "s_value=" << s_value << endl;
    return s_value;
}
int& hum( ) {
    int* pn = new int;
    return *pn;
}
int& fun( int& x ) {
    return x; // 返回 引用型参数 本身
}
/* 不能返回局部变量的引用
int& boo( ) {
    int m=555;
    return m;
}
*/
int main( void ) {
    foo() = 100;
    cout << "g_value=" << g_value << endl;

    cfo() = 1000; // error

    bar() = 200;
    bar();

    hum() = 300;

    int a_value = 0;
    fun( a_value ) = 400;
    cout << "a_value=" << a_value << endl;

//  boo();
    return 0;
}






