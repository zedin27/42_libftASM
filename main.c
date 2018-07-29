#include <unistd.h>
#include <stdio.h>

extern	int ft_hello(void);
extern	unsigned ft_strlen1(char *str);

int		main(void)
{
	char str[3] = "abc";

	//ft_hello();
	printf("strlen is: %d\n", ft_strlen1(str));
	return (0);
}
