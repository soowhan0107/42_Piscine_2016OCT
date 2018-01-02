/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_space_trimmer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:00:54 by sopark            #+#    #+#             */
/*   Updated: 2016/11/08 22:18:03 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char    *end_space_trimmer(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        str[i] = '\0';
        i--;
    }
    return (str);
}