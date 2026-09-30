/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:44:00 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/30 09:34:51 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
int	main(void)
{
t_list	*head;
t_list	*node1;
t_list	*node2;
t_list	*node3;

node1 = ft_lstnew(ft_strdup("Hello"));
node2 = ft_lstnew(ft_strdup("World"));
node3 = ft_lstnew(ft_strdup("Khaled"));
node1->next = node2;
node2->next = node3;
head = node1;
printf("Before clear:\n");
printf("%s\n", (char *) head->content);
printf("%s\n", (char *) head->next->content);
printf("%s\n", (char *) head->next->next->content);
ft_lstclear(&head, free);
printf("\nAfter clear:\n");
printf("head = %p\n", (void *) head);
return (0);
}
*/
