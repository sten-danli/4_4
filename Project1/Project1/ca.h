#include <iostream>
using namespace std;

template <typename C>
class A//��ͨ��
{
public:
	//�ѹ��캯����ʼ��������
	template<typename T>
	A(T v1, T v2);//���캯��Ҳ����ģ�巽ʽ��
	

	template<typename T>
	void myft(T tmpt)//��Ա����ģ��
	{
		cout << tmpt << endl;
	}

	void myfunc(){}//��ͨ��Ա����

	C m_data;
};

//�ѹ��캯����ʼ�����������д��ʽ��

template<typename C>
template<typename T>
 A<C>::A(T v1, T v2)
{
	cout << v1<<" " << v2 << endl;
}

template <typename T>
void myfunc123(T v1, T v2)
{
	cout << v1 + v2 << endl;
}
