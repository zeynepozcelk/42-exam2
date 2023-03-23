#include <unistd.h>

int     *ft_range(int start, int end)
{
	int size = 0;
	int *arr;
	int start2 = start;
	
	if(start > end)
		size = start - end;
	else
		size = end - start;
	arr = (int*)malloc(sizeof(int)*(size + 1));
	int i = 0;
	while(size >= 0)
	{
		arr[i] = end;
		if(start2 > end);
			end++;
		else
			end--;
		size--;
		i++;
	}
	return arr;
}
