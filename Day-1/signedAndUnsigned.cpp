#include <iostream>
#include <math.h>
#define SIZE(x) sizeof(x) * 8 
using namespace std; 

void printSignedRange(int count) 
{ 
    int min = pow(2, count - 1); 
    int max = pow(2, count - 1) - 1; 
    printf("%d to %d", min * (-1), max); 
} 

void UnsignedRange(int count) 
{ 
    // calculate 2^number of bits 
    unsigned int max =  pow(2, count) - 1; 
  
    cout << "0 to " << max; 
} 
  
int main() 
{ 
    cout << "signed char: "; 
    printSignedRange(SIZE(char)); 
    cout << "\nsigned int: "; 
    printSignedRange(SIZE(int)); 
    cout << "\nsigned short int: "; 
    printSignedRange(SIZE(short int));
    cout << endl;

    cout << "unsigned char: "; 
    UnsignedRange(SIZE(unsigned char)); 
    cout << "\nunsigned int: "; 
    UnsignedRange(SIZE(unsigned int)); 
    cout << "\nunsigned short int: "; 
    UnsignedRange(SIZE(unsigned short)); 
  
    return 0; 
} 