// 名字空间指令
#include <iostream>
using namespace std;
namespace ns {
    int g_value = 0;
}
//int g_value = 0;
//using namespace ns;//从这行代码开始ns中的内容在当前作用域可见
int main( void ) {
//  int g_value = 0;
  using namespace ns;//从这行代码开始ns中的内容在当前作用域可见
    g_value = 100; // 5 / 7 / erro
    /*std::*/cout <<"ns::g_value="
                << ns::g_value << /*std::*/endl;
    return 0;
}
