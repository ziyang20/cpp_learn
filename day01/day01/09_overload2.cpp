// 详谈同一作用域
#include <iostream>
using namespace std;
namespace ns1 {
    void foo( char* c, short s ) {
        cout << "1. foo(char*,short)" << endl;
    }
    void foo( int i, double d ) {
        cout << "2. foo(int,double)" << endl;
    }
}
namespace ns2 {
    void foo( const char* c, short s ) {
        cout << "3. foo(const char*, short)" << endl;
    }
    void foo( double d, int i ) {
        cout << "4. foo(double,int)" << endl;
    }
}

int main( void ) {
    using namespace ns1;
    using ns2::foo;
    char* c;    short s;
    foo( c, s ); // 3
    return 0;
}
