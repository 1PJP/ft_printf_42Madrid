/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:37:21 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 17:27:55 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nodo;

	if (!lst || !f)
		return ;
	nodo = lst;
	while (nodo != NULL)
	{
		f(nodo->content);
		nodo = nodo->next ;
	}
}
/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void	print(void *content)
{
	printf("%s\n", (char *)content);//funcion aux para imprimir el cont.
}
int	main(void)
{
	t_list	*list = NULL;//creacion de la lista vacia
	t_list	*nodo1;
	t_list	*nodo2;

	nodo1 = ft_lstnew("hola");//creacion de nodo1.
	nodo2 = ft_lstnew("buenasss!");//creacion de nodo2.

	ft_lstadd_front(&list, nodo1);//poner de 1ro nodo1.
	ft_lstadd_back(&list, nodo2);//poner untimo nodo2.

	ft_lstiter(list, print);//llamar a la funcion para que realice la iter.

	return (0);
}*/
/*esta funcion lo que hace es iterar la funcion X que manda por 
paramatetro, en este caso hice una funcion muy sencilla de impresion
asi que cuando llamo a ft_lstiteri y le paso la funcion que hice
va a realizar una impresion iteradamente sin necesidad de imprimir 
manueal mente el contenido de cada nodo*/