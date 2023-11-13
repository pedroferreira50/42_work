#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;
	char	*str;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	j = 0;
	str = malloc(lens1 + lens2 + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[j + i] = s2[j];
		j++;
	}
	str[j + i] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || (char)c == '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char *removeSubstring(char *mainStr, size_t n)
{
    if (mainStr == NULL || n >= strlen(mainStr))
    {
        free(mainStr);
        return NULL;
    }
    char *newStr = strdup(mainStr + n);
    free(mainStr);
    return newStr;
}

char *read_loop(int fd, char *buffer, char *buffer_fd)
{
    int read_line;
    char *char_temp;

    read_line = 1;
    if (!buffer_fd)
    {
        buffer_fd = malloc(1);
        buffer_fd[0] = '\0';
    }
    while (read_line > 0)
    {
        read_line = read(fd, buffer, BUFFER_SIZE);
        if (read_line == -1)
        {
            free(buffer_fd); // Free allocated memory before returning NULL
            return NULL;
        }
        if (read_line == 0)
            break;
        buffer[read_line] = '\0';
        char_temp = buffer_fd;
        buffer_fd = ft_strjoin(char_temp, buffer);
        free(char_temp);
        char_temp = NULL;
    }
    if (read_line == 0 && ft_strlen(buffer_fd) == 0)
    {
        free(buffer_fd);
        return (NULL);
    }
    return (buffer_fd);
}

char	*get_next_line(int fd)
{
	if (fd < 0 || fd > 4095 || BUFFER_SIZE < 0)
		return (NULL);
	static char	*buffer_fd[4096];
	char		*line;
	char		*buffer;
	int			i;

	
	i = 0;
	line = NULL;
	buffer = malloc(BUFFER_SIZE + 1);
	buffer_fd[fd] = read_loop(fd, buffer, buffer_fd[fd]);
	free(buffer);
	if (!buffer_fd[fd])
		return (NULL);
	while (buffer_fd[fd][i] != '\0')
	{
		if (buffer_fd[fd][i] == '\n')
			break;
		i++;
	}
	if (buffer_fd[fd][i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	line = strncpy(line, buffer_fd[fd], i);
	line[i] = '\0';
	//printf("%s", buffer_fd[fd]);
	buffer_fd[fd] = removeSubstring(buffer_fd[fd], i);
	return (line);
}
/*
int	main(void)
 {
	int fd = open("42_with_nl", O_RDONLY);
	if (fd == -1) {
		perror("Error opening file");
		return 1;
	}
	//get_next_line(fd);
	char *buffer2;
	char *buffer3;
	char *buffer4;
	char *buffer5;
	char *buffer6;
	char *buffer7;
	char *buffer8;
	// char *buffer9;

	buffer2 = get_next_line(fd);
	printf("%s", buffer2);
	buffer3 = get_next_line(fd);
	printf("%s", buffer3);
	buffer4 = get_next_line(fd);
	printf("%s", buffer4);
	buffer5 = get_next_line(fd);
	printf("%s", buffer5);
	buffer6 = get_next_line(fd);
	printf("%s", buffer6);
	buffer7 = get_next_line(fd);
	printf("%s", buffer7);
	buffer8 = get_next_line(fd);
	printf("%s", buffer8);
	// buffer9 = get_next_line(fd);
	//printf("%s", buffer9);
    free(buffer2);
    free(buffer3);
    free(buffer4);
    free(buffer5);
    free(buffer6);
    free(buffer7);
	
	free(buffer8);
	// free(buffer9);
	close(fd);
	return 0;
 }*/