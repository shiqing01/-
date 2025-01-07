#include<iostream>
using namespace std;
//在C++中，引用的本质是一个指针常量 int* const ref=&a,指向不可修改，值可以修改，因此一旦初始化后就不可以发生改变
void func(int& ref) {
	ref = 100;//当我们把a传入参数后，即int& ref = a，此处转化为*ref=100
	cout << "ref2:" << ref << endl;
}


int main() {


	int a = 10;
	int& ref = a;//自动转化为：int* const ref=&a,指向不可修改，值可以修改
	ref = 20;//内部发现ref是指针，自动转化为解引用*ref=20;
	
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	func(a);
	return 0;
}