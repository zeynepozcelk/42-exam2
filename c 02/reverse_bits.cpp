#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char ret = 0;
	
	while(--i >= 0)
		if(octet & 1 << i)
			ret |= (1 << (7 -i));
	return (ret);
}
