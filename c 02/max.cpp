#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int max;
	
	if(!tab)
		return (0);
	
	max = tab[i];
	while(i < len)
	{
		if(tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}

int main()
{
	int arr[] = {4,6,2,8};
	printf("%d",max(arr,4));
}

