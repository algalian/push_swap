/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:34:51 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:34:52 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

/**
 * The function searches for the first occurrence of a character in a given memory block and returns a
 * pointer to that location.
 * 
 * @param s A pointer to the memory area to be searched.
 * @param c c is an integer representing the character to be searched for in the memory block.
 * @param n The parameter `n` in the function `ft_memchr` represents the number of bytes to be searched
 * in the memory block pointed to by `s`.
 * 
 * @return a pointer to the first occurrence of the character 'c' in the first 'n' bytes of the memory
 * area pointed to by 's'. If the character is not found, it returns NULL.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char		*char_s;
	char			b;

	b = c;
	char_s = (char *) s;
	i = 0;
	while (i < n)
	{
		if (char_s[i] == b)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
