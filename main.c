#include <unistd.h>
#include <stdio.h>
#include <string.h>

extern	int			ft_hello(void);
extern	unsigned	ft_strlen(const char *str);
extern	unsigned	ft_bzero(void *s, size_t n);
extern	void		ft_puts(char *str);
extern	int			ft_isalpha(int c);
extern	int			ft_isascii(int c);
extern	int			ft_isdigit(int c);
extern	int			ft_isprint(int c);
extern	unsigned	ft_toupper(int c);
extern	unsigned	ft_tolower(int c);

int		main(void)
{
	char str[3] = "abc"; //current string testing
	char *upper = "abcdefghijklmnopqrstuvwxyz"; //ft_toupper
	char *lower = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //ft_tolower
	int i;
	int j;

	i = -1;
	j = -1;
	//ft_hello();
	//printf("ft_strlen is: %d\n", ft_strlen(str)); //testing ft_strlen.s
	//printf("OG strlen is: %d\n\n", ft_strlen(str));

	//ft_bzero(str, 3); //testing ft_bzero
	//ft_puts("hello"); //testing ft_puts
	// printf("a = %d\n", ft_isalpha('a')); //0
	// printf("z = %d\n", ft_isalpha('z')); //0
	// printf("A = %d\n", ft_isalpha('A')); //0
	// printf("Z = %d\n", ft_isalpha('Z')); //0
	// printf("b = %d\n", ft_isalpha('b')); //0
	// printf("y = %d\n\n", ft_isalpha('y')); //0
	//
	// printf("ASCII of 125: %d\n", ft_isalpha(125)); //1
	// printf("ASCII of 50: %d\n", ft_isalpha(50)); //1
	// printf("ASCII of 133: %d\n", ft_isalpha(133)); //1
	// printf("ASCII of -1 (doesn't exist): %d\n", ft_isalpha(-1)); //1
	// printf("NULL, so 0: %d\n", ft_isalpha('\0')); //1
	// printf("whitespace: %d\n", ft_isalpha(' ')); //1

	// printf("testing ft_isascii -11: %d\n", ft_isascii(-11)); //0
	// printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	// printf("testing ft_isascii 0: %d\n", ft_isascii(0)); //1
	// printf("testing ft_isascii -0: %d\n", ft_isascii(-0)); //1
	// printf("testing ft_isascii 120: %d\n", ft_isascii(120)); //1
	// printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	// printf("testing ft_isascii 'Z': %d\n", ft_isascii('Z')); //1

	// printf("ft_isdigit 0?: %d\n", ft_isdigit('0'));
	// printf("ft_isdigit 1: %d\n", ft_isdigit('1'));
	// printf("ft_isdigit 2?: %d\n", ft_isdigit('2'));
	// printf("ft_isdigit 3?: %d\n", ft_isdigit('3'));
	// printf("ft_isdigit 4?: %d\n", ft_isdigit('4'));
	// printf("ft_isdigit 5?: %d\n", ft_isdigit('5'));
	// printf("ft_isdigit 6?: %d\n", ft_isdigit('6'));
	// printf("ft_isdigit 7?: %d\n", ft_isdigit('7'));
	// printf("ft_isdigit 8?: %d\n", ft_isdigit('8'));
	// printf("ft_isdigit 9?: %d\n", ft_isdigit('9'));
	//
	// printf("ft_isdigit 0?: %d\n", ft_isdigit('0'));
	// printf("ft_isdigit newline?: %d\n", ft_isdigit(10)); //0
	// printf("ft_isdigit 2?: %d\n", ft_isdigit('2'));
	// printf("ft_isdigit 3?: %d\n", ft_isdigit('3'));
	// printf("ft_isdigit 4?: %d\n", ft_isdigit('4'));
	// printf("ft_isdigit 5?: %d\n", ft_isdigit('5'));
	// printf("ft_isdigit 6?: %d\n", ft_isdigit('6'));
	// printf("ft_isdigit 7?: %d\n", ft_isdigit('7'));
	// printf("ft_isdigit 8?: %d\n", ft_isdigit('8'));
	// printf("ft_isdigit 9?: %d\n", ft_isdigit('9'));

	// printf("ft_isprint for 'c': %d\n",ft_isprint('c')); //1
	// printf("ft_isprint for 'z': %d\n",ft_isprint('z')); //1
	// printf("ft_isprint for 'e': %d\n",ft_isprint('e')); //1
	// printf("ft_isprint for 'i': %d\n",ft_isprint('i')); //1
	// printf("ft_isprint for 'D': %d\n",ft_isprint('D')); //1
	// printf("ft_isprint for NULL: %d\n\n",ft_isprint('\0')); //0
	// printf("ft_isprint for newline: %d\n\n",ft_isprint('\n')); //0
	// printf("ft_isprint for vertical tab: %d\n\n",ft_isprint('\v')); //0
	// printf("ft_isprint for del: %d\n\n",ft_isprint('\128')); //0
	// printf("ft_isprint for horizontal tab: %d\n\n",ft_isprint('0x09')); //0

	printf("ft_toupper testing\n");
	while (upper[++i] != '\0')
		printf("uppercasing %c -> %c\n", upper[i], ft_toupper(upper[i]));
	printf("\n");
	printf("ft_tolower testing\n");
	while (lower[++j] != '\0')
		printf("lowercasing %c -> %c\n", lower[j], ft_tolower(lower[j]));

	return (0);
}
