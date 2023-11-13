#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
#include <stdio.h>

//
# include <string.h>
# include <fcntl.h>
#include <bsd/string.h>
# include "get_next_line.h"

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 42

# endif

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char		*get_next_line(int fd);
char *removeSubstring(char *mainStr, size_t n);
char *read_loop(int fd, char *buf, char *backup);

#endif