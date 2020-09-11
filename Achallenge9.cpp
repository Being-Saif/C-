
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> lst;
    char input{};
    bool condition = true;
    while (condition)
    {
        cout << "P-print the list\n"
             << "A-add a number\n"
             << "M-mean\n"
             << "S-smallest number\n"
             << "L-largest number\n"
             << "Q-quit\n";

        cin >> input;
        input = toupper(input);
        //cout<<input<<endl;

        switch (input)
        {
        case 'P':
        {
            cout << "[ ";
            for (auto i = 0; i < lst.size(); i++)
                cout << lst[i] << " ";
            cout << "]\n"
                 << endl;
            break;
        }
        case 'A':
        {
            cout << "Enter an integer : ";
            int element;
            cin >> element;
            bool exists = false;
            for (auto i = 0; i < lst.size(); i++)
            {
                if (element == lst.at(i))
                {
                    exists = true;
                }
            }
            if (!exists)
            {
                lst.push_back(element);
                cout << element << " added\n"
                     << endl;
            }
            else
                cout << element << " already exists!\n"
                     << endl;

            break;
        }
        case 'M':
        {
            double mean{0.0};
            for (auto i = 0; i < lst.size(); i++)
            {
                mean += lst.at(i);
            }
            mean /= lst.size();
            cout << "mean : " << mean << endl
                 << endl;
            break;
        }
        case 'S':
        {
            int min{};
            if (lst.size() > 0)
                min = lst.at(0);
            for (auto i = 0; i < lst.size(); i++)
            {
                if (lst.at(i) < min)
                    min = lst.at(i);
            }
            cout << "smallest number : " << min << endl
                 << endl;
            break;
        }
        case 'L':
        {
            int max{};
            if (lst.size() > 0)
                max = lst.at(0);
            for (auto i = 0; i < lst.size(); i++)
            {
                if (lst.at(i) > max)
                    max = lst.at(i);
            }
            cout << "largest number : " << max << endl
                 << endl;
            break;
        }
        case 'Q':
        {
            condition = false;
            cout << "Goodbye!";
            break;
        }
        default:
            cout << "Invalid input!\n\n";
            break;
        }
    }
    return 0;
}