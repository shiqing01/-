#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap中a=" << a << endl;
	cout << "swap中b=" << b << endl;
}
void swap01(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap01中a=" <<*p1 << endl;
	cout << "swap01中b=" <<*p2<< endl;
}

int main() {
	int b = 11;
	int a = 10;
	//定义指针：数据类型 *指针变量名
	int * p;
	//让指针记录变量a的地址：&取址符
	p = &a;
	cout << "a的地址为" << &a << endl;
	cout << "指针p等于多少" << p << endl;
	//通过解引用的方式来找到指针指向的内存
	// 指针前加*代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	//64位操作系统占8位字节
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	int * q = &b;
	cout << "指针q等于" << q << endl;
	//空指针：指针变量指向内存中编号为0的空间，用于初始化指针变量
	int* d = NULL;
	//*d = 100会报错，因为空指针指向的内存是不可以访问的，因为内存编号为0~255为系统占用内存，不允许用户访问
	//野指针：创建了指针变量p指向内存地址为0xx1100的空间 int *p=(int*)0xx1100
	//空指针和野指针都不是我们申请的空间，因此不要访问
	//常量指针：指针指向可以修改，但是指针指向的值不可以改
	const int* f = &b;
	f = &a;
	//指针常量:int * const p=&a,指针的指向不可以改，但是指针指向的值可以改
	int* const e = &a;
	*e = 40;
	//指针指向和指针指向的值都不可以改
	const int* const g = &a;
	//利用指针访问数组（一段连续的空间中存放了相同数据类型的数据元素）
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* t = arr;//arr就是数组的首地址
	cout << "利用指针访问数组第一个元素" << *t << endl;
	t++;//往后移动了4字节?
	cout << "利用指针访问第二个元素" << *t << endl;
	int* t2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *t2 << endl;
		t2++;
	};
	//指针作为函数形参
	//值传递:形参发生改变，实参没有发生改变
	swap(a, b);
	cout << "a=" << a  << endl;
	cout << "b=" << b  << endl;
	//地址传递
	swap01(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}



