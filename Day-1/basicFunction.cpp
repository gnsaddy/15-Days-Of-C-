#include<iostream>
using namespace std;

void demoFunction(){
    cout << "Demo of basic function";
}

int sum(int a, int b){
    cout << "In sum(), received " << a << " and " << b << endl;
    return (a + b);
}

int main(){
    cout << "In function main() \n";
    int a, b, res;
    demoFunction();
    cout << "Enter two numbers a and b" << endl;
    cin >> a;
    cin >> b;
    res = sum(a, b);
    cout << "Sum of a and b is : " << res << endl;
    return 0;
}