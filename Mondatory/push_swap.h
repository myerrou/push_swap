/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:30 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:31 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

int					ft_do_rarb(t_stack **s_a, t_stack **s_b, int c, char s);
int					ft_do_rarrb(t_stack **s_a, t_stack **s_b, int c, char s);
int					ft_do_rrarb(t_stack **s_a, t_stack **s_b, int c, char s);
int					ft_do_rrarrb(t_stack **s_a, t_stack **s_b, int c, char s);
int					ft_rarb_solb(t_stack *s_a, t_stack *s_b, int c);
int					ft_rarrb_solb(t_stack *s_a, t_stack *s_b, int c);
int					ft_rrarb_solb(t_stack *s_a, t_stack *s_b, int c);
int					ft_rrarrb_solb(t_stack *s_a, t_stack *s_b, int c);
int					ft_rarb_sola(t_stack *s_a, t_stack *s_b, int c);
int					ft_rrarrb_sola(t_stack *s_a, t_stack *s_b, int c);
int					ft_rarrb_sola(t_stack *s_a, t_stack *s_b, int c);
int					ft_rrarb_sola(t_stack *s_a, t_stack *s_b, int c);
int					y_erro_check(char **argv, int i, int j);
int					ft_ab_root(t_stack *s_a, t_stack *s_b);
int					ft_ba_root(t_stack *s_a, t_stack *s_b);
int					ft_i_fetch(t_stack *s_a, int data);
int					ft_track_b(t_stack *s_b, int nbr);
int					ft_track_a(t_stack *s_a, int nbr);
int					ft_stack_size(t_stack *stack);
int					ft_dupli_check(t_stack *s_a);
int					ft_atoi(const char *str);
int					ft_atoya(const char *s);
// int	check_args(char **argv);
int					ft_sorted(t_stack *s_a);
int					ft_min(t_stack *s_a);
int					ft_max(t_stack *s_a);
int					digit(int c);
void				ft_check_0(t_stack **s_a, t_stack **s_b, char *move);
void				ft_check_2(t_stack **s_a, t_stack **s_b, char *move);
void				ft_rrr_0(t_stack **s_a, t_stack **s_b, int x);
void				ft_b3_sorting(t_stack **s_a, t_stack **s_b);
void				ft_back_stack(t_stack **s_a, t_stack *new);
void				ft_ss(t_stack **s_a, t_stack **s_b, int x);
void				ft_rr(t_stack **s_a, t_stack **s_b, int x);
void				ft_pb(t_stack **s_a, t_stack **s_b, int x);
void				ft_pa(t_stack **s_a, t_stack **s_b, int x);
void				add_to_stack(char **argv, t_stack **s_a);
void				ft_rrr_1(t_stack **s_b, int x);
void				ft_rrb(t_stack **s_b, int x);
void				ft_rra(t_stack **s_a, int x);
void				ft_ra(t_stack **s_a, int x);
void				ft_sa(t_stack **s_a, int x);
void				ft_rb(t_stack **s_b, int x);
void				ft_sb(t_stack **s_b, int x);
void				ft_all_sort(t_stack **s_a);
void				ft_3_sort(t_stack **s_a);
void				ft_free(t_stack **s_a);
void				ft_errno_mess(void);
t_stack				*ft_spliter(int argc, char **argv, t_stack *s_a,
						char ***temp);
t_stack				**s_a_sort(t_stack **s_a, t_stack **s_b);
t_stack				*ft_take_args(int argc, char **argv);
t_stack				*ft_stack_end(t_stack *stack);
t_stack				*s_b_sort(t_stack **s_a);
t_stack				*ft_node(int nbr);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_check_1(t_stack **s_a, t_stack **s_b, char *move);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strchr(char *str, int c);
char				*ft_strdup(const char *s1);
char				*get_next_line(int fd);
char				*get_next_line(int fd);
size_t				ft_strlcpy(char *dst, char *src, size_t dsize);
size_t				ft_strlen(const char *str);

#endif
