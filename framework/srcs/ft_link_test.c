/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:42:02 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 11:37:38 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/ft_printf/ft_printf.h" //theres a way to include these with -I flag on compile
#include "../../framework/includes/output.h"
#include "../../framework/includes/libunit.h"

void	ft_link_test(t_unit_test **list, char *name, int (*f)(void))
{
	ft_printf("linking?\n");
	t_unit_test *new;
	t_unit_test *ptr;

	ptr = *list;
	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
		ft_printf("malloc failed\n"); //can we use error?
	else
	{
		new->name = name;
		// ft_printf("%s\n", new->name);
		new->f = f;
		// new->f();
	}
	if (*list == NULL)
	{
		
		ft_printf("copying first node!\n");
		*list = new;
		// ft_printf("%s\n", &list->name);
	}
	else if (ptr)
	{
		ft_printf("theres a list!\n");
		while (ptr)
		{
			// ft_printf("is this it?\n");
			ptr = ptr->next;
		}
		ptr = new;
		ft_printf("is this it?\n");
	}
	
	ft_printf("%s\n", ptr->name);

}


// void	ft_link_test(t_unit_test **list, char *name, int (*f)(void))
// {
// 	ft_printf("linking?\n");
// 	t_unit_test *new;
// 	t_unit_test *ptr;

// 	new = *list;
// 	while (new)
// 	{
// 		ft_printf("is this it?\n");
// 		new = new->next;
// 	}
// 	if (!(new = (t_unit_test *)malloc(sizeof(t_unit_test))))
// 		ft_printf("malloc failed\n"); //can we use error?
// 	new->name = name;
// 	ft_printf("%s\n", new->name);
// 	new->f = f;
// 	new->next = NULL;
// }
