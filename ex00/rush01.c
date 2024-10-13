/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:13:25 by amaatall          #+#    #+#             */
/*   Updated: 2024/10/12 17:42:25 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_c_to_i(char c);
void	ft_check_input(char *str);
void	error(void);

int	main(int argc, char **argv)
{
	ft_check_input(argv[1]);
	return (0);
}

void	ft_check_input(char *str)
{
	int	i;
	int	space_count;
	int	number_count;

	i = 0;
	space_count = 0;
	number_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' && str[i] > '9')
		{
			if (str[i] != ' ')
			{
				error();
				return ;
			}
			else if (str[i] == ' ')
			{
				space_count++;
			}
		}
		else
		{
			number_count++;
		}
		i++;
	}
	if (number_count != 16 || space_count != 15)
		error();
}

void	error(void)
{
	write(1, "Error\n", 6);
}

int	ft_c_to_i(char c)
{
	return (c - 48);
}
