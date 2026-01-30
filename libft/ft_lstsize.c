/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:20:22 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 17:28:01 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*nodo1;
	char	*str;
	t_list	*newnodo;
	t_list	*newnodo1;
	t_list	*newnodo2;
	 
	str = "mundo";
	newnodo = ft_lstnew((void *)str); //creacion nodo2
	newnodo1 = ft_lstnew("mundo"); //creacion nodo2
	newnodo2 = ft_lstnew("mundo"); //creacion nodo2
	nodo1 = ft_lstnew("hola"); //creacion  nodo1.
	
	ft_lstadd_front(&newnodo, newnodo1); //agregamos nodo2 a la lista
	ft_lstadd_front(&newnodo1, newnodo2); //agregamos nodo2 a la lista
	ft_lstadd_front(&newnodo2, nodo1); //agregamos nodo2 a la lista
	printf("%d\n", ft_lstsize(newnodo));//printamos el size de la lista
	
	return (0);
}*/
/*medimos el tamano de la lista que tenemos es como un strlen
pero con listas, en el main usamos la funcion de creacion de nodo 
y la de agregar nodos para asi tener un size el cual medir, pero claro 
empezamos el conteo desde el nodo 2 ya que ahhora es el nodo1 por el 
funcionammiento de ft_lstadd_front*/
