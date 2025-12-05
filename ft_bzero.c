#include "libft.h"
#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
	i++;
}
}

int  main(void)
{
     char str[6] = "hello";

    ft_bzero(str, 3);

    for (int i = 0; i < 6; i++)
    {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");
}
