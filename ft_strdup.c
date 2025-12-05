#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(const char *s1)
{
size_t len;
len = ft_strlen(s1);
char *copy;
int i;
i =0;
copy =(char *) malloc(len+1);
if(!copy)
{
return NULL;

}
while (s1[i])
{
copy[i] = s1[i];
i++;

}
copy[i] = '\0';


return (copy);

}
/*
 *size_t len;
 len = ft_strlen(s1);
 char *copy;
 copy = (char *)malloc(len+1);
 if(!copy)
 return NULL;
 ft_strcpy(copy, s1);
 return (copy);
 * */
 int main ()
{
	char *org = "hello";
	char *copy;
	copy = ft_strdup(org);
	if(copy == NULL)
	{	printf("failed copy no memory ");
                   return 1;
	}
	printf("the orginal string %s \n",org);
	printf("the copy string %s \n ", copy );
	free(copy);
	return 0;
}
