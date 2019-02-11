/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:13:44 by ztisnes           #+#    #+#             */
/*   Updated: 2019/02/11 12:50:36 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <inttypes.h>

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
extern	int				ft_add(int x, int y);
extern	int				ft_sub(int x, int y);
extern	int32_t			ft_divide(int32_t dividend, int32_t divisor);
extern	int				ft_mul(int x, int y);
extern	uint64_t		ft_factorial(uint64_t num);
extern	float			ft_addfloat(float[], float[]);
extern	int				ft_pow(int base, int power);
extern	double			ft_sqrt(float num);

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
	printf("ft_sqrt of 25 is: %f\n", ft_sqrt(25.25));

	char	str[] = "Hello my corrector, you are currently in the matrix assembly version"; //current string testing
	char	*upper = "abcdefghijklmnopqrstuvwxyz"; //ft_toupper
	char	*lower = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //ft_tolower
	char	test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		i = -1;
	int		j = -1;
	int		one = 0;
	int		fd = 0;
	char	*str_dup;
	char	empty[] = "";
	char	bby[] = "hell no baby boy bish";
	char	something[] = "no";
	uint64_t fact = 0;

	printf("ft_strdup test: \n");
	printf("initializing str_dup\n");
	str_dup = ft_strdup(empty);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));
	str_dup = ft_strdup(bby);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));
	str_dup = ft_strdup(something);
	printf("ft_strdup after being called (\"%s\") %d \n", str_dup, (int)ft_strlen(str_dup));

	printf("testing ft_cat: \n");
	fd = open("src/ft_hello.s", O_RDONLY);
	ft_cat(fd);
	one = ft_puts(upper);

	test_memset();
	printf("\n");
	test_bzero();
	printf("\n");

	printf("ft_strlen for \"abc\" is: %lu\n", ft_strlen(str)); //testing ft_strlen
	printf("OG strlen for \"abc\" is: %lu\n\n", strlen(str));

	printf("a = %d\n", ft_isalpha('a')); //1
	printf("z = %d\n", ft_isalpha('z')); //1
	printf("A = %d\n", ft_isalpha('A')); //1
	printf("Z = %d\n", ft_isalpha('Z')); //1
	printf("b = %d\n", ft_isalpha('b')); //1
	printf("y = %d\n\n", ft_isalpha('y')); //1

	printf("ASCII of 125: %d\n", ft_isalpha(125)); //0
	printf("ASCII of 50: %d\n", ft_isalpha(50)); //0
	printf("ASCII of 133: %d\n", ft_isalpha(133)); //0
	printf("ASCII of -1 (doesn't exist): %d\n", ft_isalpha(-1)); //0
	printf("%c0 (NULL): %d\n", 92, ft_isalpha('\0')); //0
	printf("'A' - 1: %d\n", ft_isalpha('A' - 1)); //0
	printf("whitespace: %d\n\n", ft_isalpha(' ')); //0

	printf("a = %d\n", ft_isalnum('a')); //1
	printf("z = %d\n", ft_isalnum('z')); //1
	printf("A = %d\n", ft_isalnum('A')); //1
	printf("Z = %d\n", ft_isalnum('Z')); //1
	printf("b = %d\n", ft_isalnum('b')); //1
	printf("y = %d\n", ft_isalnum('y')); //1
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

	printf("ft_isalnum for NULL: %d\n", ft_isalnum('\0')); //0
	printf("ft_isalnum for whitespace ' ': %d\n", ft_isalnum(' ')); //0
	printf("ft_isalnum for vertical tab: %d\n\n", ft_isalnum(0x0b)); //0
	printf("ft_isalnum for horizontal tab: %d\n", ft_isalnum(0x09)); //0
	printf("ft_isalnum for 'a': %d\n", ft_isalnum('a')); //1
	printf("ft_isalnum for 'c': %d\n", ft_isalnum('c')); //1
	printf("ft_isalnum for 'C': %d\n", ft_isalnum('C')); //1
	printf("ft_isalnum for 'M': %d\n", ft_isalnum('M')); //1
	printf("ft_isalnum for 'Z': %d\n", ft_isalnum('Z')); //1
	printf("ft_isalnum for 'e': %d\n", ft_isalnum('e')); //1
	printf("ft_isalnum for 'i': %d\n", ft_isalnum('i')); //1
	printf("ft_isalnum for 'd': %d\n", ft_isalnum('d')); //1
	printf("ft_isalnum for 'm': %d\n\n", ft_isalnum('m')); //1
	printf("ft_isalnum for '4': %d\n", ft_isalnum('4')); //1
	printf("ft_isalnum for '2': %d\n", ft_isalnum('2')); //1
	printf("ft_isalnum for '0': %d\n\n", ft_isalnum('0')); //1
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
	char copy[26];
	ft_memcpy(copy, upper, 26);
	printf("empty string copied over from *upper: %s\n", copy);
	ft_memcpy(copy, lower, 26);
	printf("empty string copied over from *lower : %s\n\n", copy);

	printf("testing ft_strcat: \n");
	char nick[42] = "Nick...";
	printf("%s", ft_strcat(nick, "is your... FATHER...\n\n"));

	printf("🚀\033[1;32mEND OF MAIN TESTING🚀\033[0m\n\n");

	printf("ft_add: %d\n", ft_add(42,42));
	printf("ft_add: %d\n", ft_add(5,5));
	printf("ft_add: %d\n", ft_add(-0,0));
	printf("ft_add: %d\n", ft_add(-0,-1));
	printf("ft_add: %d\n", ft_add(-25,42));
	printf("ft_add: %d\n\n", ft_add(125123545,-121546123));

	printf("ft_sub: %d\n", ft_sub(5,5));
	printf("ft_sub: %d\n", ft_sub(100,5));
	printf("ft_sub: %d\n", ft_sub(99,92));
	printf("ft_sub: %d\n", ft_sub(100,5));
	printf("ft_sub: %d\n", ft_sub(0,-0));
	printf("ft_sub: %d\n\n", ft_sub(1,1));

	printf("ft_divide: %d\n", ft_divide(25,25));
	printf("ft_divide: %d\n", ft_divide(250,25));
	printf("ft_divide: %d\n", ft_divide(1111111,10101));
	printf("ft_divide: %d\n", ft_divide(987654321,123456789));
	printf("ft_divide: %d\n", ft_divide(0,99999999));
	printf("ft_divide: %d\n\n", ft_divide(-121,10));

	printf("ft_mul: %d\n", ft_mul(5,5));
	printf("ft_mul: %d\n", ft_mul(10,1));
	printf("ft_mul: %d\n", ft_mul(5,-5));
	printf("ft_mul: %d\n", ft_mul(15,50));
	printf("ft_mul: %d\n", ft_mul(33,33));
	printf("ft_mul: %d\n\n", ft_mul(111,111));

	float result[] = {-29.750, 244.333, 887.29, 1.1E23};
	float y[] = {-2.25,  199.333, -8.29,  22.1E23};
	float x[] = {-29.750, 244.333, 887.29, 1.1E23;
	int sum = 0;
	ft_addfloat(result, y);
	while (sum < 4)
	{
		printf("ft_addfloat of %f and %f: %f\n", x[sum], y[sum], result[sum]);
		sum++;
	}

	while (fact <= 20)
	{
		printf("ft_factorial of %llu = %llu\n", fact, ft_factorial(fact));
		fact++;
	}

	//ft_sqrt(25); FIXME
	printf("🚀\033[1;32mEND OF BONUS TESTING🚀\033[0m\n\n");

	return (0);
}
