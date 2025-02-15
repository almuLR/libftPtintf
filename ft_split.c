/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:55:59 by almudenalop       #+#    #+#             */
/*   Updated: 2025/02/09 11:18:56 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_words(char const *s, char c)
{
	int	n;
	int	w;
	int	prev;

	n = 0;
	w = 0;
	prev = 1;
	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			prev = 1;
		}
		else if (s[n] != c && prev)
		{
			w++;
			prev = 0;
		}
		n++;
	}
	return (w);
}

static int	ft_get_lenght_word(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i + j] != c && s[i + j] != '\0')
		j++;
	return (j);
}

static int	free_split(char **aux, int n)
{
	if (!aux[n])
	{
		while (n > 0)
			free(aux[--n]);
		free(aux);
		return (1);
	}
	return (0);
}

static char	**ft_allocate_and_split(char const *s, char c, int w)
{
	char	**aux;
	int		i;
	int		n;
	int		j;

	aux = malloc((w + 1) * sizeof(char *));
	if (!aux)
		return (NULL);
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c && s[i] != '\0')
		{
			j = ft_get_lenght_word(s, i, c);
			aux[n] = ft_substr (s, i, j);
			if (free_split (aux, n++))
				return (NULL);
			i = i + j;
		}
	}
	aux[n] = NULL;
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		w;

	if (!s)
		return (NULL);
	w = ft_n_words(s, c);
	aux = ft_allocate_and_split(s, c, w);
	return (aux);
}

/*#include <stdio.h>
int main(){
	printf("%d\n", ft_n_words(" hola que tal ", ' '));
	printf("%d\n", ft_n_words("a----hola--que-tal-a", '-'));
		printf("%d\n", ft_n_words("----", '-'));

	return (0);

}*/