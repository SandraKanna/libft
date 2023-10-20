#include "libft.h"
#include <strings.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <bsd/string.h>

int	main(void)
{//isalpha
	printf("isalpha: %d\n", isalpha(122));
	printf("ft_isalpha: %d\n", ft_isalpha(122));
	printf("\n");

//isdigit
	printf("isdigit: %d\n", isdigit('8'));
	printf("ft_isdigit: %d\n", ft_isdigit('8'));
	printf("\n");

//isalnum
	printf("isalnum: %d\n", isalnum('0'));
	printf("ft_isalnum: %d\n", ft_isalnum('0'));
	printf("\n");

//isascii
	printf("isascii: %d\n", isascii(9));
	printf("ft_isascii: %d\n", ft_isascii(9));
	printf("\n");

//isprint
	printf("isprint: %d\n", isprint(23));
	printf("ft_isprint: %d\n", ft_isprint(23));
	printf("\n");

//strlen
	char	str1[] = "Hello ";
	
	printf("strlen: %zu\n", strlen(str1));
	printf("ft_strlen: %zu\n", ft_strlen(str1));
	printf("\n");

//memset
	char	str2[] = "Hello World";
	int	a = 2;
	size_t	size1 = 1;

	printf("memset: %s\n", (char*)memset(str2, a, size1));
	printf("ft_memset: %s\n", (char*)ft_memset(str2, a, size1));
	printf("\n");

//bzero
	char	str3[] = "Hello World";
	char	str4[] = "Hello World";
	size_t	size2 = 1;	

	bzero(str3, size2);
	printf("bzero: %s\n", str3);
    ft_bzero(str4, size2);
    printf("ft_bzero: %s\n", str4);	
	printf("\n");

//memcpy
    char	src1[] = "hey you";
    char    src2[] = "hey you";
    char	dest1[] = "123";
    char    dest2[] = "123";
	size_t	size4 = 3;	
		
	printf("memcpy: %s\n", (char*)memcpy(dest1, src1, size4));
	printf("ft_memcpy: %s\n", (char*)ft_memcpy(dest2, src2, size4));
	printf("\n");

//memmove
    char	src3[] = "heydfhsfhgrjhdghjfgjhghjgh";
    char	dest3[100];
    size_t	size5 = 4;
	
	printf("memmove: %s\n", (char*)memmove(dest3, src3, size5));
    printf("ft_memmove: %s\n", (char*)ft_memmove(dest3, src3, size5));	
	printf("\n");

//strlcpy
	char	src4[] = "1";
	char	dest4[] = "123";
	size_t	size = sizeof(dest4);

	//printf ("strlcpy: %ld\n", strlcpy(dest4, src4, size));
	printf ("ft_strlcpy: %ld\n", ft_strlcpy(dest4, src4, size));
	printf ("src len: %ld\n", ft_strlen(src4));
	printf("\n");

//strlcat

//toupper
	printf("toupper: %d\n", toupper('c'));
	printf("ft_toupper: %d\n", ft_toupper('c'));
	printf("\n");

//tolower
	printf("tolower: %d\n", tolower('Z'));
	printf("ft_tolower: %d\n", ft_tolower('Z'));
	printf("\n");

//strchr
	char	str5[] = "abcde";

	printf("strchr: %s\n", (char*)strchr(str5, 'b'));
	printf("ft_strchr: %s\n", (char*)ft_strchr(str5, 'b'));
	printf("\n");

//strrchr
	char	str6[] = "aBccdBe1";

	printf("strrchr: %s\n", (char*)strrchr(str6, 66));
	printf("ft_strrchr: %s\n", (char*)ft_strrchr(str6, 66));
	printf("\n");

//strncmp
	char	string1[] = "";
	char	string2[] = "abd1";

	printf("strncmp: %d\n", strncmp(string1, string2, 4));	
	printf("ft_strncmp: %d\n", ft_strncmp(string1, string2, 4));

//memchr
	char	string3[] = "kanna";

	printf("memchr: %s\n", (char*)memchr(string3, 'n', 4));
	printf("ft_memchr: %s\n", (char*)ft_memchr(string3,'n', 4));

	return (0);
}