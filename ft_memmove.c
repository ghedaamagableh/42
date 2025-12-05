#include "libft.h"
#include<stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			l;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	l = 0;
	if (d > s && d < s + len)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		while (l < len)
		{
			d[l] = s[l];
			l++;
		}
	}
	return (dst);
}
int main()
{
	size_t len = 12;
        char de[20];
	const char sr[]="hello world";
	printf("before %s \n",de);
	ft_memmove(de,sr, len);
	printf("after %s \n ",de);
}
