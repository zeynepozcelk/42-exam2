#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp;
	
	if(!tab)
		return;
	if(size <= 1)
		return;
	
	while(i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int main()
{
	int h[5] = {3,65,23,-5,6};
	sort_int_tab(h,5);
	int i = 0;
	while(i < 10)
	{
		printf("%d ",h[i]);
		i++;
	}
}
