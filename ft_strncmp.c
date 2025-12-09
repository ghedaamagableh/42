#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main ()
{
	    const char *st1 = "hello world";
            const char *st2 = "hella";
    size_t n = 5;

    int res = ft_strncmp(st1, st2, n);
    printf("ft_strncmp result: %d\n", res);

    if (res == 0)
        printf("Strings are equal\n");
    else if (res < 0)
        printf("st1 is less than st2\n");
    else
        printf("st1 is greater than st2\n");

    return 0;
}
