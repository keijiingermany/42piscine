/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:20:43 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 18:58:17 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_uppercase(char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch -= 32;
}

void	to_lowercase(char *ch)
{
	if (*ch >= 'A' && *ch <= 'Z')
		*ch += 32;
}

int	is_alphanumeric(char ch)
{
	if ((ch >= '0' && ch <= '9'))
		return (1);
	if ((ch >= 'A' && ch <= 'Z'))
		return (1);
	if ((ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		newword;

	ptr = str;
	newword = 1;
	while (*ptr)
	{
		if (newword)
		{
			to_uppercase(ptr);
			newword = 0;
		}
		else
		{
			to_lowercase(ptr);
		}
		if (!is_alphanumeric(*ptr))
		{
			newword = 1;
		}
		ptr++;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char str1[] = "salut, comment tu vas ?"
	" 42mots quarante-deux; cinquante+et+un";
	char str2[] = "hello WORLD! how ARE you?";
	char str3[] = "123abc DEF";
	char str4[] = "";

	printf("Original: salut, comment tu vas ?"
	" 42mots quarante-deux; cinquante+et+un\n");
	printf("Capitalized: %s\n\n", ft_strcapitalize(str1));
	printf("Original: hello WORLD! how ARE you?\n");
	printf("Capitalized: %s\n\n", ft_strcapitalize(str2));
	printf("Original: 123abc DEF\n");
	printf("Capitalized: %s\n\n", ft_strcapitalize(str3));
	printf("Original: \n");
	printf("Capitalized: %s\n", ft_strcapitalize(str4));

	return (0);
} */
