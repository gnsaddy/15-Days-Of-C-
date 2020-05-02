#include<iostream>
using namespace std;

int testEnum(){
    enum color
    {
        Red,
        Blue,
        Green,
        Yellow,
        Black,
        Grey
    };
    
    color r = Red;
    switch(r)
{
    case Red  : std::cout << "red\n";   break;
    case Green: std::cout << "green\n"; break;
    case Blue : std::cout << "blue\n";  break;
}

enum year
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

for (int i=Jan; i<=Dec; i++)       
      printf("%d ", i);

enum SomeCount
{
    Amit,
    Sumit,
    Adi = 100
};

cout << "----------------\n";
SomeCount sc;
sc = Amit;

cout << sc;
}

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
    cout << endl;

    testEnum();
    return 0;
}