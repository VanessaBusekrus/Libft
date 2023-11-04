/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vbusekru <vbusekru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 12:22:44 by vbusekru      #+#    #+#                 */
/*   Updated: 2023/10/24 12:22:44 by vbusekru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*list = ft_lstnew("a");
// 	t_list	*new = ft_lstnew("g");
// 	int		len;

// 	ft_lstadd_front(&list, new);
// 	printf("  list: %s\n", (char *)list->content);
// 	len = ft_lstsize(list);
// 	printf("length: %d\n", len);
// 	return (0);
// }
