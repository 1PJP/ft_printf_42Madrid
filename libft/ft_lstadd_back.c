/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:24:47 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 17:27:50 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next)
		end = end->next;
	end->next = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*list = NULL;//creacion lista vacia
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nuevo_nodo2;

	nodo1 = ft_lstnew("hola");//cracion nodo1.
	nodo2 = ft_lstnew("como");//creacion nodo2.
	nuevo_nodo2 = ft_lstnew("estas?");//creacion del nodo final.

	ft_lstadd_front(&list, nodo1);//agregamos nodo a la lista.
	ft_lstadd_front(&list, nodo2);//agragamos nodo a la lista.
	ft_lstadd_back(&list, nuevo_nodo2);//agregamos nodo al final de la lista

	printf("%s\n",(char *)ft_lstlast(list)->content);//printamos final de lista
	return (0);
}*/
/*esta funcion lo que hace es que repmplaza el ultimo nodo por 
uno que nosotros asignemos si queremos que el nodo 1 sea el ultimo 
esta funcion lo hace*/
