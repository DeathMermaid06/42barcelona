char	*ft_strstr(char *str, char *to_find)
{
int i;
int n;
int len;

i = 0;
len = 0;
if (to_find[0] == '\0')
{
        return(str);
}
while (to_find[i] != '\0')
{
	len++;
	i++;
}
i = 0;

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

return (NULL);
}
