#include <iostream>
using namespace std;
int main()
{
    int small_rooms;
    int large_rooms;

    cout << "\nNumber of small rooms : ";
    cin >> small_rooms;
    cout << "Number of large rooms : ";
    cin >> large_rooms;
    cout << "Price per small room : $25" << endl;
    cout << "Price per large room : $35" << endl;
    int total{(small_rooms * 25) + (large_rooms * 35)};
    cout << "Cost : " << total << endl;
    cout << "===================================================================================" << endl;
    cout << "Total estimation : $" << total << endl;
    cout << "This estimate is valid for 30 days " << endl;
}