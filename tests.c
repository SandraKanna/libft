#include "libft.h"

int	main(void)
{
	int	arg = '0';
	char	str1[] = "Hello ";
	char	src[] = "Hello World";
    char	dest[100];
    size_t	n = 1;


//isalpha
	printf("isalpha: %d\n", ft_isalpha('a'));

//isdigit
	printf("isdigit: %d\n", ft_isdigit(arg));

//isalnum
	printf("isalnum: %d\n", ft_isalnum(arg));

//isascii
	printf("isascii: %d\n", ft_isascii(arg));

//isprint
	printf("isprint: %d\n", ft_isprint(arg));

//strlen
	printf("strlen: %zu\n", ft_strlen(str1));

//memset
	printf("memset: %s\n", (char*)ft_memset(str1, arg, n));
//bzero

//memcpy
	printf("memcpy: %s\n", (char*)ft_memcpy(dest, src, n));

	return (0);
}
