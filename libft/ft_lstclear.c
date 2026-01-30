/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:14:08 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:04 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	if (!lst || !del)
		return ;
	clear = *lst;
	while (clear)
	{
		clear = clear->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
	*lst = NULL;
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	t_list	*list = NULL;//cracion lista vacia
	t_list	*nodo1;
	t_list	*nodo2;
	
	nodo1 = ft_lstnew(ft_strdup("hello"));//cracion nodo1
	nodo2 = ft_lstnew(ft_strdup("hola"));//creacion nodo2

	ft_lstadd_front(&list, nodo1);//agregar 1er nodo a lista
	ft_lstadd_back(&list, nodo2);//agregar ultimo nodo a lista

	printf("%s\n", (char *)nodo1->content);//print contenido nodo1
	printf("%s\n\n", (char *)nodo2->content);//print contenido nodo2

	ft_lstclear(&list, free);//liberar tanto contenido como nodos
	if (list == NULL)//condicion para saber si la lista esta vacia
		printf("lista vacia\n");
	return (0);
}*/
/*esta funcion lo que hace es liberar toda las lista, asi que vamos a 
iterar y liberar nodo a nodo hasta que lleguemos a NULL, hacemos uso de la 
funcion ft_lstdelone e iteramos con ella hasta que lliberemos hasta el
ultimo nodo*/