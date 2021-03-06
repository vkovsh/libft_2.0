/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkovsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:43:45 by vkovsh            #+#    #+#             */
/*   Updated: 2018/03/15 14:44:15 by vkovsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	is_type(char k)
{
	if (k == s || k == S || k == p || k == d ||
		k == D || k == i || k == o || k == O ||
		k == u || k == U || k == x || k == X ||
		k == c || k == C || k == T || k == b ||
		k == PERCENT || k == r || k == n)
		return (TRUE);
	return (FALSE);
}
