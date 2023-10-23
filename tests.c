#include "libft.h"
#include <strings.h>
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
	/*
//isalpha
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
	char	src4[] = "A";
	char	dest4[] = "123";
	size_t	size6 = sizeof(dest4);

	printf ("strlcpy: %ld\n", strlcpy(dest4, src4, size6));
	printf ("ft_strlcpy: %ld\n", ft_strlcpy(dest4, src4, size6));
	printf ("src len: %ld\n", ft_strlen(src4));
	printf("\n");

//strlcat
	char	source[] = "\0";
	char	destination1[50] = "\0";
	char    destination2[] = "\0";
	size_t  size7 = 0;

	printf ("strlcat: %ld\n", strlcat(destination1, source, size7));
	printf ("dest1: %s\n", destination1);
	printf ("ft_strlcat: %ld\n", ft_strlcat(destination2, source, size7));
	printf ("dest2: %s\n", destination2);
	printf("\n");

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
	printf("\n");

//memchr
	char	string3[] = "kanna";

	printf("memchr: %s\n", (char*)memchr(string3, 'n', 4));
	printf("ft_memchr: %s\n", (char*)ft_memchr(string3,'n', 4));
	printf("\n");

//memcmp
	char	string4[] = "a5";
	char	string5[] = "abcd55";

	printf("memcmp: %d\n", memcmp(string4, string5, 2));	
	printf("ft_memcmp: %d\n", ft_memcmp(string4, string5, 2));
	printf("\n");

//strnstr
	char *bigstr = "Foo Bar All";
	char	*smallstr = "";
	size_t	len = 7;
	
	printf("strnstr: %s\n", strnstr(bigstr, smallstr, len));
	printf("ft_strnstr: %s\n", ft_strnstr(bigstr, smallstr, len));
	printf("\n");

//atoi
	char	*string6 = "-88";
	
	printf("atoi: %d\n", atoi(string6));
	printf("ft_atoi: %d\n", ft_atoi(string6));
	printf("\n");
*/
//calloc
	char	*str_mycalloc = "123456789";
	char	*str_calloc = "123456789";
	size_t	n_items = 10;
	size_t	type_size = sizeof(char);
	
	str_mycalloc = ft_calloc(n_items, type_size);
	str_calloc = calloc(n_items, type_size);
	printf("Test1: %d\n", ft_memcmp(str_mycalloc, str_calloc, n_items));
	printf("Test2: %d\n", memcmp(str_mycalloc, str_calloc, n_items));
	free(str_mycalloc);
	free(str_calloc);
	printf("\n");

//strdup
	char	*string7 = "123- pp \0../\n asdsd";
	char	*res1 = strdup(string7);
	char	*res2 = ft_strdup(string7);

	printf("strdup: %s\n", res1);
	free(res1);
	printf("ft_strdup: %s\n", res2);
	free(res2);
	printf("\n");

//Part 2
//substr
	char	*string8 = "Mira";
	int		start = 6;
	size_t	len = strlen(string8);
	char	*print_substr = ft_substr(string8, start, len);

	printf("ft_substr: %s\n", print_substr);
	free(print_substr);

//strjoin
	char	*s1 = "Mira lo";
	char	*s2 = "que me encontre";
	char	*s3 = ft_strjoin(s1, s2);

	printf("strjoin: %s\n", s3);
	free(s3);

	return (0);
}
