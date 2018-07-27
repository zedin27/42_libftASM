#include <unistd.h>
#include <stdio.h>

extern	int ft_hello(void);
extern	unsigned ft_strlen(void);

int		main(void)
{
	char test[6] = "abcde\0";
	ft_hello();
	printf("strlen is: %d\n", ft_strlen());
}
