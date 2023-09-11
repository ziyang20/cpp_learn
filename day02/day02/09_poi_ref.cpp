// 引用 和 指针 的差别
#include <iostream>
using namespace std;

int main( void ) {
    int a=10, b=20;

    int* pa = &a; 
    pa = &b;

    int& ra = a;
    ra = b;

    pa = NULL; // ok, 存在空指针
//  ra = NULL; // error,不存在空引用
    
    int** ppa = &pa; // ok, 存在二级指针
//  int&& rra = ra;  // error, 不存在二级引用

    int*&rpa = pa; // ok, 存在指针的引用  
//  int&*pra = &ra;// error, 不存在 引用的指针

    int x, y, z;
    int*p[3] = {&x,&y,&z}; // ok,存在指针的数组
//  int&r[3] = {x,y,z}; // error,不存在引用的数组
    
    int arr[3];
    int(&rarr)[3] = arr; // ok,存在数组的引用
    return 0;
}






