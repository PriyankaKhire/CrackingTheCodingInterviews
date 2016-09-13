//
//  main.cpp
//  C++ Practice
//
//  Created by Priyanka on 13/09/14.
//  Copyright (c) 2014 Priyanka is dong Practice. All rights reserved.
//
#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
using namespace std;



int main()
{
    int a[6] = {4, 3, 6, 2, 1, 1};
    int p = 1;
    for(int i = 0; i < 6; i++)
    {
        p = p * a[i];
    }
    cout<<p<<endl;
    
}