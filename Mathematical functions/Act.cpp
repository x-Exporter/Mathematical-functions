#include "Act.h"
#include <iostream>

using namespace std;
void do_math(int x, int y, int act)
{
	switch (act)
	{
	case 1:
		cout << x << " + " << y << " = " << x + y;
		break;
	case 2:
		cout << x << " - " << y << " = " << x - y;
		break;
	case 3:
		cout << x << " * " << y << " = " << x * y;
		break;
	case 4:
		cout << x << " / " << y << " = " << x / y;
		break;
	case 5:
		cout << x << " в степени " << y << " = " << pow(x,y);
		break;
	default:
		break;
	}
}