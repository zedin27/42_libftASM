#include <unistd.h>
#include <stdio.h>
#include <string.h>

extern	int			ft_hello(void);
extern	unsigned	ft_strlen(const char *str);
extern	unsigned	ft_bzero(void *s, size_t n);
extern	void		ft_puts(char *str);
extern	int			ft_isalpha(int c);
extern	int			ft_isascii(int c);

int		main(void)
{
	char str[3] = "abc"; //current string testing

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

	printf("testing ft_isascii -11: %d\n", ft_isascii(-11)); //0
	printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	printf("testing ft_isascii 0: %d\n", ft_isascii(0)); //1
	printf("testing ft_isascii -0: %d\n", ft_isascii(-0)); //1
	printf("testing ft_isascii 120: %d\n", ft_isascii(120)); //1
	printf("testing ft_isascii -1: %d\n", ft_isascii(-1)); //0
	printf("testing ft_isascii 'Z': %d\n", ft_isascii('Z')); //1

	return (0);
}
