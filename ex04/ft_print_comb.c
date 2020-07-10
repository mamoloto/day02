      /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoloto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:21:14 by mamoloto          #+#    #+#             */
/*   Updated: 2020/07/10 10:56:23 by mamoloto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';

    while (a <= '9')
    {
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b, c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if(a == '7' && b =='8' c =='9')
					{
						break;
					}

					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++';
	}

}
		   


