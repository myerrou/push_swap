#include "push_swap.h"

int y_erro_check(t_stack *s_a)
{
    int x;

    x = s_a->data;
    while (s_a)
    {
        if (x > s_a->data)
            return (0);
        x = s_a->data;
        s_a = s_a->next;
    }
}

int ft_i_fetch(t_stack *s_a, int num)
{
    int i;

    i = 0;
    while (s_a->data != num)
    {
        i++;
        s_a = s_a->next;
    }
    return (i);
}