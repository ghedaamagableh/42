#include "libft.h"
#include <stdio.h>

char *ft_strncpy(char *dest , const char *src, size_t n)
{
	size_t i;
	i =0;
	while (src[i] && i < n)
	{
		dest[i] = src[i] ;
	       i++;
	}
          while (i < n)
	  {
	dest[i] = '\0';
           i++;
	  }
        return (dest);
}

int main ()

{
    char d[15];
    const char *s = "hello world ";
    size_t n = 15;
    ft_strncpy(d , s , n);
        d[n] = '\0'; 
         printf("the s before %s \n ", s);
    printf("the d after %s \n " , d);
}

