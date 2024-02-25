#include "push_swap.h"
#include "LIBFT/libft.h"

// if args are just two split the content to get numbers
t_stack *ft_spliter(char **argv)
{
    t_stack *s_a;
    int i;
    int x;
    char    **helper;

    i = 0;
    s_a = NULL;
    helper = ft_split(argv[1], ' ');
    while (helper[i])
    {
        x = ft_atoya(argv[i]);
        ft_back_stack(&s_a, ft_new_node(x));
        i++;
    }
    ft_free_split(helper);
    free(helper);
    return (s_a);
}
// an atoi that checks for errors and returns (errno_mess) 
int ft_atoya(const char *s)
{
    long long int   i;
    int             sign;

    i = 0;
    sign = 1;
    while (*s == '\t' || *s == '\n' || *s == ' ' || *s == '\f' || *s == '\r' || *s == '\v')
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
        s++;
    while (*s)
    {
        if (!ft_isdigit(*s))
            ft_errno_mess();
        i = (*s - 48) + i * 10;
        s++;
    }
    if ((i * sign) > 2147483647 || (i * sign) < -2147483648)
        ft_errno_mess();
    return (i * sign);
}

// list the args if more than two
t_stack *ft_process_args(int argc, char **argv)
{
    t_stack *s_a;
    int i;
    int x;

    i = 1;
    s_a = NULL;
    while (i < argc)
    {
        x = ft_atoya(argv[i]);
        ft_back_stack(&s_a, ft_new_node(x));
        i++;
    }
    return (s_a);
}
   