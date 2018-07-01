//
//  main.cpp
//  BMI
//
//  Created by John Washington on 2/6/17.
//  Copyright © 2017 Ke'Shawn Alexander. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <iostream>

#include <iomanip>

using namespace std;

int w;

int h;


int main()

{
    
    cout<< "Please enter your weight in pounds:" << endl;
    
    cin >> w;
    
    cout<< "Please enter your height in inches:" << endl;
    
    cin >> h;
    
    
    
    int bmi = (w*703)/(h*h);
    
    
    
    cout << "Your BMI is:" << bmi << endl;
    
    cout << "This is how to read your BMI" << endl;
    
    cout << "18.5-24.9 : Average" << endl;
    
    cout << "25.0-29.9 : Overweight" << endl;
    
    cout << "30 and above : Obese" << endl;
    
    
    
    return 0;   
    
}

