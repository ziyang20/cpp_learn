#include <iostream>
#include <cstring>
using namespace std;

void TestStruct( ) {
    struct Student {
        char name[256]; // 成员变量
        int age; // 成员变量
        void getinfo( ) { // 成员函数
            cout << name << ":" << age << endl;
        }
    };
    /*struct*/ Student s;
    strcpy( s.name, "张飞" );
    s.age = 22;
    cout << "姓名:" << s.name << ", 年龄:" << s.age << endl;
    s.getinfo( );
}

void TestUnion( ) {
    union { // 匿名联合,主要想体现各个成员在内存中的排布方式
        int i;
        char c[4];
    };
    i = 0x12345678; // 小端字节序: 低数位 占 低地址
    cout << hex << (int)c[0] << ' ' << (int)c[1] << ' ' 
         << (int)c[2] << ' ' << (int)c[3] << endl;
}

void TestEnum( ) {
    enum Color { red, green, blue };
    /*enum*/ Color c = red; // 0;
    cout << "c=" << c << endl;
}

void TestBool( ) {
    bool a = ""; // "fdsfds"; // 0.00000001; // 123; // true;
    bool b = NULL;       // 0.00000000; // 0; // false;
    cout << "a=" << a << ", b=" << b << endl;
}

int main( void ) {
    TestBool( );

//  TestEnum( );
//  TestUnion( );
//  TestStruct( );
    return 0;
}











