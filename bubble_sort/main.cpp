#include "bubble.h"
#include <iostream>

using namespace std;

void main()
{
	int a[5] = {5,7,1,2,4};
	bubbleSortInt(a, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}