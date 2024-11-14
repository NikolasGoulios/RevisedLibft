/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:48 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/14 14:17:33 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdbool.h>

/**
 * @brief A structure representing a node in a linked list.
 * 
 * A singly linked list node with a pointer to some data (`content`) and
 * a pointer to the next node (`next`).
 * 
 * - `content`: Points to the node's data. It can point to any type of data.
 * - `next`: Points to the next node in the list. NULL if it's the last node.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

/**
 * @brief Adds a new element to the end of a linked list.
 * 
 * Adds the new element `new` to the end of the list pointed to by `lst`.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param new The new element to add to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Adds a new element to the front of a linked list.
 * 
 * Adds the new element `new` to the front of the list pointed to by `lst`.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param new The new element to add to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Clears the entire linked list and frees its memory.
 * 
 * Deletes and frees all elements in the list `lst` using the function `del`
 * to free the content of each element.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param del A function to free the content of each element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Deletes a single element from a linked list.
 * 
 * Deletes and frees a single element from the list using the function `del`
 * to free the content of the element.
 * 
 * @param lst The element to delete.
 * @param del A function to free the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Iterates through a linked list and applies a function to each element.
 * 
 * Goes through each element in the list and applies the function `f` to the
 * content of each element.
 * 
 * @param lst A pointer to the first element of the list.
 * @param f The function to apply to each element's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Returns the size of a linked list.
 * 
 * Counts and returns the number of elements in the list `lst`.
 * 
 * @param lst A pointer to the first element of the list.
 * @return The number of elements in the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last element of a linked list.
 * 
 * Returns the last element in the list `lst`.
 * 
 * @param lst A pointer to the first element of the list.
 * @return A pointer to the last element of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Creates a new list by applying a function to each element.
 * 
 * Applies the function `f` to each element of the list `lst` and creates a new
 * list. If allocation fails, uses `del` to free memory.
 * 
 * @param lst Pointer to the first element of the list.
 * @param f Function to apply to each element's content.
 * @param del Function to free content in case of error.
 * @return Pointer to the new list, or NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Creates a new linked list element.
 * 
 * Allocates and returns a new linked list element, initializing `content` with
 * the passed value.
 * 
 * @param content The content to add to the new element.
 * @return Pointer to the new element, or NULL if allocation fails.
 */
t_list	*ft_lstnew(void *content);

#endif