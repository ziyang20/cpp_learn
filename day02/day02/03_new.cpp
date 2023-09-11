// 动态内存分配
#include <iostream>
#include <cstdlib>
using namespace std;

int main( void ) {
    int* pm = (int*)malloc( 4 );
    cout << "*pm=" << *pm << endl;
    free( pm ); // 当这行执行结束,pm指向的内存被释放,进而pm为悬空指针
    pm = NULL;
    free( pm ); // 操作系统悬空指针会产生段错误

    int* pn = new int(100);
    cout << "*pn=" << *pn << endl;
    delete pn;
    pn = NULL;
    delete pn;

    int* parr = new int[4]{ 10, 20, 30, 40 };
    // 以数组方式new,永远返回第一个元素的地址
    for( int i=0; i<4; i++ ) {
        cout << parr[i] << ' '; // *(parr+i)
    }
    cout << endl;
    delete[] parr; // 数组方式delete

    int(*p)[4] = new int[3][4];
    delete[]p;

    try {
        new int[0xFFFFFFFF];
    }
    catch( ... ) {
    
    }
    return 0;
}






