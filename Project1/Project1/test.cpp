#include <iostream>
#include "ca.h"
using namespace std;


//"显式实例化"手段中的"实例化定义"，这种实例化定义只需要在一个.cpp文件写就可以。
template A<float>;							//编译器遇到这段代码就直接实例化出来一个A<float>
template void myfunc123(int v1, int v2);	//"实例化定义"


void myfunc()
{
	A<float> a(51, 88);
	//myfunc123(21, 22);
	
}


