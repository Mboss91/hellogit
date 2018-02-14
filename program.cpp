#include <iostream>
using namespace std;

#include "boy.h"
#include <vector>
int main ()
{
	vector <boy> group;
	int a;
	float h;
	boy *b1;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter age " << endl;
		cin >> a;
		cout << "Enter height " << endl;
		cin >> h;

		b1 = new boy;
		b1 -> setHeight(h);
		b1 -> setAge(a);

		group.push_back(*b1);
	}

	for (int i = 0; i < 4; i++)
	{
	group[i].info();
	}
	

return 0;
}

