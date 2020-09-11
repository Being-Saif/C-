#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> vector1;
    int i{0};
    int t[30];
    char p[30];
    int l{0};
    int f;
    string al;
    cout << "If you want to encrypt massage press 1 and to decrypt press 2 ";
    cin >> f;
    if (f == 1)
    {
        cout << "\vEnter the meassage you want to encrypt : ";
        getline(cin, al);
        getline(cin, al);
        for (int c : al)
        {

            t[i] = c; //strings to asciis
            i++;
        }
        for (int m = 0; m < i; m++)
        {
            //asciis to string + 10
            p[m] = t[m] + 10;
        }
        cout << "The encrypted code : ";
        for (int m = 0; m < i; m++)
        {
            cout << p[m]; //printing strings of +10
            l++;
        }
        cout << "" << endl;
    }
    else
    {
        cout << "\vEnter the meassage you want to dencrypt : ";
        cin >> al;
        for (int c : al)
        {

            t[i] = c; //strings to asciis
            i++;
        }
        for (int m = 0; m < i; m++)
        {
            //asciis to string + 10
            p[m] = t[m] - 10;
        }
        cout << "The encrypted code : ";
        for (int m = 0; m < i; m++)
        {
            cout << p[m]; //printing strings of +10
            l++;
        }
    }
}