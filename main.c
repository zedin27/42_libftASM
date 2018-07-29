#include <unistd.h>
#include <stdio.h>
#include <string.h>

extern	int			ft_hello(void);
extern	unsigned	ft_strlen(char *str);
extern	unsigned	ft_bzero(void *s, size_t n);
extern	void		ft_puts(char *str);

int		main(void)
{
	char str[3] = "abc";

	//ft_hello();
	printf("ft_strlen is: %d\n", ft_strlen(str));
	printf("OG strlen is: %d\n\n", ft_strlen(str));

	ft_bzero(str, 3);
	ft_puts("hello");
	return (0);
}
