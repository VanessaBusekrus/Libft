/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vbusekru <vbusekru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 16:45:32 by vbusekru      #+#    #+#                 */
/*   Updated: 2023/10/17 16:45:32 by vbusekru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Notes:
1. The `ft_lstnew` function takes a pointer to
the content of the new node as input and
returns a pointer to the newly created node.
2. The `content` parameter of `ft_lstnew` is a
pointer to the data that you want to store in
the new node.
3. The function returns a pointer to the newly
created node, which has the type `t_list`.
4. The example code demonstrates the usage of
`ft_lstnew` to create a new node with the content
"Hello, world!".
5.The `new_node` variable stores the pointer
to the newly created node.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == 0)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*new_node = ft_lstnew("Hello, world!");

// 	printf("Content of the new node: %s\n", (char *)new_node->content);
// 	free (new_node);
// 	return (0);
// }
