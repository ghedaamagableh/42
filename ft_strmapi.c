#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
size_t i;
i = 0;
while(s[i])
	i++;
return i;
}
char *ft_strmapi(char const *s ,char (*f)(unsigned int ,char))
{
	char  *res;
	unsigned int i ;
	i = 0;
	if(!s || !f)
		return NULL;
	res =malloc(ft_strlen(s)+1);
	if(!res)
		return NULL;
	while(s[i])
	{
		res[i] = f(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return res;
}
char test_func(unsigned int i, char c)
{
    return c + i;
}

int main(void)
{
    char *s = "abcd";
    char *result = ft_strmapi(s, test_func);

    if (result)
    {
        printf("Original: %s\n", s);
        printf("Modified: %s\n", result);
        free(result);
    }
    return 0;
}
