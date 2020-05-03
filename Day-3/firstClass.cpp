#include <iostream>
using namespace std;

class TestClass
{
public:
    string name;
    string usn;

    void getDetails()
    {
        cout << "Enter Student details : " << endl;
        cin >> name >> usn;
        cout << "NAME : " << name << "\nUSN : " << usn;
    }
};
int main()
{

    TestClass obj;
    obj.getDetails();
    cout << endl
         << obj.name;
    return 0;
}