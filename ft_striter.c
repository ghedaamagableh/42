#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_striter(char *s, void (*f)(char *))
{
    if (!s || !f)
        return;
    while (*s)
    {
        f(s); 
        s++;
    }
}


void to_uppercase(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;  
}

int main()
{
    char str[] = "hello world";

    ft_striter(str, &to_uppercase);

    printf("%s\n", str);  
    return 0;
}
