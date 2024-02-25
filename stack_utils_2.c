#include "push_swap.h"

int ft_track_a(t_stack *s_a, int nbr)
{
    int i;
    t_stack *x;
    t_stack *temp;

    i = 1;
    x = ft_retrive_last(s_a);
    if (nbr < s_a->data && nbr > x->data)
        i = 0;
    else if (nbr > ft_maximum(s_a) || nbr < ft_minimum(s_a))
        i = ft_i_fetch(s_a, ft_minimum(s_a));
    else
    {
        temp = s_a->next;
        while (s_a->data > nbr || temp->data < nbr)
        {
            s_a = s_a->next;
            temp = s_a->next;
            i++;
        }
    }
}

int ft_track_b(t_stack *s_b, int nbr)
{
    int i;
    t_stack *x;
    t_stack *temp;

    i = 1;
    x = ft_retrive_last(s_b);
    if (nbr > s_b->data && nbr < x->data)
        i = 0;
    else if (nbr > ft_maximum(s_b) || nbr < ft_minimum(s_b))
        i = ft_i_fetch(s_b, ft_maximum(s_b));
    else
    {
        temp = s_b->next;
        while (s_b->data < nbr || temp->data > nbr)
        {
            s_b = s_b->next;
            temp = s_b->next;
            i++;
        }
    }
}
