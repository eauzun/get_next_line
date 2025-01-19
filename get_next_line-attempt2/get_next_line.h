#ifndef GET_NEXT_LINE_H
#define BUFFER_SIZE 10000000

#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
static  char *get_all_line(int fd, char *all_line);
static  char *till_nl(char *all_line);
static  char *return_rest(char *all_line);
char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
size_t  ft_strnl(char *s);
size_t	ft_strlen(const char *s);
#endif