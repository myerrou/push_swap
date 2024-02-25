#include "push_swap.h"

int ft_minimum(t_stack *s_a)
{
    int x;

    x = s_a->data;
    while (s_a)
    {
        if (x > s_a->data)
            x = s_a->data;
        s_a = s_a->next;
    }
    return (x);
}

int ft_maximum(t_stack *s_a)
{
    int x;

    x = s_a->data;
    while (s_a)
    {
        if (x < s_a->data)
            x  = s_a->data;
        s_a = s_a->next;
    }
}

int ft_stack_size(t_stack *stack)
{
    size_t  i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

t_stack *ft_retrive_last(t_stack *stack)
{
    if(!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}
