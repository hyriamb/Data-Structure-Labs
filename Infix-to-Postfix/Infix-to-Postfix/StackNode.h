#pragma once
#include <iostream>
using namespace std;
#define elif else if

#define DATATYPE char
class StackNode
{
public:
	StackNode(DATATYPE,StackNode *);
	DATATYPE get_data();
	StackNode * get_next();
private:
	DATATYPE data;
	StackNode *next;
};

