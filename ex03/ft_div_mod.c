/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkhanyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:25:43 by akkhanyi          #+#    #+#             */
/*   Updated: 2020/07/13 14:34:10 by akkhanyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		res_div;
	int		res_mod;

	res_div = a/b;
	div &res_div;
	res_mod= a%b;
	mod= &res_mod;
}

int 	main()
{
	return(0);
}
