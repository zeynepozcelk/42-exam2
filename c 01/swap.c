#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main()
{
	int a=23;
	int b=32;
	ft_swap(&a,&b);
	printf("%d ve %d",a,b);
}
