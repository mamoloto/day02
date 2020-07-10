voiivoi/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoloto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:44:15 by mamoloto          #+#    #+#             */
/*   Updated: 2020/07/09 15:51:53 by mamoloto         ###   ########.fr       */
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

	a = 'z';
	t = 'a';
	while (a >= t)
	{
		ft_putchar(a);
		a--;
	}
}
 int main()
{
	ft_print_reverse_alphabet();
	return (0);
}


