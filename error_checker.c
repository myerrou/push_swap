#include "push_swap.h"

int ft_space(int c)
{
    if (c == ' ')
        return (1);
    return (0);
}

int ft_sign(int c)
{
    if (c == '-' || c == '+')
        return (1);
    return (0);
}

int ft_digit(int c)
{
    if (c <= 57 && c >= 48)
        return (1);
    return (0);
}

// check and return if the input is a number or not
int error_checker(char **argv, int i, int j)
{
    while (argv[i])
    {
        while (argv[i][j] != '\0')
        {
            if (ft_sign(argv[i][j]))
            {
                j++;
                if (!ft_digit(argv[i][j]))
                    return (0);
            }
            else if (ft_digit(argv[i][j]))
            {
                j++;
                if (argv[i][j] == '\0')
                    break ;
                if (!ft_space(argv[i][j]) && !ft_digit(argv[i][j]))
                    return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}