#include <iostream>
#include "ca.h"
using namespace std;

//三：模板实例化，模板声明
//在看别人代码时能够认识:
//template A<float>;
//extern template A<float>;

//为了防止在多个.cpp文件中都实例化相同的模板类，所以c++提出了一个解决方法，我们成为"显示实例化"；
//通过"显式实例化" 手段中的 "实例化声明"
extern template A<int>;//模板的实例化声明
					//extern作用：不会在文本文件中生成一个extern后边表示的模板的实例化版本代码。
				//extern目的：告诉编译器，在其他的源文件(.cpp文件)中已经有了一个改模板的实例化版本了。

extern template void myfunc123(int v1, int v2);//模板的实例化声明





void main()
{
	A<int> a(21.88,158.88);
	myfunc123(21, 22);
}


