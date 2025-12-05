#include "libft.h"
#include <stdio.h>
char *ft_strnstr(const char *haystack , const char *needle, size_t len)
{
	const char *h;
	const char *n;
        size_t l ;
	if(*needle == '\0')
		return((char *)haystack);
	while(*haystack && len > 0)
	{
	h = haystack;
	n = needle;
	l = len;
	while( *h &&  *n && l && *h == *n)
	{
		h++;
		n++;
		l--;
	}
	if(*n == '\0')
		return((char *)haystack);
	haystack++;
	l--;
	}
	return NULL;
}
/*char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j]
            && haystack[i + j] == needle[j]
            && (i + j) < len)
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)haystack + i);
        i++;
    }
    return (NULL);
}
*/
int main(void)
{
    const char *haystack = "hello world and 42 students";
    const char *needle = "world";
    size_t len = 11; 

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Found \"%s\" in \"%s\" --> \"%s\"\n", needle, haystack, result);
    else
        printf("\"%s\" not found in \"%s\" within first %zu characters\n", needle, haystack, len);

    return 0;
}
