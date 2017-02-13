/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:35:12 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 13:49:19 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>



typedef struct	s_unit_test
{
	char				*name;
	int					(*f)(void);
	struct s_unit_test	*next;
}				t_unit_test;

int	ft_launch_tests(t_unit_test **tests);
void	ft_link_test(t_unit_test **list, char *t_name, int (*f)(void));
int	ft_itoa_base_launcher();
int basic_test1();
int basic_test2();



#endif