#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    char c;
    int b{0};
    int h{0};
    double n{0.0};
    int l{1000};
    vector<int> vector1;
    for (i = b; i <= 1000; i++)
    {

        cout << "\vP-print numbers\n";
        cout << "A-Add a number\n";
        cout << "M-Display mean of the numbers\n";
        cout << "S-Display the smallest number\n";
        cout << "L-Display the largest number\n";
        cout << "Q-Quit\n";
        cout << "Enter your choice : ";
        cin >> c;
        switch (c)
        {
        case 'P':
        case 'p':
            cout << "print numbers\n";
            if (vector1.size() == 0)
            {
                cout << "The list is empty" << endl;
            }
            else
            {
                cout << "The numbers of the list are : [";

                for (auto vals : vector1)
                {
                    cout << vals << " ";
                }
            }
            cout << "]";
            cout << "\n";
            break;
        case 'A':
        case 'a':
            cout << "Add a number\n";
            cout << "Enter a number into the list : ";
            int number;
            cin >> number;
            vector1.push_back(number);
            break;
        case 'M':
        case 'm':
            cout << "Display mean of the numbers\n";
            for (int i = 0; i < vector1.size(); i++)
            {
                n += vector1.at(i);
            }
            cout << "\nThe mean of the list is : " << n / vector1.size();
            cout << "\n"
                 << endl;

            break;
        case 'S':
        case 's':
            cout << "Display the smallest number\n";
            //sort(vector1.begin(), vector1.end());
            //cout << "The smallest number in the list : " << vector1.at(0) << endl;
            if (vector1.size() == 1)
            {
                cout << "The smallest number in the list : " << vector1.at(0) << endl;
            }
            else
            {
                for (auto k : vector1)
                {
                    if (l > k)
                    {
                        l = k;
                    }
                }

                cout << "The smallest number in the list : " << l << endl;
            }

            break;
        case 'L':
        case 'l':
            cout << "Display the largest number\n";
            //sort(vector1.begin(), vector1.end());
            //v = vector1.size() - 1;
            //cout << "The largest  number in the list : " << vector1.at(v) << endl;
            if (vector1.size() == 1)
            {
                cout << "The largest number in the list : " << vector1.at(0) << endl;
            }
            else
            {
                for (auto k : vector1)
                {
                    if (h < k)
                    {
                        h = k;
                    }
                }
                cout << "The largest number in the list : " << h << endl;
            }

            break;
        case 'Q':
        case 'q':
            cout << "Good bye\n";
            i = 10000;
            break;
        default:
            cout << "\tunvalid\n";
            break;
        }
    }
}