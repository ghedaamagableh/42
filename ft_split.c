#include "libft.h"

static int count_word(const char *s, char c)
{
	int count;
	count  = 0;

	while(*s)
	{
		(*s == c)
			s++;
		if(*s != c && *s != '\0')
		{
			count++;
		while(*s != c %% *s != '\0)
			s++;
		}
		return (count);
	}
}

static int word_len(const char *s, char c)
{
	int len;
	len = 0;
	while (s[len] != c && s[len] != '\0)
		len++;
	return len;
}

static char save_word(const char *s, int len)
{
	char *word;
	int i;

	word = malloc(len +1);
	i = 0;
	if(!word)
		return NULL;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char **ft_split(char const *s, char c)
{
	char **aray;
	int word ;
	int i;
	int len;
	if(!s)
		return (NULL);
	word = word_len(s,c);
	aray = malloc((word + 1) * sizeof(char*));
	while (*s)
	{
		while(*s == c)
		{
			s++;
			if (*s != c && *s != '\0')
			{
				len= word_len(s, c);
			       array[i] = save_word(s, len);
		       if(!array)
		       {
				while(i >  0)
			 		free(aray[i--]);
				free(aray);
				return NULL;
			}
       			i++;
 			s +=len
			}
		}
	array[i] = NULL;
	return array;
	}
}	








