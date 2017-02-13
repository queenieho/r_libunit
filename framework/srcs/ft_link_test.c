/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 08:42:02 by qho               #+#    #+#             */
/*   Updated: 2017/02/12 14:04:18 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/ft_printf/ft_printf.h" //theres a way to include these with -I flag on compile
#include "../../framework/includes/output.h"
#include "../../framework/includes/libunit.h"

t_unit_test	*ft_create_list(char *name, int (*f)(void))
{
	t_unit_test *list;

	list = (t_unit_test *)malloc(sizeof(t_unit_test));
	if(list)
	{
		list->name = name;
		list->f = f;
		list->next = NULL;
	}
	return (list);
}

void	ft_link_test(t_unit_test **list, char *name, int (*f)(void))
{
	ft_printf("linking?\n");
	t_unit_test *ptr;
//	ptr = *list;
	ptr = *list;
	if (!*list)
	{
		// ft_printf("new name: %s\n", new->name);
		// ft_printf("copying first node!\n");
		*list = ft_create_list(name, f);
		// ft_printf("%s\n", list->name);
	}
	else
	{
		ft_printf("second node!\n");
		while (ptr->next)
		{
			ft_printf("dont print!\n");
			ptr = ptr->next;
		}
		ptr->next = ft_create_list(name, f);
	}

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
