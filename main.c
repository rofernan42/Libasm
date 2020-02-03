/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:05:52 by rofernan          #+#    #+#             */
/*   Updated: 2020/02/03 10:22:28 by rofernan         ###   ########.fr       */
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

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	// char buffer1[33];
	// char buffer2[33];
	// int fd1;
	// int fd2;
	// int ret1;
	// int ret2;

	printf("### FT_STRLEN ###\n");
	// printf("   strlen: %d\n", (int)strlen(av[1]));
	// printf("ft_strlen: %d\n\n", (int)ft_strlen(av[1]));

	printf("### FT_STRCPY ###\n");
	// printf("   strcpy: %s\n", strcpy(av[1], av[2]));
	// printf("ft_strcpy: %s\n\n", ft_strcpy(av[1], av[2]));
	// printf("%c %c %c %c %c\n", av[1][0], av[1][1], av[1][2], av[1][3], av[1][4]);

	printf("### FT_STRCMP ###\n");
	// printf("   strcmp: %d\n", strcmp(av[1], av[2]));
	// printf("ft_strcmp: %d\n\n", ft_strcmp(av[1], av[2]));

	// fd1 = open(av[1], O_RDONLY);
	// fd2 = open(av[1], O_RDONLY);

	printf("### FT_WRITE ###\n");
	// printf(" %zd\n", write(1, av[1], strlen(av[1])));
	// printf(" %zd\n\n", ft_write(1, av[1], strlen(av[1])));

	// close(fd1);
	// close(fd2);

	// fd1 = open(av[1], O_RDONLY);
	// fd2 = open(av[1], O_RDONLY);

	printf("### FT_READ ###\n");

	// ret1 = read(fd1, buffer1, 32);
	// ret2 = ft_read(fd2, buffer2, 32);
	// buffer1[ret1] = 0;
	// buffer2[ret2] = 0;
	// printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	// printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	// ret1 = read(fd1, buffer1, 32);
	// ret2 = ft_read(fd2, buffer2, 32);
	// buffer1[ret1] = 0;
	// buffer2[ret2] = 0;
	// printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	// printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	// ret1 = read(fd1, buffer1, 32);
	// ret2 = ft_read(fd2, buffer2, 32);
	// buffer1[ret1] = 0;
	// buffer2[ret2] = 0;
	// printf("   read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd1, ret1, buffer1);
	// printf("ft_read:  fd: %d, ret: %d, buffer :\n%s\n\n", fd2, ret2, buffer2);
	// close(fd1);
	// close(fd2);

	printf("### FT_STRDUP ###\n");

	char *str1;
	char *str2;

	str1 = strdup(av[1]);
	str2 = ft_strdup(av[1]);
	printf("%s\n", str1);
	printf("%s\n\n", str2);

	return (0);
}
