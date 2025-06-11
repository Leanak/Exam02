/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:24:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 18:54:59 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	else
		return (ft_strcpy(dest, s));
}

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;


int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	if (!begin_list)
		return (0);
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void	ft_lst_add_back(t_list	**lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp =temp->next;
	temp->next = new;
}


int	main(void)
{
	t_list	*head = NULL;
	t_list	*e1 = malloc(sizeof(t_list));
	e1->data = ft_strdup("Hello");
	e1->next = NULL;

	t_list	*e2 = malloc(sizeof(t_list));
	e2->data = ft_strdup("Que tal");
	e2->next = NULL;

	ft_lst_add_back(&head, e1);
	ft_lst_add_back(&head, e2);
	printf("%d", ft_list_size(e1));
	return (0);
}