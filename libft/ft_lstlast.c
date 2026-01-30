/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:53:10 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 17:27:57 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	if (!lst)
		return (NULL);
	list = lst;
	while (list->next)
		list = list->next;
	return (list);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*list = NULL;//creacion de la lista vacia.
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;

	nodo1 = ft_lstnew("hola");//creacion nodo 1.
	nodo2 = ft_lstnew("hello");//creacion nodo 2.
	nodo3 = ft_lstnew("bonjour");//creacion nodo 3.

	ft_lstadd_front(&list, nodo3);//agregar nodo 3 sera ultimo.
	ft_lstadd_front(&list, nodo2);//agregar nodo 2 sera segundo.
	ft_lstadd_front(&list, nodo1);//agregar modo 1 sera el primero.

	printf("%s\n", (char *)ft_lstlast(list)->content);//impresion ultimo nodo.

	return (0);
}*/
/*esta funcion retorna el ultimo nodo de la lista nos aseguramos
que la lista exista si no que retorne NULL, luego asignamos el valor
de lst a una nueva variable y decimos que mietras tenga un next
va a seguir hasta que ya no tenga un next o llegue al NULL y retorne
el nodo final*/