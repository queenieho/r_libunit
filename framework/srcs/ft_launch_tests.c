/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:55:48 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 11:13:10 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/ft_printf/ft_printf.h" //theres a way to include these with -I flag on compile
#include "../../framework/includes/output.h"
#include "../../framework/includes/libunit.h"

int	ft_launch_tests(t_unit_test **tests)
{
	ft_printf("running tests?\n");
	t_unit_test *p;
	pid_t child;
	int stat;
	
	p = *tests;
	ft_printf("%s\n", p->name);
	while (p)
	{
		ft_printf("traversing?\n");
		child = fork();
		if (child < 0)
			ft_printf("fork failed"); //again, can we use this?
		else if (child == 0)
		{
			p->f();
		}
		else
		{
			wait(&stat);
			ft_printf("finished tests?");
		}
		p = p->next;
	}
	return (0);
}