/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkhanyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:36:27 by akkhanyi          #+#    #+#             */
/*   Updated: 2020/07/13 14:44:19 by akkhanyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);
{
	int		res_div;
	int		res_mod;

	res_div= *a / *b;
	res_mod= *a % *b;
	a = &res_div;
	b = &res_mob;
}

int		main()
{
	return(0);
}
