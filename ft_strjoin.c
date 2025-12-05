#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char *ft_strjoin(char const *s1 , char const *s2)
{
	size_t i;
	i = 0;
	size_t j;
	j = 0;
	size_t len1;
	len1 = 0;
	size_t len2;
	len2 = 0;
	char *res;
	if(!s1 || !s2)
		return NULL;
	while(s1[len1])
		len1++;
	while(s2[len2])
		len2++;
	res= (char *)malloc(len1 +len2 +1);
	if(!res)
		return NULL;
	while(i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	while(j < len2)
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return res;
}

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *joined = ft_strjoin(s1, s2);

	if (joined)
	{
		printf("Result: %s\n", joined);
		free(joined);
	}
	else
		printf("Join failed!\n");

	return 0;
}
