/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpistaso <mpistaso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:04:02 by mpistaso          #+#    #+#             */
/*   Updated: 2023/12/06 19:33:38 by mpistaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n] && to_find[n] != '\0')
		{
			n++;
		}
		if (to_find[n] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
