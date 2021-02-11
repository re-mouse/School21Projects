/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleilani <hleilani@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 05:08:28 by hleilani          #+#    #+#             */
/*   Updated: 2020/09/19 05:08:29 by hleilani         ###   ########.fr       */
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

int		ft_str_is_lowercase(char *str);

int		ft_str_is_lowercase(char *str)
{
	int		length;
	char	c;

	length = ft_strlen(str);
	while (length > 0)
	{
		c = *str;
		if (!(c >= 'a' && c <= 'z'))
		{
			return (0);
		}
		str++;
		length--;
	}
	return (1);
}
