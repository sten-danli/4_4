#include <iostream>
#include "ca.h"
using namespace std;


//"��ʽʵ����"�ֶ��е�"ʵ��������"������ʵ��������ֻ��Ҫ��һ��.cpp�ļ�д�Ϳ��ԡ�
template A<float>;							//������������δ����ֱ��ʵ��������һ��A<float>
template void myfunc123(int v1, int v2);	//"ʵ��������"


void myfunc()
{
	A<float> a(51, 88);
	//myfunc123(21, 22);
	
}


