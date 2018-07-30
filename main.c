#include <unistd.h>
#include <stdio.h>
#include <string.h>

extern	int			ft_hello(void);
extern	unsigned	ft_strlen(const char *str);
extern	unsigned	ft_bzero(void *s, size_t n);
extern	void		ft_puts(char *str);
extern	int			ft_isalpha(int c);

int		main(void)
{
	char str[3] = "abc";

	//ft_hello();
	//printf("ft_strlen is: %d\n", ft_strlen(str)); //testing ft_strlen.s
	//printf("OG strlen is: %d\n\n", ft_strlen(str));

	//ft_bzero(str, 3); //testing ft_bzero
	//ft_puts("hello"); //testing ft_puts
	printf("a = %d\n", ft_isalpha('a')); //1
	printf("z = %d\n", ft_isalpha('z')); //1
	printf("A = %d\n", ft_isalpha('A')); //1
	printf("Z = %d\n\n", ft_isalpha('Z')); //1

	printf("%d\n", ft_isalpha(125)); //0
	printf("%d\n", ft_isalpha(50)); //0
	printf("%d\n", ft_isalpha(133)); //0
	printf("%d\n", ft_isalpha(-1)); //0
	return (0);
}
