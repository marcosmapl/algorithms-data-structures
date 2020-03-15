#include <stdio.h>

char onlyOne(int key, int v[], unsigned int size)
{
	unsigned int head = 0, tail = size-1;
	unsigned int mid;
	
	while (head < tail)
	{
		mid = (head + tail) / 2;
		if (key > v[mid])
			head = mid;
		else if (key < v[mid])
			tail = mid;
		else 
		{
			if (size == 1)
				return 1;
			else if (mid == 0)
				return (key != v[mid+1]);
			else if (mid == size-1)
				return (key != v[mid-1]);
			else
				return (key != v[mid-1]) && (key != v[mid+1]);
		}
	}
	if (head == tail)
		return 1;
	else
		return 0;
}

char testOnlyOne()
{

}

int main(void)
{
	printf("%d\n", onlyOne(9, v, sizeof(v)/sizeof(int)));
	return 0;
}