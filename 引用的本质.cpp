#include<iostream>
using namespace std;
//��C++�У����õı�����һ��ָ�볣�� int* const ref=&a,ָ�򲻿��޸ģ�ֵ�����޸ģ����һ����ʼ����Ͳ����Է����ı�
void func(int& ref) {
	ref = 100;//�����ǰ�a��������󣬼�int& ref = a���˴�ת��Ϊ*ref=100
	cout << "ref2:" << ref << endl;
}


int main() {


	int a = 10;
	int& ref = a;//�Զ�ת��Ϊ��int* const ref=&a,ָ�򲻿��޸ģ�ֵ�����޸�
	ref = 20;//�ڲ�����ref��ָ�룬�Զ�ת��Ϊ������*ref=20;
	
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	func(a);
	return 0;
}