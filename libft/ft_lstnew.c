/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:16:20 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:37 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnodo;

	newnodo = malloc(sizeof(t_list));
	if (!newnodo)
		return (NULL);
	newnodo->content = content;
	newnodo->next = NULL;
	return (newnodo);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "hola buenass";
	t_list	*func;

	printf("%s\n" , str);//lo que va a tener el nodo.
	func = ft_lstnew(&str);
	printf("%p\n", func->content);//direcion de memoria nodo.
	printf("%s\n", (char *)func->content);lo que tiene ya nodo.
	printf("%p\n", (void *)func->next);//return NULL.
	free(func);
	return (0);
}*/

/*explicacion de una lista enlazada, las listas enlazadas 
son muy parecidas a los array, con la diferencia de que las listas
enlazadas contienen la ubicacion del siguiente nodo en cambio un 
array los tiene de forma continua, el nodo puede estar disperso no
importa ya que cada nodo carga con la ubicacion del siguiente, ejemplo
de como utilizar este operador "->" 
t_list nodo;
t_list *ptr;
nodo.content     // estructura directa en la misma  funcion.
ptr->content     // puntero a estructura.
en estos casos como trabajamos con malloc y son punteros asi que 
se usa el operador "->" que apunta al siguiente nodo o al que querramos
si tuvieramos la esttructura en el codigo se utiliza con el otro ejemplo.
Ahora a explicar el codigo, creamos una variable del tipo de lista "t_list",
asiganamos cualquien nombre con puntero ya que vamos a reservar memoria,
hacemos el malloc con el tamano de la "t_list" y lo blindamos por si falla 
la memoria, despues decimos lo siguiente, el newnode apunta a la direcion del
dato que nos pasan por parametro y guarda esa direcion, luego newnodo apunta y
guarda la direcion de next que va hacer NULL.
*/