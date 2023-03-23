#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}
int	ft_strspn(const char *s, const char *accept);
{
	size_t i = 0;
	
	while(s[i] != '\0')
	{
		if(ft_strchr(accept,s[i] == 0))
			break;
		++i;
	}
	return (i);
}

int main()
{
	char s[] = "zeynep";
	char s2[] = "ep";
	
	int lng;
	lng = ft_strspn(s,s2);
	printf("%d\n",lng);
}
