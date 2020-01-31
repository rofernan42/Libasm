/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:05:52 by rofernan          #+#    #+#             */
/*   Updated: 2020/01/31 11:03:31 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

int		main(int ac, char **av)
{
	(void)ac;

	printf("### FT_STRLEN ###\n");
	// printf("   strlen: %d\n", (int)strlen(av[1]));
	// printf("ft_strlen: %d\n\n", ft_strlen(av[1]));

	printf("### FT_STRCPY ###\n");
	// printf("   strcpy: %s\n", strcpy(av[1], av[2]));
	// printf("ft_strcpy: %s\n\n", ft_strcpy(av[1], av[2]));
	// printf("%c %c %c %c %c\n", av[1][0], av[1][1], av[1][2], av[1][3], av[1][4]);

	printf("### FT_STRCMP ###\n");
	printf("   strcmp: %d\n", strcmp(av[1], av[2]));
	printf("ft_strcmp: %d\n\n", ft_strcmp(av[1], av[2]));

	return (0);
}
