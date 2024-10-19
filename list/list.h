/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:48 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:04:01 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

/**
 * @brief A structure representing a node in a linked list.
 * 
 * This structure is used to create a singly linked list where each node contains
 * a pointer to some data (content) and a pointer to the next node in the list.
 */
typedef struct s_list
{
    /**
     * @brief A pointer to the content of the node.
     * 
     * This can point to any type of data and is often cast to the appropriate type
     * when used.
     */
	void			*content;
	
    /**
     * @brief A pointer to the next node in the list.
     * 
     * This points to the next node in the linked list. If this is the last node,
     * it will be NULL.
     */
	struct s_list	*next;
}	t_list;

/**
 * @brief Adds a new element to the end of a linked list.
 * 
 * This function adds the new element `new` to the end of the list pointed to by `lst`.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param new The new element to add to the list.
 */
void ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Adds a new element to the front of a linked list.
 * 
 * This function adds the new element `new` to the beginning of the list pointed to by `lst`.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param new The new element to add to the list.
 */
void ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Clears the entire linked list and frees its memory.
 * 
 * This function deletes and frees the memory of all elements in the list pointed to by `lst`
 * using the function `del` to free the content of each element.
 * 
 * @param lst The address of a pointer to the first element of the list.
 * @param del A function to free the content of each element.
 */
void ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Deletes a single element from a linked list.
 * 
 * This function deletes and frees a single element from the list using the function `del` to
 * free the content of the element.
 * 
 * @param lst The element to delete.
 * @param del A function to free the content of the element.
 */
void ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Iterates through a linked list and applies a function to each element.
 * 
 * This function goes through each element in the list and applies the function `f` to the
 * content of each element.
 * 
 * @param lst A pointer to the first element of the list.
 * @param f The function to apply to each element's content.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Returns the size of a linked list.
 * 
 * This function counts and returns the number of elements in the linked list pointed to by `lst`.
 * 
 * @param lst A pointer to the first element of the list.
 * @return The number of elements in the list.
 */
int ft_lstsize(t_list *lst);

/**
 * @brief Returns the last element of a linked list.
 * 
 * This function returns the last element in the list pointed to by `lst`.
 * 
 * @param lst A pointer to the first element of the list.
 * @return A pointer to the last element of the list.
 */
t_list *ft_lstlast(t_list *lst);

/**
 * @brief Creates a new list by applying a function to each element of an existing list.
 * 
 * This function iterates over the list `lst`, applies the function `f` to the content of each element,
 * and creates a new list. If an allocation fails, the function `del` is used to free the memory.
 * 
 * @param lst A pointer to the first element of the list.
 * @param f The function to apply to each element's content.
 * @param del A function to free the content in case of an error.
 * @return A pointer to the new list, or NULL if an allocation fails.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Creates a new linked list element.
 * 
 * This function allocates and returns a new linked list element. The `content` pointer
 * is initialized with the value passed as an argument.
 * 
 * @param content The content to add to the new element.
 * @return A pointer to the new element, or NULL if the allocation fails.
 */
t_list *ft_lstnew(void *content);

#endif