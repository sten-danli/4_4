#include <iostream>
using namespace std;

template <typename C>
class A//普通类
{
public:
	//把构造函数初始化在类外
	template<typename T>
	A(T v1, T v2);//构造函数也用类模板方式。
	

	template<typename T>
	void myft(T tmpt)//成员函数模板
	{
		cout << tmpt << endl;
	}

	void myfunc(){}//普通成员函数

	C m_data;
};

//把构造函数初始化在类外的书写方式。

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
