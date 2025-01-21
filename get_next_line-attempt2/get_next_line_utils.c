#include"get_next_line.h"

size_t ft_strnl(char *s)
{
    if(!s)
        return (0);
    while(*s)
    {
        if(*s == '\n')
            return(1);
        s++;    
    }
    return(0);
}

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s1)
// 	{
// 		s1 = malloc(1 * sizeof(char));
// 		*s1 = '\0';
// 	}
// 	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
// 	if (!str)
// 		return (NULL);
// 	i = -1;
// 	while (*(s1 + ++i))
// 		*(str + i) = *(s1 + i);
// 	j = -1;
// 	while (*(s2 + ++j))
// 		*(str + i + j) = *(s2 + j);
// 	*(str + i + j) = '\0';
// 	free(s1);
// 	return (str);
// }


char	*ft_strjoin(char  *s1, char  *s2)
{
	char	*str;
	char	*strm;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	strm = str;
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (strm);
}

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*s2;
	char	*result;

	s1len = ft_strlen(s1);
	s2 = (char *)malloc(s1len + 1);
	if (s2 == NULL)
		return (NULL);
	result = s2;
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (result);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

