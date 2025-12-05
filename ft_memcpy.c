#include "libft.h"
#include <stdio.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *de;
	const unsigned char *sr;
	size_t i;
	de=(unsigned char *)dst;
	sr=(const unsigned char *)src;
	i=0;
	while(i < n)
	{
		de[i]=sr[i];
		i++;
	}
	return(dst);
}

int main ()
{
	size_t n ; 
	n = 5;
	char de[12];
	const char sr[12]= "hello world";
	printf("before de %s\n",de);
	ft_memcpy(de, sr , n);
	printf("after de %s", de);
}

