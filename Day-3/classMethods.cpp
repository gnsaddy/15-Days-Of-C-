#include <iostream>
using namespace std;

class Cat
{
private:
    int itsAge;
    string itsColor;

public:
    void getAttributes();
    void setAttributes(int age, string color);
    void meow();
};

void Cat::setAttributes(int age, string color)
{
    itsAge = age;
    itsColor = color;
}

void Cat::getAttributes()
{
    cout << "Frisky is '" << itsAge << "' year's old" << endl;
    cout << "Frisky color is '" << itsColor << "'" << endl;
}

void Cat::meow()
{
    cout << "\nMeow\n";
}

int main()
{
    cout << "Cat attributes and its behaviour\n";
    Cat frisky;
    frisky.setAttributes(5, "golden brown");
    frisky.getAttributes();
    frisky.meow();

    return 0;
}
