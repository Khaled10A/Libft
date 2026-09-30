/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:39:43 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/30 11:28:40 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	to_upper(void *content)
{
char	*str;
int		i;

str = (char *) content;
i = 0;
while (str[i] != '\0')
{
str[i] = ft_toupper(str[i]);
i++;
}
}

void	print_content(void *content)
{
printf("%s\n", (char *) content);
}

int	main(void)
{
char	str1[] = "hello";
char	str2[] = "world";
char	str3[] = "khaled";
t_list	*node1;
t_list	*node2;
t_list	*node3;

node1 = ft_lstnew(str1);
node2 = ft_lstnew(str2);
node3 = ft_lstnew(str3);
node1->next = node2;
node2->next = node3;
ft_lstiter(node1, to_upper);
ft_lstiter(node1, print_content);
free(node3);
free(node2);
free(node1);
return (0);
}
*/
