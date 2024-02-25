#include "push_swap.h"
#include "LIBFT/libft.h"

// are there alphanumeric in args or not 
int agruments_checker(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            if (ft_isalpha(argv[i][j]))
                ft_errno_mess();
                j++;
        }
        i++;
    }
    if (!error_checker(argv, 1, 0))
        return (0);
    return (1);
}

// add args to stack and atoi converts them 
// creat new node for the new argument
// link the node to stack using (back_stack) function
void    args_stacker(char **argv, t_stack **s_a)
{
    long    i;

    i = 1;
    while (argv[i] != NULL)
    {
        ft_back_stack(s_a, ft_new_node(ft_atoi(argv[i])));
        i++;
    }
}
// creat a new node for the stack
t_stack *ft_new_node(int inside)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        ft_errno_mess();
    new->data = inside;
    new->next = NULL;
    return (new);
}
