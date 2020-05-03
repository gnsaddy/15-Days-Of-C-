#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << ++a;
    cout << a;

    int num;
    cout << "\nEnter number to print table : " << endl;
    cin >> num;
    cout << "\nTable of " << num << " is : \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i * num << endl;
    }
}