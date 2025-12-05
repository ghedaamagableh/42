#include "libft.h"
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *ptr;
	ptr =(const unsigned char *)s;
	i=0;
	while(i <= n)
	{
		if(ptr[i] == (unsigned char )c)
		return ((void *) (ptr+i));
		i++;
	}
	return(NULL);

}

int main ()
{
	const char ss[]="hello worlad 42 school ";
	char  c ;
	c = '4';
	size_t n;
	n = 20;
	char *res;
	printf("before memchar %s \n ",ss);
	res= ft_memchr(ss, c , n);
	if(res)
		printf("found the character '%c' at: %s\n", c, res);
	else
		printf("not found %c \n %lu ",c  , n);


}

