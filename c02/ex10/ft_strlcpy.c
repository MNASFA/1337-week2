/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:22:02 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/07/01 10:06:38 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
	{
		dest[size] = '\0';
		return (len);
	}
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int main(){
	char src[] = "hello";

	int size = 0;
	char dest[size];
	int len = ft_strlcpy(dest,src,size);
	printf("%d\n" , len);
	printf("%s\n" , dest);
	//int len2 = strlcpy(dest , src ,size);
	//printf("%d\n" , len2);
	//printf("%s\n" , dest);
}
