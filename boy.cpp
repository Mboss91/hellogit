#include <iostream>
using namespace std;
#include "boy.h"

void boy::setAge (int a)
{
	age = a;
}

int boy::getAge ()
{
	return age;
}

void boy::setHeight (float h)
{
	height = h;
} 

float boy::getHeight ()
{
	return height;
}

void boy::info()
{
	cout << "age is: " << age << endl;
	cout << "height is: " << height << endl;
}
