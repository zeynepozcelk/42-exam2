#include <unistd.h>


int main(int ac, char **av)
{
	int i = 0;
	int end;
	int start;
	
	if(ac == 2)
	{
		while(av[1][i])
			i++;
		while(av[1][i] == ' '  || av[1][i] == '\t' || av[1][i] == '\0')
			i--;
		end = i;
		while(av[1][i] != ' '  && av[1][i] != '\t' && av[1][i])
			i--;
		start = i + 1;
		while(start <= end)
		{
			write(1,&av[1][start],1);
			start++;
		}
		
	}
	write(1,"\n",1);
}
