#include <iostream>
using namespace std;

class Details
{
public:
    string name, email;
    int contact;

private:
    void getPrivateDetails()
    {
        cout << "This data is confidential, so it is private " << endl;
        cout << "Enter Banker data : " << endl;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter email : ";
        cin >> email;
        cout << "Enter contact number : ";
        cin >> contact;
        cout << "NAME : " << name << endl;
        cout << "Email : " << email << endl;
        cout << "contact : " << contact << endl;
    }

public:
    void getFunction()
    {
        cout << "Acessing PRIVATE method data " << endl;
        getPrivateDetails();
    }

public:
    void getPublicDetails()
    {
        cout << "This data is for all, so it is public " << endl;
        cout << "Enter Staff data : " << endl;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter email : ";
        cin >> email;
        cout << "Enter contact number : ";
        cin >> contact;
        cout << "NAME : " << name << endl;
        cout << "Email : " << email << endl;
        cout << "contact : " << contact << endl;
    }
};

int main()
{
    Details obj;
    obj.getPublicDetails();
    obj.getFunction();

    return 0;
}