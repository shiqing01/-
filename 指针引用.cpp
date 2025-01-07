#include <iostream>
using namespace std;

int b = 1;
int* ptr = &b; 
int*& a = ptr; 

int& c = b;

int main()
{
    cout << "b 为 " << b << endl;
    cout << "b 的地址为 " << &b << endl;
    cout << "ptr 为 " << ptr << endl;
    cout << "ptr的地址为 " << &ptr << endl;
    cout << "a 为 " << a << endl; 
    cout << "a 的地址为 " << &a << endl; 
    cout << "c为 " << c << endl;
    cout << "c的地址为 " << &c << endl;
    return 0;
}
