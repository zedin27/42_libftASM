/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:13:44 by ztisnes           #+#    #+#             */
/*   Updated: 2018/07/30 08:30:15 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

extern	int				ft_hello(void);
extern	unsigned long	ft_strlen(const char *str);
extern	unsigned long	ft_bzero(void *s, size_t n);
extern	int				ft_puts(const char *str);
extern	int				ft_isalpha(int c);
extern	int				ft_isascii(int c);
extern	int				ft_isdigit(int c);
extern	int				ft_isprint(int c);
extern	unsigned		ft_toupper(int c);
extern	unsigned		ft_tolower(int c);
extern	unsigned		ft_isalnum(int c);
extern	void			*ft_memset(void *b, int c, size_t len);
extern	void 			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
extern	char			*ft_strdup(const char *s1);
extern	int				ft_cat(int fd);
extern	char			*ft_strcat(char *s1, const char *s2);

int		test_memset(void)
{
	char *ptr = NULL;
	int i = 42;
	int flag = 0;
	ptr = (char *)malloc(sizeof(char) * i);
	printf("ft_memset test with %d indices:\n", i);

	ft_memset(ptr, 0, i);
	while (--i >= 0)
	{
		if (ptr[i] == 0)
			printf("✅");
		else
		{
			printf("❌");
			flag++;
		}
	}
	printf("\n");
	return (flag);
}

int		test_bzero(void)
{
	char *ptr = NULL;
	int i = 42;
	int flag = 0;
	ptr = (char *)malloc(sizeof(char) * i);
	printf("ft_bzero test with %d indices:\n", i);

	ft_bzero(ptr, i);
	while (--i >= 0)
	{
		if (ptr[i] == 0)
			printf("✅");
		else
		{
			printf("❌");
			flag++;
		}
	}
	printf("\n");
	return (flag);
}

int		main(void)
{
	char str[3] = "abc"; //current string testing
	char *upper = "abcdefghijklmnopqrstuvwxyz"; //ft_toupper
	char *lower = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //ft_tolower
	char test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = -1;
	int j = -1;
	int one = 0;
	int	fd = 0;
	char *str_dup;
	char f[] = "";
	char s[] = "hell";
	char t[] = "no";

	printf("ft_strdup test: \n");
	printf("initializing str_dup\n");
	str_dup = ft_strdup(f);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));
	str_dup = ft_strdup(s);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));
	str_dup = ft_strdup(t);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));

	printf("testing ft_strcat: \n");
	char nick[42] = "Nick...";
	printf("%s", ft_strcat(nick, "is your father...\n"));


	printf("testing ft_cat: \n");
	fd = open("src/ft_hello.s", O_RDONLY);
	ft_cat(fd);
	one = ft_puts(upper);

	char copy[26];
	ft_memcpy(copy, upper, 26);
	printf("empty string copied over from *upper: %s\n\n", copy);
	ft_memcpy(copy, lower, 26);
	printf("empty string copied over from *lower : %s\n\n", copy);

	test_memset();
	printf("\n");
	test_bzero();
	printf("\n");

	printf("ft_strlen for \"abc\" is: %lu\n", ft_strlen(str)); //testing ft_strlen
	printf("OG strlen for \"abc\" is: %lu\n\n", strlen(str));

	printf("a = %d\n", ft_isalpha('a')); //0
	printf("z = %d\n", ft_isalpha('z')); //0
	printf("A = %d\n", ft_isalpha('A')); //0
	printf("Z = %d\n", ft_isalpha('Z')); //0
	printf("b = %d\n", ft_isalpha('b')); //0
	printf("y = %d\n\n", ft_isalpha('y')); //0

	printf("ASCII of 125: %d\n", ft_isalpha(125)); //1
	printf("ASCII of 50: %d\n", ft_isalpha(50)); //1
	printf("ASCII of 133: %d\n", ft_isalpha(133)); //1
	printf("ASCII of -1 (doesn't exist): %d\n", ft_isalpha(-1)); //1
	printf("%c0 (NULL): %d\n", 92, ft_isalpha('\0')); //1
	printf("whitespace: %d\n\n", ft_isalpha(' ')); //1

	printf("a = %d\n", ft_isalnum('a')); //0
	printf("z = %d\n", ft_isalnum('z')); //0
	printf("A = %d\n", ft_isalnum('A')); //0
	printf("Z = %d\n", ft_isalnum('Z')); //0
	printf("b = %d\n", ft_isalnum('b')); //0
	printf("y = %d\n", ft_isalnum('y')); //0
	printf("1 = %d\n", ft_isalnum('1')); //1
	printf("2 = %d\n", ft_isalnum('2')); //1
	printf("3 = %d\n", ft_isalnum('3')); //1
	printf("4 = %d\n", ft_isalnum('4')); //1
	printf("5 = %d\n", ft_isalnum('5')); //1
	printf("6 = %d\n", ft_isalnum('6')); //1
	printf("7 = %d\n", ft_isalnum('7')); //1
	printf("8 = %d\n", ft_isalnum('8')); //1
	printf("9 = %d\n\n", ft_isalnum('9')); //1

	printf("ASCII of 125: %d\n", ft_isalnum(125)); //1
	printf("ASCII of 50: %d\n", ft_isalnum(50)); //1
	printf("ASCII of 133: %d\n", ft_isalnum(133)); //1
	printf("ASCII of -1 (doesn't exist): %d\n", ft_isalnum(-1)); //1
	printf("%c0 (NULL): %d\n", 92, ft_isalnum('\0')); //1
	printf("whitespace: %d\n\n", ft_isalnum(' ')); //1

	printf("testing ft_isascii -11: %d\n", ft_isascii(-11)); //0
	printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	printf("testing ft_isascii 0: %d\n", ft_isascii(0)); //1
	printf("testing ft_isascii -0: %d\n", ft_isascii(-0)); //1
	printf("testing ft_isascii 120: %d\n", ft_isascii(120)); //1
	printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	printf("testing ft_isascii 'Z': %d\n\n", ft_isascii('Z')); //1

	printf("ft_isdigit 0?: %d\n", ft_isdigit('0')); //1
	printf("ft_isdigit 1?: %d\n", ft_isdigit('1')); //1
	printf("ft_isdigit 2?: %d\n", ft_isdigit('2')); //1
	printf("ft_isdigit 3?: %d\n", ft_isdigit('3')); //1
	printf("ft_isdigit 4?: %d\n", ft_isdigit('4')); //1
	printf("ft_isdigit 5?: %d\n", ft_isdigit('5')); //1
	printf("ft_isdigit 6?: %d\n", ft_isdigit('6')); //1
	printf("ft_isdigit 7?: %d\n", ft_isdigit('7')); //1
	printf("ft_isdigit 8?: %d\n", ft_isdigit('8')); //1
	printf("ft_isdigit 9?: %d\n", ft_isdigit('9')); //1

	printf("ft_isdigit whitespace?: %d\n", ft_isdigit(' ')); //0
	printf("ft_isdigit newline?: %d\n", ft_isdigit(10)); //0
	printf("ft_isdigit NULL?: %d\n\n", ft_isdigit(0)); //0

	printf("ft_isprint for 'c': %d\n",ft_isprint('c')); //1
	printf("ft_isprint for 'z': %d\n",ft_isprint('z')); //1
	printf("ft_isprint for 'e': %d\n",ft_isprint('e')); //1
	printf("ft_isprint for 'i': %d\n",ft_isprint('i')); //1
	printf("ft_isprint for 'D': %d\n",ft_isprint('D')); //1
	printf("ft_isprint for NULL: %d\n\n",ft_isprint('\0')); //0
	printf("ft_isprint for newline: %d\n\n",ft_isprint('\n')); //0
	printf("ft_isprint for vertical tab: %d\n\n",ft_isprint('\v')); //0
	printf("ft_isprint for del: %d\n\n",ft_isprint(0x7f)); //0
	printf("ft_isprint for horizontal tab: %d\n\n",ft_isprint('0x09')); //0

	while (upper[++i] != '\0')
		printf("uppercasing %c -> %c\n", upper[i], ft_toupper(upper[i]));
	printf("\n");
	while (lower[++j] != '\0')
		printf("lowercasing %c -> %c\n", lower[j], ft_tolower(lower[j]));

	printf("\n");
	printf("ft_isalnum for NULL: %d\n", ft_isalnum('\0'));
	printf("ft_isalnum for whitespace ' ': %d\n", ft_isalnum(' '));
	printf("ft_isalnum for vertical tab: %d\n\n", ft_isalnum(0x0b));
	printf("ft_isalnum for horizontal tab: %d\n", ft_isalnum(0x09));
	printf("ft_isalnum for 'a': %d\n", ft_isalnum('a'));
	printf("ft_isalnum for 'c': %d\n", ft_isalnum('c'));
	printf("ft_isalnum for 'C': %d\n", ft_isalnum('C'));
	printf("ft_isalnum for 'M': %d\n", ft_isalnum('M'));
	printf("ft_isalnum for 'Z': %d\n", ft_isalnum('Z'));
	printf("ft_isalnum for 'e': %d\n", ft_isalnum('e'));
	printf("ft_isalnum for 'i': %d\n", ft_isalnum('i'));
	printf("ft_isalnum for 'd': %d\n", ft_isalnum('d'));
	printf("ft_isalnum for 'm': %d\n\n", ft_isalnum('m'));
	printf("ft_isalnum for '4': %d\n", ft_isalnum('4'));
	printf("ft_isalnum for '2': %d\n", ft_isalnum('2'));
	printf("ft_isalnum for '0': %d\n\n", ft_isalnum('0'));

	printf("END OF TESTING\n");

	return (0);
}
