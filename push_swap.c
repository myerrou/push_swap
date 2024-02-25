#include "push_swap.h"

// pass an error message to the screen
void    ft_errno_mess(void)
{
    write (2, "Error\n", 6);
    exit(1);
}

int main(int argc, char **argv)
{
    t_stack *s_a;
    if (argc < 2)
        ft_errno_mess();
    else if (argc == 2)
        return (ft_spliter(argv));
    else
    {
        s_a = ft_process_args(argc, argv);
        if (!s_a || !y_erro_check(s_a))
        {
            ft_free(&s_a);
            ft_errno_mess();
        }
        if (!ft_sorted(s_a))
            ft_sort(&s_a);
        ft_free(&s_a);
    }
    return (0);
}
