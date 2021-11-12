#include"libft.h"
#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *list = malloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}

typedef struct
{
	char *name;
	int	age;
} Person;

void	append(t_list  **lst, int data)
{
	t_list		*tmp;
	t_list		*tmp2;
	int			*ptrd;

	ptrd = malloc(sizeof(int));
	*ptrd = data;
	tmp  = ft_lstnew(ptrd);
	if (*lst == NULL)
		*lst = tmp;
	else
	{
		tmp2 = *lst;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
}

int 	main(void)
{
	t_list		*lst = NULL;
	append(&lst, 11);
	append(&lst, 24);
	append(&lst, 34);
	t_list *l = lst;
	while (l)
	{
		printf("%d ", *(int *)l->content);
		l = l->next;
	}
	printf("\n");
	return (0);
}