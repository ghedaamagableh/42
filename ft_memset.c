#include "libft.h"
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;
	i=0;
	ptr = (unsigned char *)b;

	while (i < len)
	{
		ptr[i]=(unsigned char)c;
		i++;
	}
	return(b);
}
/*int main()
{
	char buffer[20]= "libftTisting!";
	size_t len = 5;
	printf("before memset %s\n ",buffer);
	ft_memset(buffer+5 , '*' , len);
	printf("after memst %s ", buffer);
}
*/


