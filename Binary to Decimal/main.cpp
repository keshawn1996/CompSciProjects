//
//  main.cpp
//  Binary to Decimal
//
//  Created by Ke'Shawn Alexander on 9/5/17.
//  Copyright © 2017 Ke'Shawn Alexander. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int binaryChanger(long);
int main()
{
    long number;
    
    cout << "Enter a binary number (0s and 1s) " << endl;
    cin >> number;
    
    cout << "The binary number " << number << " is " << binaryChanger(number) << " in decimal. " << endl;
}

int binaryChanger(long number) // recursive function that termiantes when binary number is equal to 0
{
    int deci = 0, base = 1, remainder;
    while (number > 0)
    {
        remainder = number % 10; //Gets remainder of binary number
        deci = deci + (remainder * base); //Base starts at 1 and multiplies it by the remainder. Adds value from remainder
                                        // and base to decimal value
        base = base * 2; //base power increases by 2 as the function goes through binary number
        number = number/10; //divides binary number by 10(decimal base) in order to do next iteration
    }
    return deci; //Decimal number returned is value when original binary number is 1
}
