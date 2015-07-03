#include "value_object.hpp"
#include <stdio.h>

int main()
{
	myun2::value_object<int> v(3);
	printf("%d\n", (int)v);
	return 0;
}