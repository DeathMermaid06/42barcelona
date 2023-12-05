char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {       
                str[i] = str[i] + 32;       
        }
	i++;
    }

    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] = str[0] - 32;
        i++;
    }

	i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
        {
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }

    return (str);
}


