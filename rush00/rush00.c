/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozo-gu <jpozo-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:41:01 by jpozo-gu          #+#    #+#             */
/*   Updated: 2023/11/26 18:13:27 by jpozo-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xc;
	int	yr;

	yr = 1;
	while (yr <= y && (x > 0 && y > 0))
	{
		xc = 1;
		while (xc <= x)
		{
			if ((yr == 1 || yr == y) && (xc == 1 || xc == x))
				ft_putchar('o');
			else if ((yr > 1 && yr < y) && (xc == x || xc == 1))
				ft_putchar('|');
			else if ((xc > 1 && xc < x) && (yr == 1 || yr == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			xc++;
		}
		yr++;
		ft_putchar ('\n');
	}
	return ;
}
