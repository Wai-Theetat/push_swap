/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdharmar <tdharmar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:27:51 by tdharmar          #+#    #+#             */
/*   Updated: 2025/09/23 15:37:49 by tdharmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_swap
{
	t_list	*stack_a;
	t_list	*stack_b;

	size_t	a_size;
	size_t	b_size;

}			t_swap;



#endif




/*
When 3 random number

#Case1
A B
1		
2
3

#Case2	sa		ra
A B		A B		A B
1		3		1
3		1		2
2		2		3

#Case3	sa
A B		A B
2		1
1		2
3		3

#Case 4 rra
A B		A B
2		1
3		2
1		3

#Case 5 ra
A B		A B
3		1
1		2
2		3

#Case 6 sa		rra
A B		A B		A B
3		2		1
2		3		2
1		1		3

*/