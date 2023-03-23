#include <unistd.h>
#inlcude <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size;
	int i = 0;
	int *arr;
	int start2;
	
	if(end > start)
		size = end - size;
	else
		size = start - end;
	arr = (int*)malloc(sizeof(int)*(size + 1));
	if(!arr)
		return(NULL);
	start2 = start;
	while(i <= size)
	{
		arr[i] = start;
		if(start2 < end)
			start++;
		else
			start--;
		i++;
	}
	return(arr);
}

int main()
{
	int i = 0;
	int *arr = ft_range(0,4);
	while(i < 3)
	{
		printf("%d",arr[i]);
		i++;
	}
}
