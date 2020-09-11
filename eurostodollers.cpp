#include <iostream>
using namespace std;

int main()
{
    double eurros;
    double dollars;
    int number;
    const double doll_per_euro = 1.19;
    cout << "\vThe eurros to dollar conversion press 1 ,And for dollar to eurros conversion press 2 : ";
    cin >> number;
    if (number == 1)
    {
        cout << "Enter the number of eurros : ";
        cin >> eurros;
        eurros = eurros * doll_per_euro;
        cout << "The eurros in dollar is : " << eurros << endl;
    }
    else
    {
        cout << "Enter the number of dollars : ";
        cin >> dollars;
        dollars = dollars / doll_per_euro;
        cout << "The eurros in dollar is : " << dollars << endl;
    }
}