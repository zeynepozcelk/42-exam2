#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int start;
	int end;
	
	if(ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		start = i;
		while(av[1][i] && !(av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		end = i;
		while(start < end)
		{
			write(1,&av[1][start],1);
			start++;
		}
		
	}
	write(1,"\n",1);
}
