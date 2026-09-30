/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:23:25 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/30 10:40:10 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*to_upper(void *content)
{
char	*str;
int		i;

str = ft_strdup((char *) content);
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
str[i] = ft_toupper(str[i]);
i++;
}
return (str);
}

void	print_list(t_list *lst)
{
while (lst != NULL)
{
printf("%s\n", (char *) lst->content);
lst = lst->next;
}
}

int	main(void)
{
t_list	*list;
t_list	*new_list;
char	str1[] = "hello";
char	str2[] = "world";
char	str3[] = "khaled";

list = ft_lstnew(str1);
list->next = ft_lstnew(str2);
list->next->next = ft_lstnew(str3);
printf("Original:\n");
print_list(list);
new_list = ft_lstmap(list, to_upper, free);
printf("\nMapped:\n");
print_list(new_list);
ft_lstclear(&new_list, free);
free(list->next->next);
free(list->next);
free(list);
return (0);
}
*/
