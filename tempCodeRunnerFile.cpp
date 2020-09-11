#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[1000];
    int m;
    string original = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string duplicate = {"QwErTyUiOpAsDfGhJkLzXcVbNmqWeRtYuIoPaSdFgHjKlZxCvBnM"};
    string al;
    int i{0};
    int f;
    cout << "\vIf you want to encrypt press 1 and decrypt press 2 : ";
    cin >> f;
    if (f == 1)
    {
        cout << "Enter the meassage you want to encrypt :";
        getline(cin, al);
        getline(cin, al);
        m = al.length();

        for (char c : al)
        {

            a[i] = original.find(c);
            i++;
        }
        for (i = 0; i < m; i++)
        {

            cout << duplicate[a[i]];
        }
        cout << "" << endl;
    }
    else
    {
        cout << "\vEnter the meassage you want to Decrypt :";
        getline(cin, al);
        getline(cin, al);
        m = al.length();
        for (char c : al)
        {

            a[i] = duplicate.find(c);
            i++;
        }
        for (i = 0; i < m; i++)
        {

            cout << original[a[i]];
        }
        cout << "" << endl;
    }
}
