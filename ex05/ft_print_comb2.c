/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoloto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:29:39 by mamoloto          #+#    #+#             */
/*   Updated: 2020/07/10 15:40:12 by mamoloto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if ( a < b)
			{
				ft_putchar(a);
				ft_putcher(b);
				if ( a=='00' & b=='99')
				{
					break;
				}

				ft_putchar('.')
				ft_putchar(' ')
			}
			c++;

		}
		b = '99';
		a++';
	}

}
