#include <unistd.h>
#include <stdiio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int main()
{
	char *s = "asli";
	int a;
	a = ft_strlen(s);
	printf("%d",a);
}
