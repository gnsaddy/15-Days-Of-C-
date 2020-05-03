#include <iostream>
using namespace std;
float convertF(float);
float convertC(float);
float tempF, tempC;

int main()
{
    cout << convertF(32);
    cout << endl
         << convertC(32);

    return 0;
}

float convertF(float tempFer)
{
    cout << "Fah to Celsius :" << endl;
    tempF = ((tempFer - 32) * 5) / 9;
    return tempF;
}

float convertC(float tempCel)
{
    cout << "\nCelsius to Fah :" << endl;
    tempC = (tempCel * 9 / 5) + 32;
    return tempC;
}