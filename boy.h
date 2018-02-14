#include <iostream>
#include <vector>
#ifndef boy_h
#define boy_h
using namespace std;

class boy
	{
		private:
			int age;
			float height;

		public:
			void setHeight (float h)
				{	
					height = h;
				}
		
			float getHeight ()

				{
					 return height;
				}

			void setAge (int a)
				{
					age = a;
				}	
		
	
			int getAge ()
				{
					return age;
				}

			void info ()
				{
					cout << "height: " << height << endl;
					cout << "age: " << age << endl;
				}
};
#endif


