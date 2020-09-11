#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    string al;
    string pg;
    cout << "Enter the String : ";
    cin >> al;
    cout << "Enter the substring : ";
    cin >> pg;
    //cout << al.find(pg);
    int f = al.find(pg);
    int s = pg.length();
    //cout << s;
    int a[100];
    int kd = f + s;
    int k{0};
    int ll;
    cout << "Enter the number of lines : ";
    cin >> k;
    int kl{0};
    //cout << kd;
    int db = kd;
    int i{0};
    int j{1};
    int ii;
    int kp;
    kp = k;
    string ab = al;
    // for (ii = 0; ii <= 100; ii++)
    // {
    //     ab += al;
    // }
    // for (int z = 0; z <= k; z++)
    // {
    //     if (j <= k)
    //     {
    //         for (i = 0; i < j; i++)
    //         {

    //             cout << ab[i];
    //         }
    //     }
    //     j++;
    //     cout << i;
    //     cout << "" << endl;
    // }
    for (int io = 0; io < kp; io++)
    {
        cout << "Enter number of the line : ";
        cin >> a[io];
    }
    for (int io = 0; io < kp; io++)
    {
        k = a[io];
        //cout << k;
        if (kd > k)
        {
            cout << "The substring is not present in this line " << endl;
        }
        else
        {
            for (ll = db; ll <= k; ll++)
            {

                if ((kd % ll) == 0)
                {
                    kl++;
                    kd += db;
                }
            }
            // cout << "The  kd : " << kd << endl;
            //cout << "The ll: " << ll << endl;
            cout << "The " << pg << " in the " << k << " is : " << kl << endl;
            kd = f + s;
            kl = 0;
        }
    }
}
