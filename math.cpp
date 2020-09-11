#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num;
    double power;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The square root of the number is : " << sqrt(num) << endl;
    cout << "The cubic root of the number is : " << cbrt(num) << endl;
    cout << "The sine of the given number is : " << sin(num) << endl;
    cout << "The cosine of the given number is : " << cos(num) << endl;
    cout << "The ceil of the given number is : " << ceil(num) << endl;
    cout << "The floor of the given number is : " << floor(num) << endl;
    cout << "The round of the given number is : " << round(num) << endl;

    cout << "Enter the power to raise the number : ";
    cin >> power;
    cout << "The " << num << "to the " << power << " is : " << pow(num, power) << endl;
}