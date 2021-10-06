#include <iostream>
#include "base.h"
int main()
{
	
	base<int, int> dop;
	dop.SetValue1(1);
	dop.SetValue2(2);
	dop.Print();
	child<int, int, int, int> dop1{ 10,31,13,10 };
	dop1.Print();
	child2<int, int, int, int, int, int> dop2{ 16,10,17,10,15,14 };
	dop2.SetValue1(11);
	dop2.SetValue2(20);
	dop2.Print();

}