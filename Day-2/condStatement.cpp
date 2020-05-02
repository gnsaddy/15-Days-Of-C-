#include<iostream>
using namespace std;

int main(){
    cout << "Voting eligibility: " << endl;
    string name, state;
    int age;

    cout << "Enter name of voter : ";
    cin >> name;
    cout << "Enter state of voter : ";
    cin >> state;
    cout << "Enter age : ";
    cin >> age;

    if (age >= 18){
        cout << "You can vote this year" << endl;
        if(state == "Bihar"){
            cout << "Yes this year you vote for Bihar" << endl;
        }else
        {
            cout << "You can not vote in Bihar" << endl;
            cout << "You can vote for " << state << " next year";
        }
    }else
    {
        cout << "You are not eligible for voting" << endl;
    }

    cout << "Keep Voting!!!!!!!!!";
}