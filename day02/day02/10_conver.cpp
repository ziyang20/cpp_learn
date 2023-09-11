// 显式类型转换
#include <iostream>
using namespace std;

int main( void ) {
    int a;  double b; float c; short d; char e;
    // 任何基本类型的变量之间都可以隐式转换
    a = b = c = d = e;
    e = d = c = b = a;
    // 任何其他类型指针 到 void* 之间都可以隐式转换
    void* pv = &a; // int*-->void*
    pv = &b;
    pv = &c;
    pv = &d;
    pv = &e;
    // void* 到 任何其他类型指针 之间都必须强转*****************
    int* pa = static_cast<int*>(pv); //void*-->int*的反向int*-->void*
    double* pb = static_cast<double*>(pv);
    float* pc = static_cast<float*>(pv);
    short* pd = static_cast<short*>(pv);
    char* pe = static_cast<char*>(pv);
    // 任何类型的非常指针 到 同类型的常指针 之间都可以隐式转换
    const int* cpa = pa;
    const double* cpb = pb;
    const float* cpc = pc;
    const short* cpd = pd;
    const char* cpe = pe;
    // 任何类型的常指针 到 同类型的非常指针 之间都必须强转***********
    pa = const_cast<int*>(cpa); 
    pb = const_cast<double*>(cpb);
    pc = const_cast<float*>(cpc);
    pd = const_cast<short*>(cpd);
    pe = const_cast<char*>(cpe);
    // 除了void*以外,其他类型指针之间都必须强转**********************
    pa = reinterpret_cast<int*>(pb); 
    pa = reinterpret_cast<int*>(1000);
    return 0;
}






