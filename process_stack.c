#include "push_swap.h"

// see if stack is sorted or not
int ft_sorted(t_stack *s_a)
{
    int i;

    i = s_a->data;
    while (s_a)
    {
        if (s_a->data < i)
            return (0);
        i = s_a->data;
        s_a = s_a->next;
    }
    return (1);
}

// sort s_a if there are more than two elements in it than bring the smallest to the top !
void    ft_sort(t_stack **s_a)
{
    t_stack *s_b;
    int     i;

    s_b = NULL;
    if (ft_lstsize(*s_a) == 2)
        ft_s_a(s_a, 0);
    else
    {
        s_b = ft_sorti_b(s_a);
        s_a = ft_sorting_a(s_a, &s_b);
        i = ft_i_fetch(*s_a, ft_minimum(*s_a));
        if (i < ft_lstsize(*s_a) - i)
        {
            while ((*s_a)->data != ft_minimum(*s_a))
                ft_r_a(s_a, 0);
        }
        else
        {
            while ((*s_a)->data != ft_minimum(*s_a))
                ft_rr_a(s_a, 0);
        }
    }
}

// a basic function that frees the stack
void    ft_free(t_stack **stack)
{
    t_stack *temp;

    if (!stack)
        return ;
    while (*stack)
    {
        temp = (*stack)->next;
        (*stack)->data = 0;
        *stack = temp;
    }
}

// add a node to the back of the stack
void    ft_back_stack(t_stack **stack, t_stack *new_node)
{
    t_stack *x;

    x = ft_retrive_last(*stack);
    if (!stack)
        return ;
    if (!*stack)
        *stack = new_node;
    else
        x->next = new_node;
}

// check if the same number is repeated
int ft_double_checker(t_stack *s_a)
{
    t_stack *temp;

    while (s_a)
    {
        temp = s_a->next;
        while (temp)
        {
            if (s_a->data == temp->data)
                return (1);
            temp = temp->next;
        }
        s_a = s_a->next;
    }
    return (0);
}