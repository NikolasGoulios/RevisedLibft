//-------ATOI------//
/*int main()
{
	printf("%d\n", ft_atoi("21474836470"));
	printf("%d", atoi("21474836470"));

}*/

//------Bzero------//
/*int main()
{
	char n[21] = "WTF IS THIS, A JOKE?";
	printf("Before Bzero: %s\n", n);
	ft_bzero(n, 10);
	printf("After Bzero: %s\n", n);
	bzero(n, 2);
	printf("After the OG Bzero: %s\n", n);
	return 0;
}*/

//------Calloc------//
/*int main() 
{
    
    size_t num_elements = 5;
    size_t element_size = sizeof(int); 

   
    int *arr = (int *)ft_calloc(num_elements, element_size);

    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

   
    printf("Allocated array:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

   
    free(arr);

    return 0; 
}*/

//------IsAllNum------//
/*int main()
{
    int index = 0;
    while (index <= 48)
    {
    	//int d = 48;
    	if (ft_isalnum(index) == 0)
    	{
    	    printf("%i", ft_isalnum(index));
    	}
    	else
    	{
    	    printf("%i", ft_isalnum(index));
    	}
    	
    }
    return 0;
}*/

//------IsAlpha------//
/*int main()
{
	int cha = 'f' ;
	if (ft_isalpha(cha) == 0)
	{
	    printf("the input is NOT Alphabetical: %i", ft_isalpha(cha));
	}
	else
	{
	    printf("the input is Alphabetical: %i", ft_isalpha(cha));
	}
	printf("%i", isalpha(cha));
}*/

//------IsAscii------//
/*int main()
{
	int h = 100;
	if (ft_isascii(h) == 1)
	{
		printf("it is Ascii: %i", ft_isascii(h));
	}
	else 
		printf("its NOT: %i", ft_isascii(h));
	printf("og says: %i", isascii(h));
}*/

//------IsDigit------//
/*int main()
{
	int d = 48;
	if (ft_isdigit(d) == 0)
	{
	    printf("the input is NOT digit: %i", ft_isdigit(d));
	}
	else
	{
	    printf("the input is digit: %i", ft_isdigit(d));
	}
	printf("%i", isdigit(d));
}*/

//------IsPrint------//
/*int main()
{
	int h = 38;
	if (ft_isprint(h) == 1)
	{
		printf("it is Printable: %i", ft_isprint(h));
	}
	else
		printf("its NOT: %i", ft_isprint(h));
	printf("og says: %i", isprint(h));
}*/

//------MemChr------//
/*int main()
{
	const char str[] = "another day, another slay";
	const char finder = 'd';

	char *ret;

	ret = ft_memchr(str, finder, 25);
	printf("after search : %c is %s", finder, ret);
}*/

//------MemCmp------//
/*int main()
{
   char str1[15] = "memcmp";
   char str2[15] = "memcmp";
   int ret;


   ret = ft_memcmp(str1, str2, 3);


   printf("%d", ret);
   return (0);
}*/

//----Memcpy----//
/*int main()
{
   char s[] = "Another day, another slay";
   char d[26];


   ft_memcpy(d, s, sizeof(char) * 26);
   printf("d: %s\n", d);
   return 0;
}
*/

//---MemMove---//
/*int main()
{
    char str1[15] = "memmmove";
    char str2[15];
    char *ret;

    ret = ft_memmove(str2, str1, 10);

    printf("%s", ret);
    return (0);

}*/

//---MemSet---//
/*
int main(void)
{
   char buffer[] = "Another day, Another Slay";
   printf( "Before: %s\n", buffer );
   ft_memset( buffer, '#', 5 );
   printf( "After:  %s\n", buffer );
   
}*/

//---StrJoin---//
/*
int main()
{
    const char *str1 = "Another day,";
    const char *str2 = " Another slay.";

    char *new = ft_strjoin(str1, str2);

   if (new != NULL) 
   {
        printf("Joined String: %s\n", new);
        free(new); 
   }

    return 0;
}*/

//---StrlCat---//
/*
int main()
{
	char here[] = "Another day,";
	char there[] = "Another slay.";
	size_t res;
	
	res = ft_strlcat(there, here, 50);
	printf("the new lenght of the string is: %zu\n", res);
	printf("the new string is: %s\n", there);
	return (0);
}*/

//--- StrlCpy---//
/*
int main()
{
    char here[] = "Another day, another slay";
    char there[20];

    size_t copied_len = ft_strlcpy(there, here, 20);

    printf("Copied string: %s\n", there);
    printf("Length of the copied string: %zu\n", copied_len);

    return (0);
}*/

//---Strlen---//
/*
int main()
{
    char *n = "nikossdfrihffrugierigerigiergiegriugriuguerugeriugeurgiue3rgiuerg223543iuehriugeirugheurhgiuerhgiuerhgi543uehrguhkjzdkjfbirguaheghekrggugiehurwer25ehiuhr             ";
    printf("the len is : %zu", ft_strlen(n));
    return 0;
}
*/

//--- SubStr---//
/*
main() 
{
    char *original_string = "Another day, another slay";
    unsigned int start_index = 13; 
    size_t substring_length = 13; 

    char *substring = ft_substr(original_string, start_index, substring_length);
    
    if (substring != NULL) 
    {
        printf("Original String: %s\n", original_string);
        printf("Substring: %s\n", substring);
        free(substring); 
    } 
    else 
         printf("Substring creation failed.\n");

    return 0;
}*/

