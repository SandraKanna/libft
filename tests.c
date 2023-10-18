#include "libft.h"
#include <strings.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	int	arg = '0';
	char	str1[] = "Hello ";
	char	src[] = "Hello World";
    char	dest[100];
    size_t	n = 1;


//isalpha
	printf("ft_isalpha: %d\n", ft_isalpha('a'));

//isdigit
	printf("ft_isdigit: %d\n", ft_isdigit(arg));

//isalnum
	printf("ft_isalnum: %d\n", ft_isalnum(arg));

//isascii
	printf("ft_isascii: %d\n", ft_isascii(arg));

//isprint
	printf("ft_isprint: %d\n", ft_isprint(arg));

//strlen
	printf("ft_strlen: %zu\n", ft_strlen(str1));
	printf("strlen: %zu\n", strlen(str1));

//memset
	printf("ft_memset: %s\n", (char*)ft_memset(str1, arg, n));
//bzero

//memcpy
	printf("ft_memcpy: %s\n", (char*)ft_memcpy(dest, src, n));

//memmove
	

	return (0);
}
