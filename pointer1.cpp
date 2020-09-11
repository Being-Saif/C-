#include <iostream>
using namespace std;

int main()
{
    int *p;
    cout << "The value of the pointer is : " << p << endl;
    cout << "The address of the pointer is :  " << &p << endl;
    p = nullptr;
    cout << "The value of the pointer is : " << p << endl;
    cout << "The address of the pointer is :  " << &p << endl;
}