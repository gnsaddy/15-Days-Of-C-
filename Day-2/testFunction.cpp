#include <iostream>
using namespace std;

int rectangle(int, int); // function prototype

int main()
{
    int len, bre;
    int area;
    cout << "Enter length and breadth : " << endl;
    cin >> len >> bre;
    area = rectangle(len, bre);
    cout << "\n Area is : " << area;
    return 0;
}

// function decleration
int rectangle(int l, int b)
{
    // function body
    cout << "Area of Rectangle : " << endl;
    return l * b;
}