/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:05:52 by rofernan          #+#    #+#             */
/*   Updated: 2020/02/03 12:49:18 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t nbyte);
ssize_t	ft_read(int fd, void *buf, size_t nbyte);
char	*ft_strdup(const char *str);

void	test_strlen(char *str)
{
	printf("### FT_STRLEN ###\n");
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n", (int)ft_strlen(str));
}

void	test_strcpy(char* dest, char *src)
{
	char *str1;
	char *str2;

	printf("### FT_STRCPY ###\n");
	str1 = strdup(dest);
	str2 = strdup(dest);
	str1 = strcpy(str1, src);
	str2 = ft_strcpy(str2, src);
	printf("   strcpy: %s\n", str1);
	printf("ft_strcpy: %s\n", str2);
	printf("%c %c %c %c %c %c %c\n", str1[0], str1[1], str1[2], str1[3], str1[4], str1[5], str1[6]);
	printf("%c %c %c %c %c %c %c\n", str2[0], str2[1], str2[2], str2[3], str2[4], str2[5], str2[6]);
}

void	test_strcmp(char *s1, char *s2)
{
	printf("### FT_STRCMP ###\n");
	printf("   strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
}

void	test_write(char *str)
{
	int fd1;
	int fd2;

	printf("### FT_WRITE ###\n");
	fd1 = open(str, O_RDONLY);
	fd2 = open(str, O_RDONLY);
	printf(" -    write: %zd\n", write(1, str, strlen(str)));
	printf(" - ft_write: %zd\n", ft_write(1, str, strlen(str)));
	close(fd1);
	close(fd2);
}

void	test_read(char *str)
{
	int		fd1;
	int		fd2;
	int		ret1;
	int		ret2;
	char	buffer1[33];
	char	buffer2[33];

	printf("### FT_READ ###\n");
	fd1 = open(str, O_RDONLY);
	fd2 = open(str, O_RDONLY);
	ret1 = read(fd1, buffer1, 32);
	ret2 = ft_read(fd2, buffer2, 32);
	buffer1[ret1] = 0;
	buffer2[ret2] = 0;
	printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	ret1 = read(fd1, buffer1, 32);
	ret2 = ft_read(fd2, buffer2, 32);
	buffer1[ret1] = 0;
	buffer2[ret2] = 0;
	printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	ret1 = read(fd1, buffer1, 32);
	ret2 = ft_read(fd2, buffer2, 32);
	buffer1[ret1] = 0;
	buffer2[ret2] = 0;
	printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	close(fd1);
	close(fd2);
}

void	test_strdup(char *str)
{
	char *str1;
	char *str2;

	printf("### FT_STRDUP ###\n");
	str1 = strdup(str);
	str2 = ft_strdup(str);
	printf("   strdup: %s\n", str1);
	printf("ft_strdup: %s\n", str2);
}

int		main(int ac, char **av)
{
	char param;

	printf("1 : strlen - 1 param\n2 : strcpy - 2 params\n3 : strcmp - 2 params\n");
	printf("4 : write - 1 param\n5 : read - 1 param\n6 : strdup - 1 param\n\n");
	if (ac > 2)
	{
		param = av[1][0];
		if (param == '1')
			test_strlen(av[2]);
		else if (param == '2')
			test_strcpy(av[2], av[3]);
		else if (param == '3')
			test_strcmp(av[2], av[3]);
		else if (param == '4')
			test_write(av[2]);
		else if (param == '5')
			test_read(av[2]);
		else if (param == '6')
			test_strdup(av[2]);
	}
	else
		printf("Parameters missing.\n");
	return (0);
}
