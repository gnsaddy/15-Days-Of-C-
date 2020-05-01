#include<iostream>
using namespace std;

int main(){
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    Days today;
    today = Sunday;

    if ( today == Sunday  ){
        cout << "\nGotta' love the weekends!\n";
    }

    else{
        cout << "Back to work";
    }

    int a = 20;
    a = 40;
    printf("%d ", a);
    return 0;
}