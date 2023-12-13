#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	int	digito[10];
	int	digitochar;

	i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	if (nb == 0)
        	write (1, "0", 1);
	if (nb < 0 && nb > -2147483648)
		{
		write (1, "-", 1);
		nb = -nb;	
		}
	while (nb > 0)
	{
		digito[i] = nb % 10;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		digitochar = digito[i] + '0';
		write (1, &digitochar, 1);
	}
}
