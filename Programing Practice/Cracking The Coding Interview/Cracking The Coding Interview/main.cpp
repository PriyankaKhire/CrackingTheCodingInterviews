//
//  main.cpp
//  Cracking The Coding Interview
//
//  Created by Priyanka on 21/09/14.
//  Copyright (c) 2014 Priyanka is dong Practice. All rights reserved.
//

#include <iostream>
# include <string>
#include <stack>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *Root = new Node;

stack<Node *>stck;

int main()
{
    Root->data = 10;
    stck.push(Root);
    Node *ptr = stck.top();
    cout<<ptr->data;

}