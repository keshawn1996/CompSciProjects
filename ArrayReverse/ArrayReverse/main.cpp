//
//  main.cpp
//  ArrayReverse
//
//  Created by John Washington on 12/1/17.
//  Copyright © 2017 Ke'Shawn Alexander. All rights reserved.
//

#include <iostream>
using namespace std;
int rerange(int[], int);
int main(int argc, const char * argv[])
{
    const int size = 26;
    int nums[size] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125};
    
    rerange(nums,size);
}

int rerange(int numarray[], int size)
{
    int *nums = numarray;
    for(int i=0; i<size; i++)
    {
        cout << *nums << " "<< endl;
        nums++;
    }
    for(int j=0; j<size; j++)
    {
        nums--;
        cout << *nums << " ";
    }
    return 0;
}
