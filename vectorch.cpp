#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;
    vector<vector<int>> vector2d;

    int number;
    cout << "\vEnter a number : ";
    cin >> number;
    vector1.push_back(number);
    cout << "Enter another number: ";
    cin >> number;
    vector1.push_back(number);
    cout << "The vector at 0 is :" << vector1.at(0) << endl;
    cout << "The vector at 1 is :" << vector1.at(1) << endl;
    cout << "The size of the vector1: " << vector1.size() << endl;
    cout << "===========================================================================\n";
    cout << "Enter the number for vector2 : ";
    cin >> number;
    vector2.push_back(number);
    cout << "Enter the number for vector2 : ";
    cin >> number;
    vector2.push_back(number);
    cout << "The vector2 at 0 is :" << vector2.at(0) << endl;
    cout << "The vector2 at 1 is :" << vector2.at(1) << endl;
    cout << "The size of the vector 2 is: " << vector2.size() << endl;
    cout << "========================================================================\n";
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << "The vector at 0.0 is :" << vector2d.at(0).at(0) << endl;
    cout << "The vector at 0.1 is :" << vector2d[0][1] << endl;
    cout << "The size of vectot2d is : " << vector2d.size() << endl;
    return 0;
}