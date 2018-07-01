//
//  main.cpp
//  BinaryConverter
//
//  Created by Ke'Shawn Alexander on 9/30/17.
//  Copyright © 2017 Ke'Shawn Alexander. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int biToOct(long int);
int biToHex(long int);
int decimalConvert(long int);

int main()
{
    char select;
    long int number;
    
    cout << "Enter a binary number (0s and 1s) " << endl;
    cin >> number;
    
    cout << "\n Menu";
    cout << "\n=======";
    cout << "\n 1- Binary to Octal";
    cout << "\n 2- Binary to Hexadecimal";
    cout << "\n 3-Exit program";
    cout << "\n Enter Selection";
    cin >> select;
   
    switch (select) {
        case '1':
             cout << "The binary number " << number << " is " << biToOct(number) << " in octal " << endl;
            break;
        case '2':
            cout << "The binary number " << number << " is " << biToHex(number) << " in hexadecimal " << endl;
            break;
        case '3':
            cout << "Goodbye" << endl;
            break;
            
        default:
            cout << "Invalid Selection " << endl;
            break;
    }

}

int biToOct(long int number)
{
    int octal =0, dec = 0, i=0;
    
    while(number != 0) //Checks binary number
    {
        dec += (number%10) * pow(2,i); // takes remainder of number and multiplies it by power of 2 each time
        ++i;
        number /=10; //divides binary number by 10 and stores it
    }
    i =1;
    
    while(dec != 0) //Checks decimal number
    {
        octal += (dec % 8) * i; //Stores octal variable based on expression
        dec /= 8;
        i *= 10;
    }
    return octal;
}

int biToHex(long int number)
{
    long int deci, quot;
    char hex[100];
    int i=1, j, temp;
    deci = decimalConvert(number);
    quot = deci;
    
    while(quot!=0)
    {
        temp = quot % 16;
        
        if(temp < 10)
        {
            temp = temp + 48;
        }
        else
        {
            temp = temp + 55;
        }
        hex[i++]=temp;
        quot = quot/16;
    }
    for(j=i-1; j>0; j--)
    {
        cout << hex[j];
    }
    return 0;
}

int decimalConvert(long int number)
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
        return deci; //Decimal number returned is value when original binary number is 1    }
}
