// 名字空间声明 和 名字空间指令 的差别
#include <iostream>
using namespace std;
namespace ns1 {
    int g_value = 0;
    int g_other = 0;
}
namespace ns2 {
    int g_value = 0;
    int g_other = 0;
}
int main( void ) {
    using namespace ns1; // 名字空间指令，ns1中的所有内容都可见
    using ns2::g_value; // 名字空间声明,ns2中g_value相当于定义,

    g_value = 666; // ns2
    cout << "ns1::g_value=" << ns1::g_value 
         << ", ns2::g_value=" << ns2::g_value << endl;

    g_other = 888; // ns1
    cout << "ns1::g_other=" << ns1::g_other
         << ", ns2::g_other=" << ns2::g_other << endl;
    
    return 0;
}

