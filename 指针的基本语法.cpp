#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap��a=" << a << endl;
	cout << "swap��b=" << b << endl;
}
void swap01(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "swap01��a=" <<*p1 << endl;
	cout << "swap01��b=" <<*p2<< endl;
}

int main() {
	int b = 11;
	int a = 10;
	//����ָ�룺�������� *ָ�������
	int * p;
	//��ָ���¼����a�ĵ�ַ��&ȡַ��
	p = &a;
	cout << "a�ĵ�ַΪ" << &a << endl;
	cout << "ָ��p���ڶ���" << p << endl;
	//ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	// ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	//64λ����ϵͳռ8λ�ֽ�
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	int * q = &b;
	cout << "ָ��q����" << q << endl;
	//��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ䣬���ڳ�ʼ��ָ�����
	int* d = NULL;
	//*d = 100�ᱨ����Ϊ��ָ��ָ����ڴ��ǲ����Է��ʵģ���Ϊ�ڴ���Ϊ0~255Ϊϵͳռ���ڴ棬�������û�����
	//Ұָ�룺������ָ�����pָ���ڴ��ַΪ0xx1100�Ŀռ� int *p=(int*)0xx1100
	//��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ����
	//����ָ�룺ָ��ָ������޸ģ�����ָ��ָ���ֵ�����Ը�
	const int* f = &b;
	f = &a;
	//ָ�볣��:int * const p=&a,ָ���ָ�򲻿��Ըģ�����ָ��ָ���ֵ���Ը�
	int* const e = &a;
	*e = 40;
	//ָ��ָ���ָ��ָ���ֵ�������Ը�
	const int* const g = &a;
	//����ָ��������飨һ�������Ŀռ��д������ͬ�������͵�����Ԫ�أ�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* t = arr;//arr����������׵�ַ
	cout << "����ָ����������һ��Ԫ��" << *t << endl;
	t++;//�����ƶ���4�ֽ�?
	cout << "����ָ����ʵڶ���Ԫ��" << *t << endl;
	int* t2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *t2 << endl;
		t2++;
	};
	//ָ����Ϊ�����β�
	//ֵ����:�βη����ı䣬ʵ��û�з����ı�
	swap(a, b);
	cout << "a=" << a  << endl;
	cout << "b=" << b  << endl;
	//��ַ����
	swap01(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}



