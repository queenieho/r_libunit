/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:28:48 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 11:31:57 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/ft_printf/ft_printf.h" //theres a way to include these with -I flag on compile
#include "../../framework/includes/output.h"
#include "../../framework/includes/libunit.h"
#include <string.h>

int basic_test1()
{
	char *str;

	str = "25";
	if (strcmp(str, "25") == 0)
	{
		ft_printf("%s\n", str);
		return (0);
	}
	else /* this dumb test fails */
		return (-1);
}