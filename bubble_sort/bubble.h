void swap(int *x, int *y)
{
   *x ^= *y;
   *y ^= *x;
   *x ^= *y;
}


void bubbleSortInt(int * arr, int size)
{
	int cnt = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			cnt = 0;
			if (arr[j-1] > arr[j])
			{
				swap (&arr[j-1], &arr[j]);
				cnt++;
			}
		}
		if (cnt == 0)
			return;
	}
};