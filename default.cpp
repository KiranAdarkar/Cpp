#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;

		Demo(int x = 10, int y = 20)      //parameterised constructor with default value
		{
			i = x;
			j = y;
		}	
};

int main()
{
	Demo obj1;                        // 10  20
	Demo obj2(11);                    // 11  20
	Demo obj3(11,21);                 // 11  21

	return 0;
}