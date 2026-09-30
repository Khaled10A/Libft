/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:17:29 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/29 12:51:16 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
void	del_content(void *content)
{
free(content);
}

int	main(void)
{
t_list	*node1;
t_list	*node2;
char	*str1;
char	*str2;

str1 = malloc(6);
str2 = malloc(6);
if (str1 == NULL || str2 == NULL)
return (1);
str1[0] = 'H';
str1[1] = 'e';
str1[2] = 'l';
str1[3] = 'l';
str1[4] = 'o';
str1[5] = '\0';
str2[0] = 'W';
str2[1] = 'o';
str2[2] = 'r';
str2[3] = 'l';
str2[4] = 'd';
str2[5] = '\0';
node1 = ft_lstnew(str1);
node2 = ft_lstnew(str2);
node1->next = node2;
printf("Before:\n");
printf("node1 content: %s\n", (char *) node1->content);
printf("node2 content: %s\n", (char *) node2->content);
ft_lstdelone(node1, del_content);
printf("node2 still exists: %s\n", (char *) node2->content);
free(node2->content);
free(node2);
return (0);
}
*/
