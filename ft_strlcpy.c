#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst , const char *src, size_t dstsize)
{
	size_t len;
	size_t i;
	len = ft_strlen(src);
	i = 0;
	if(dstsize == 0)
		return (len);
	while(i < dstsize -1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return(len);
}

int main(void)
{
    char d[20];
    const char *s = "hello world";
    size_t copied_len;

   
    copied_len = ft_strlcpy(d, s, sizeof(d));

   
    printf("✅ Copied '%s' into destination buffer.\n", d);
    printf("📏 Length of source: %zu\n", copied_len);

    return (0);
}
