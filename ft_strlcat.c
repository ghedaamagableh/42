#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i ;
	size_t j ;
	i = 0;
	j = 0;
	while(dest[i] && i < size)
		i++;
	size_t len_d = i;
	while(src[j])
		j++;
	size_t len_s = j;
	if(len_d >= size)
		return size + len_s;
	j=0;
	while(src[j] && (len_d +j +1 )< size)
	{
		dest[len_d + j] = src[j];
		j++;
	}
	dest[len_d + j] = '\0';
	return len_d + len_s;
}


int main(void)
{
    char dest[50] = "hello ";
    const char *src = "world";
    size_t size = 30;
    size_t res;
   printf("Length of dest before: %zu\n", strlen(dest)); 
   res = ft_strlcat(dest, src, size);

    printf("The result: %zu\n", res);
    printf("Final string: %s\n", dest);

    return 0;
}
