int	ft_atoi(char *str)
{
char	copia;
int	i;
int	c;
int	ai;

i = 0;
c = 0;
ai = 0;
while (str[i] != '\0' && str[i] < 48 && str[i] > 57)
	{
		if (str[i] == '-')
			c++;
			i++;
	}
if (c % 2 != 0)
	copia = '-';
	ai++;

while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		copia[ai] = str[i];
		ai++;
		i++;
	}
printf(copia)
}
