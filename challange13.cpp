#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Movies
{
private:
    string name;
    string rating;
    int watched;

public:
    void oneplus()
    {
        watched = watched + 1;
    }
    void namee()
    {
        cout << "The name of the movie is : " << name << endl;
    }
    void init()
    {
        cout << "\vEnter the name of the movie : ";
        cin >> name;
        cout << "Enter the zonar of the movie{scifi,Horror,Adventure,Action} : ";
        cin >> rating;
        cout << "Enter how many times the movie watched : ";
        cin >> watched;
    }
    void display()
    {
        cout << "\vThe name of the movie is : " << name << endl;
        cout << "The zonar of the movie is : " << rating << endl;
        cout << "The number of times watched is : " << watched << endl;
    }
};
int main()
{
    Movies a[200];
    string b[200];
    int n;
    int k;
    bool kb{true};
    while (kb)
    {
        cout << "\v1.Adding movies\n2.Details of the movies\n3.List of movies\n4.Increment the count by +1\n5.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> k;
        switch (k)
        {
        case 1:
            cout << "How many movies you want to enter : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                a[i].init();
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                a[i].display();
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                a[i].namee();
            }
            break;
        case 4:
            int ll;
            cout << "Enter the number of the movie you want to increment : ";
            cin >> ll;
            a[ll].oneplus();
            break;
        case 5:
            cout << "Good bye" << endl;
            kb = false;
            break;
        default:
            cout << "\vInvalid please try again" << endl;
            break;
        }
    }
}