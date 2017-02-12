/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:09:08 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 12:44:45 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/ft_printf/ft_printf.h" //theres a way to include these with -I flag on compile
#include "../../framework/includes/output.h"
#include "../../framework/includes/libunit.h"

int	ft_itoa_base_launcher()
{
	t_unit_test *list;
	function pointer (params test takes) = function pointr array;
	function pointr array( 3 );
	
	ft_printf("ft_itoa_base:\n");
	ft_link_test(&list, "basic test 01", &basic_test1);
	// ft_printf("list 1: %s\n", list->name);
	ft_link_test(&list, "basic test 02", &basic_test2);

	ft_printf("linked?\n");
	ft_printf("list 1: %s\n", list->name);
	ft_printf("list 2: %s\n", list->next->name);
	return (ft_launch_tests(&list));
}

