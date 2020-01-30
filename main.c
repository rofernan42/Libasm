/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:05:52 by rofernan          #+#    #+#             */
/*   Updated: 2020/01/30 14:35:46 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);

int		main(int ac, char **av)
{
	(void)ac;

	printf("### FT_STRLEN ###\n");
	printf("   strlen: %d\n", (int)strlen(av[1]));
	printf("ft_strlen: %d\n", ft_strlen(av[1]));

	printf("### FT_STRCPY ###\n");
	printf("   strcpy: %s\n", strcpy(av[1], av[2]));
	printf("ft_strcpy: %s\n", ft_strcpy(av[1], av[2]));


	return (0);
}
