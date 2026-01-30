/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:07:13 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:33 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnodo;
	t_list	*newcontent;

	if (!lst || !f)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnodo = ft_lstnew(newcontent);
		if (!newnodo)
		{
			if (del && newcontent)
				del(newcontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnodo);
		lst = lst->next;
	}
	return (newlist);
}
/*#include <stdio.h>
#include <string.h>
void	del(void *content)
{
	free(content);//funcion para usar del.
}
void	*auxdup(void *content)
{
	return ft_strdup((char *)content);//funcio para usar (f)
}
int	main(void)
{
	t_list	*list = NULL;//crear lista vacia
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*newlist;//crear nueva lista

	nodo1 = ft_lstnew(ft_strdup("hola"));//creacio nodo1
	nodo2 = ft_lstnew(ft_strdup("hello"));//creacio nodo2

	ft_lstadd_front(&list, nodo1);//poner en lista 1ro
	ft_lstadd_back(&list, nodo2);//poner en lista ultimo

	newlist = ft_lstmap(list, auxdup, del);//funcion map crear nueva lista
	
	printf("lista original = %d\n\n", ft_lstsize(list));//size lista orig.
	printf("lista nueva = %d\n", ft_lstsize(newlist));//size nueva lista

	return (0);
}*/
/*en esta funcion lo que tenemos que hacer es crear una nueva lista aplicando
cambios con la (*f)=funcion que nos pasan por parametros,eso quiere decir
que hacemos una replica del contenido origuinal pero con los cambios que 
querramos y la lista orgirinal no se toca, se mantiene y solo se aplican los 
cambios deseados a la nueva lista en este caso si la lista llega a fallar tiene 
que liberar todos los nodos creador de la nueva lista
para eso necesitamos crear una nueva lista, nuevos nodos y el contenido que 
modificaremos con "f" para pasarlo a los nuevos nodos */