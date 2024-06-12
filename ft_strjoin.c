/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etamazya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:56:11 by etamazya          #+#    #+#             */
/*   Updated: 2024/02/06 18:09:02 by etamazya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../headers/push_swap.h"

char	**ft_strjoin(char **s1, char **s2)
{
	char	**res;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(*s1) + ft_strlen(*s2);
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		*res[i] = *s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		*res[i++] = *s2[j++];
	*res[i] = '\0';
	return (res);
}
