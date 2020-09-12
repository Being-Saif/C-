#include <iostream>
using namespace std;

class Sample
{
private:
    string name;
    int rollno;
    int marks;

public:
    Sample(string namee = "none", int rollnoo = 0, int markss = 20);
};

Sample::Sample(string namee, int rollnoo, int markss) : name{namee},
                                                        rollno{rollnoo},
                                                        marks{markss}
{

    cout << name << rollno << marks << endl;
}

int main()
{
    Sample frank{"frank", 32, 100};
}
