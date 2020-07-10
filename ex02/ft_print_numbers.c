/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoloto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:39:59 by mamoloto          #+#    #+#             */
/*   Updated: 2020/07/09 16:55:41 by mamoloto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char m)
{
	write(1, &m, 1);
}

void ft_print_reverse_alphabet(void)
{
	char a;
	char t;
		a = '0';
		t = '9';
		while (a<=t)
		{
			ft_putchar(a);
			a--;
		}
}
int main()
{ ft_print_reverse_alphabet();
	return (0);
}


