#include"libft.h"

int ft_all_digits(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(ft_isdigit(s[i]) == 0)
            return(0);
        i++;
    }
    return(1);
}

int ft_non_unique(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(ft_memchr(s,))
    }
    
}


int ft_parse(int p, char **s)
{
    int i;

    if(p < 2)
        return(-1);
    i = 0;
    while(s[i])
    {
        if(ft_strncmp(s[i], "0", ft_strlen(s[i])) != 0)
            if(ft_atoi(s[i]) == 0 || ft_all_digits(s[i]) != 1)
            {
                write(1, "Error", 5);
                return(-1);
            }
        i++;
    }
    if(ft_non_unique(s) == 1)
    {
        write(1, "Error", 5);
        return(-1);
    }
    return(1);
}


int main(int argc, char **argv)
{
    printf("%i",ft_parse(argc,argv));
    return(0);
}