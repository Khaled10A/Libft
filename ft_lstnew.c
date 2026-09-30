/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:42:50 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/30 11:30:13 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int	main(void)
{
char	*x;
t_list	*node;

x = "khaled";
node = ft_lstnew(x);
printf("content = %s\n", (char *) node->content);
printf("content address = %p\n", node->content);
printf("next = %p\n", (void *) node->next);
free(node);
return (0);
}
*/
