#include <stdio.h>
#include "./includes/libft.h"

int main(void)
{
    // //for ft_ultimate()
	// int a;
	// int *ptr1;
	// int **ptr2;
	// int ***ptr3;
	// int ****ptr4;
	// int *****ptr5;
	// int ******ptr6;
	// int *******ptr7;
	// int ********ptr8;
	// int *********ptr9;
	
	// a = 100;
	// ptr1 = &a;
	// ptr2 = &ptr1;
	// ptr3 = &ptr2;
	// ptr4 = &ptr3;
	// ptr5 = &ptr4;
	// ptr6 = &ptr5;
	// ptr7 = &ptr6;
	// ptr8 = &ptr7;
	// ptr9 = &ptr8;
	// ft_ultimate_ft(ptr9);
	// printf("%d\n", a);

    // //for ft_swap
    // int tr = 1;
    // int fl = 0;

    // ft_swap(&tr, &fl);
    // printf("tr = %d , fl = %d\n", tr, fl);

    // //for ft_div_mod
    // int x = 0;
    // int y = 0;

    // int *pointer1 = &x;
    // int *pointer2 = &y;
    // ft_div_mod(42, 10, pointer1, pointer2);
	// printf("x = %d, y = %d\n", x, y);

	// //for ft_ultimate_div_mod
	// x = 42;
    // y = 10;

    // pointer1 = &x;
    // pointer2 = &y;
    // ft_ultimate_div_mod( pointer1, pointer2);
	// printf("x = %d, y = %d\n", x, y);

	// //for ft_putstr
	// ft_putstr("Hello");
	// ft_putchar('\n');

	// //for ft_rev_int_tab
	// int tab[] = {1, -2, 3, 4, -5, 6, 0};
    // ft_rev_int_tab(tab, 7);
    // for (int i = 0; i <= 6; i++)
    // {   
    //     printf("%d ", tab[i]);
    // }
    // printf("\n");

	//for ft_sort_int_tab
	int tab[] = {1, -2, 3, 4, -5, 6, 10, -56};
    ft_sort_int_tab(tab, 8);
    for (int i = 0; i <= 7; i++)
    {   
        printf("%d ", tab[i]);
    }
    printf("\n");

    return (0);
}