#include <iostream>
#include "ca.h"
using namespace std;

//����ģ��ʵ������ģ������
//�ڿ����˴���ʱ�ܹ���ʶ:
//template A<float>;
//extern template A<float>;

//Ϊ�˷�ֹ�ڶ��.cpp�ļ��ж�ʵ������ͬ��ģ���࣬����c++�����һ��������������ǳ�Ϊ"��ʾʵ����"��
//ͨ��"��ʽʵ����" �ֶ��е� "ʵ��������"
extern template A<int>;//ģ���ʵ��������
					//extern���ã��������ı��ļ�������һ��extern��߱�ʾ��ģ���ʵ�����汾���롣
				//externĿ�ģ����߱���������������Դ�ļ�(.cpp�ļ�)���Ѿ�����һ����ģ���ʵ�����汾�ˡ�

extern template void myfunc123(int v1, int v2);//ģ���ʵ��������





void main()
{
	A<int> a(21.88,158.88);
	myfunc123(21, 22);
}


