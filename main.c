/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:05:52 by rofernan          #+#    #+#             */
/*   Updated: 2020/01/30 13:09:50 by rofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str);

int		main(int ac, char **av)
{
	(void)ac;

	printf("### FT_STRLEN ###\n");
	printf("   strlen: %d\n", (int)strlen(av[1]));
	printf("ft_strlen: %d\n", ft_strlen(av[1]));

	return (0);
}
