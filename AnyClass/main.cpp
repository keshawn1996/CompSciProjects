//
//  main.cpp
//  AnyClass
//
//  Created by John Washington on 12/2/17.
//  Copyright © 2017 Ke'Shawn Alexander. All rights reserved.
//

#include <iostream>
using namespace std;
class anyclass
{
private:
    int number;
public:
    void setnum(int);
    friend void printnumber(anyclass any);
};
int main(int argc, const char * argv[]) {
    anyclass any;
    any.setnum(6);
    printnumber(any);
}
void anyclass::setnum(int x)
{
    number = x;
}
void printnumber(anyclass any)
{
    cout << "The number is "<< any.number << endl;
}
