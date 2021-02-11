/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleilani <hleilani@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 05:08:34 by hleilani          #+#    #+#             */
/*   Updated: 2020/09/19 05:08:35 by hleilani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

int		ft_str_is_uppercase(char *str);

int		ft_str_is_uppercase(char *str)
{
	int		length;
	char	c;

	length = ft_strlen(str);
	while (length > 0)
	{
		c = *str;
		if (!(c >= 'A' && c <= 'Z'))
		{
			return (0);
		}
		str++;
		length--;
	}
	return (1);
}
