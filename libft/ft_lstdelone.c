/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:44:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:25 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*nodofree;

	if (!lst || !del)
		return ;
	nodofree = lst;
	del(nodofree->content);
	free(nodofree);
}
/*#include <stdio.h>
#include <string.h>
int	 main(void)
{
	t_list	*list = NULL;
	t_list	*nodo1;
	t_list	*nodo2;

	nodo1 = ft_lstnew(ft_strdup("hola"));//creacion del nodo1 con memoria.
	nodo2 = ft_lstnew(ft_strdup("buenasss"));//creacion del nodo2 con memoria.

	ft_lstadd_front(&list, nodo1);//ponemos nodo1 al principio.
	ft_lstadd_back(&list, nodo2);//ponemos nod2 al final.

	printf("%s\n", (char *)nodo1->content);//printamos contenido nodo1.
	printf("%s\n\n", (char *)ft_lstlast(list)->content);//printamos nodo2.

	list = list->next;//desconectamos nodo1 para liberarlo list apunta nodo2
	
	ft_lstdelone(nodo1, free);//liberamos nodo1

	printf("%s\n\n", (char *)ft_lstlast(list)->content);//printamos untimo nodo
	printf("%d\n\n", ft_lstsize(list));//printamois size de lista
	return (0);
}*/
/*esta funcion libera el contenido del nodo y al nodo en si por eso se llama
llama a la funcion del y le decimos que libere el contenido del nodo 
y luego hacemos free para liberar al nodo, pero si el contenido del nodo no 
esta reservado dinamicamente ya sea con malloc, calloc o strdup dara un 
error a la hora de la compilacion ya que no hay nada que libera, por que la 
funcion ft_lstnew crea memoria para el nodo en la estructura, no crea memoria 
para el contenido del nodo, por eso en el main tuve que implementar un strdup,
para mi por que era lo mas facil, pero se puedo con los otros mencionados, una
vez el contenido del nodo tiene una str con memoria reservada ya podemos 
hacer uso de la funcion ya que vamos a liberar tando el contenido del nodo como 
el nodo en si, esto fue lo que yo entendi, claro paso importante es desconectar 
al nodo antes de linerarlo ya que una vez liberado no se puedo volver a usar por
 eso decimos que lst =lst->next, que la lista apunte al otro nodo asi podremos 
 liberarlo correctamente, peeeeero no libera el siguiente nodo.*/