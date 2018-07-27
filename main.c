#include <unistd.h>
#include <stdio.h>

extern	int ft_hello(void);
extern	unsigned ft_strlen(char *str);

int		main(void)
{
	char str[3] = "abc";

	//ft_hello();
	printf("strlen is: %d\n", ft_strlen(str));
	return (0);
}
