#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int flg = 0;
	
	if(ac == 2)
	{
		while(av[1][i] == ' '|| av[1][i] == '\t')
			i++;
		while(av[1][i])
		{
			if(av[1][i] == ' ' || av[1][i] == '\t')
				flg = 1;
			if(!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if(flg)
					write(1,"   ",3);
				write(1,&av[1][i],1);
				flg = 0;
			}
		i++;
		}
	}
	write(1,"\n",1);
}