//---ToUpper---//
/*
int main()
{
    int a;
    a = 'h';
    printf("from %c becomes: %c", a, ft_toupper(a));
    return 0;
}
*/

//---Trim---//
/*int main()
{
	char const *string = "hjhjhjlkdMy Name is Nikolaskdlgj";
	char const *set = "hjlkdg";
	
	printf("s1 : %s \n", string);
    printf("set : %s \n", set);
	printf("the ne wstr is: %s\n", ft_strtrim(string, set));
	return 0;
}*/

//---Split---//

/*c ft_split.c ft_substr.c ft_strlen.c ft_strlcpy.c ft_memcpy.c ft_strdup.c 
int main()
{
	char const *str = "Another-Day-Another-Slay";
    char        **result1 = ft_split(str, '-');
    printf("str : %s \n split : '-' \n", str);
    if (result1 == NULL)
        printf("Allocation error\n");
    while (*result1)
    {
        printf("%s \n", *result1);
        free(*result1);
        result1++;
    }
    free(*result1);
}*/

/*------ft_putchar_fd------/

#include<fcntl.h>
int    main()
{
    int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // O_CREAT : create files if not existing, O_TRUNC : clean, 0644 : owner can read and write and other only read
    if (fd == -1)
        return 0;
    char c = 'A';
    ft_putchar_fd(c, fd);
    close (fd);
    return 0;
}*\

/*-----ft_putbnr_fd-----/

#include <fcntl.h>
#include <stdio.h>
int    main(void)
{
    int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return 0;
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(2147483647, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-12345, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(0, fd);
    close (fd);
    return 0;
}*/

/*------LSTNEW-----/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int data = 42;

    t_list *node = ft_lstnew(&data);
    if (node == NULL) {
        printf("Failed to create a new node.\n");
        return 1;
    }
    printf("Content of the newly created node: %d\n", *(int*)(node->content));
    free(node);
    return 0;
}*/

//-----lstSize----//
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
    t_list *head = ft_lstnew("another");
    head->next = ft_lstnew("day");
    head->next->next = ft_lstnew("another");
    head->next->next->next = ft_lstnew("slay");

    int size;
    size = ft_lstsize(head);

    printf("Size of the linked list: %d\n", size);
    while (head) 
    {
        t_list *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
*/

//----lstLast----//
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{

    t_list *head = ft_lstnew("another");
    head->next = ft_lstnew("day");
    head->next->next = ft_lstnew("another");
    head->next->next->next = ft_lstnew("slay");

    
    t_list *last;
    last = ft_lstlast(head);

    if (last) 
    {
        printf("Last element of the linked list: %s\n", (char *)(last->content));
    } 
    else 
    {
        printf("The linked list is empty.\n");
    }
    while (head) 
    {
        t_list *tmp;
        tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
*/

//----Lstadd_Front----//
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
    t_list *head = ft_lstnew("Another slay");

    printf("Initial linked list:\n");
    printf("%s -> ", (char *)(head->content)); 
    
    ft_lstadd_front(&head, ft_lstnew("another day"));

    printf("%s -> ", (char *)(head->content));
    printf("%s\n", (char *)(head->next->content));
    while (head)
    {}
        t_list *tmp = head;
        head = head->next;
        free(tmp);
    }
    return 0; 
}
*/
//----LstAdd_back----//
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() 
{
    t_list *head = NULL;

    printf("Adding nodes to the back of the linked list:\n");
    ft_lstadd_back(&head, ft_lstnew("another"));
    ft_lstadd_back(&head, ft_lstnew("day"));
    ft_lstadd_back(&head, ft_lstnew("another"));
    ft_lstadd_back(&head, ft_lstnew("slay"));

    printf("Linked list after adding nodes to the back:\n");
    t_list *tmp = head;
    while (tmp) 
    {
        printf("%s -> ", (char *)(tmp->content));
        tmp = tmp->next;
    }
    printf("\n");
    while (head) 
    {
        t_list *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
*/

//---LstDelOne---//

/*#include <stdio.h>
#include <stdlib.h>


void print_node_content(void *content) 
{
    printf("Content of the node: %s\n", (char *)content);
}

int main() 
{
    
    t_list *head = ft_lstnew("Hello");
    head->next = ft_lstnew("world");
    head->next->next = ft_lstnew("!");

    
    printf("Linked list before deleting a node:\n");
    t_list *tmp = head;
    while (tmp) 
    {
        print_node_content(tmp->content);
        tmp = tmp->next;
    }

    printf("\nDeleting the second node from the linked list...\n");
    t_list *node_to_delete = head->next;
    ft_lstdelone(node_to_delete, &free);

    
    printf("\nLinked list after deleting a node:\n");
    tmp = head;
    while (tmp) 
    {
        print_node_content(tmp->content);
        tmp = tmp->next;
    }
    while (head) {
        t_list *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}*/

//----LstClear----//
/*#include <stdio.h>
#include <stdlib.h>

void print_node_content(void *content) {
    printf("%s -> ", (char *)content);
}

int main() 
{
    t_list *head = ft_lstnew("Hello");
    head->next = ft_lstnew("world");
    head->next->next = ft_lstnew("!");

    printf("Linked list before clearing:\n");
    t_list *tmp = head;
    while (tmp) {
        print_node_content(tmp->content);
        tmp = tmp->next;
    }
    printf("\n");

    
    printf("\nClearing the linked list...\n");
    ft_lstclear(&head, &free);

    printf("\nLinked list after clearing:\n");
    if (head == NULL) {
        printf("The list is empty.\n");
    } else {
        printf("The list is not empty.\n");
    }

    return 0; 
}
*/
