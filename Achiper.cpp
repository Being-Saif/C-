#include <iostream>
#include <string>
using namespace std;
string d{"90Z1VfghijW2Xab mA3BCDkln4LMN5Oopq6cvEF7GHIwxSTUy8zderstJKuPQRY"};

string e{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "};
string encrypt(string s)
{
    string encrypted_msg{""};

    for (auto i : s)
    {

        encrypted_msg += d[e.find(i)];
    }
    return encrypted_msg;
}

string decrypt(string s)
{
    string decrypted_msg{""};
    for (auto i : s)
    {
        decrypted_msg += e[d.find(i)];
    }
    return decrypted_msg;
}
int main(int argc, char *argv[])
{
    cout << "you are\n"
         << "1 - sender\n"
         << "2 - receiver\n";
    int who{};
    cin >> who;
    string o{""};
    cout << "\n";

    if (who == 1)
    {
        getline(cin, o);
        getline(cin, o);
        string enc = encrypt(o);
        cout << "\nencrypting...\n\n";
        cout << enc << endl
             << endl;
    }
    else if (who == 2)
    {
        getline(cin, o);
        getline(cin, o);
        cout << "\ndecrypting...\n"
             << endl;
        string dec = decrypt(o);
        cout << dec << endl;
    }
}