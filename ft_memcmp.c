#include "libft.h"
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *ptr1;
	const unsigned char *ptr2;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i  = 0;
	while ( i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return(0);
}

int main ()
{
	const char str1[]="HELLO SCHOOL";
	const char str2[]="HELLO SCH00L";
	size_t n = 15; 
	char res;
	res=ft_memcmp(str1,str2,n);
       if(res == 0)
       printf("the string is equal \n ");
       else if (res < 0)
	       printf("the str1 is less than str2 \n");
       else
	       printf("the str2 is greate than str1 \n ");
}
