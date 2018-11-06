/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:29:51 by andrewrze         #+#    #+#             */
/*   Updated: 2018/10/31 01:32:28 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  get_divider(int n)
{
    int c;

    c = 1;
    while ((n = n / 10) != 0)
        c *= 10;
    return (c);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     divider;
    int     tmp;
    int     c;

    divider = (n < 0) ? 2 : 1;
    tmp = n;
    while ((tmp = tmp / 10) != 0)
        divider++;
    str = (char*)malloc(sizeof(char) * (divider + 1));
    tmp = 0;
    if (n < 0)
        str[0] = '-';
    c = (n < 0) ? 1 : 0;
    divider = (n < 0) ? (get_divider(n) * -1) : get_divider(n);
    while (divider > 1 || divider < -1)
    {
        str[c] = n / divider + 48;
        n %= divider;
        divider /= 10;
        c++;
    }
    str[c] = (n < 0) ? (n * -1 + 48) : n + 48;
    str[c + 1] = '\0';
    return (str);
}