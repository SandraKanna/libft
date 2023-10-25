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
	char	str_mem1[] = "Hell\0o World";
	char	str_mem2[] = "Hell\0o World";
	int	a = 6;
	size_t	size1 = 1;

	printf("memset: %s\n", (char*)memset(str_mem1, a, size1));
	printf("ft_memset: %s\n", (char*)ft_memset(str_mem2, a, size1));
	printf("\n");

//bzero
	char	str3[10];
	char	str4[10];
	size_t	size2 = 10;	

	bzero(str3, size2);
	printf("bzero: %s\n", str3);
	ft_bzero(str4, size2);
	printf("ft_bzero: %s\n", str4);	
	printf("\n");

//memcpy
	char	src1[] = "\0";
	char    src2[] = "\0";
	char	dest1[] = "\0";
	char    dest2[] = "\0";
	size_t	size4 = 2;	
		
	printf("real_memcpy: %s\n", (char*)memcpy(dest1, src1, size4));
	printf("myft_memcpy: %s\n", (char*)ft_memcpy(dest2, src2, size4));
	printf("\n");

//memmove
	char	src3[] = "\0";
	char	dest3[100] = "a";
	size_t	size5 = 4;
	
	printf("memmove: %s\n", (char*)memmove(dest3, src3, size5));
	printf("ft_memmove: %s\n", (char*)ft_memmove(dest3, src3, size5));	
	printf("\n");

//strlcpy
	char	src4[] = "A";
	char	dest4[] = "123";
	char	dest5[] = "123";
	size_t	size6 = sizeof(dest4);

	printf ("dest1 before: %s\n", dest4);
	printf ("strlcpy: %ld\n", strlcpy(dest4, src4, size6));
	printf ("dest1 after: %s\n", dest4);
	printf ("dest2 before: %s\n", dest5);
	printf ("ft_strlcpy: %ld\n", ft_strlcpy(dest5, src4, size6));
	printf ("dest2 after: %s\n", dest5);
	printf("\n");

//strlcat
	char	source[] = "\0";
	char	destination1[50] = "\0";
	char    destination2[50] = "\0";
	size_t  size7 = 0;

	printf ("dest1 before: %s\n", destination1);
	printf ("strlcat: %ld\n", strlcat(destination1, source, size7));
	printf ("dest1 after: %s\n", destination1);
	printf ("dest2 before: %s\n", destination2);
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

	printf("strchr: %s\n", (char*)strchr(str5, 1024));
	printf("strchr: %p\n", (char*)strchr(str5, 1024));
	printf("ft_strchr: %s\n", (char*)ft_strchr(str5, 1024));
	printf("ft_strchr: %p\n", (char*)ft_strchr(str5, 1024));

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
	char	*str_mycalloc = "";
	char	*str_calloc = "";
	size_t	n_items = 0;
	size_t	type_size = 0;
	
	str_mycalloc = ft_calloc(n_items, type_size);
	str_calloc = calloc(n_items, type_size);
	
	printf("Calloc test1: %d\n", memcmp(str_mycalloc, str_calloc, n_items));
	printf("Calloc test2: %d\n", ft_memcmp(str_mycalloc, str_calloc, n_items));
	free(str_calloc);
	free(str_mycalloc);
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
	size_t	len2 = strlen(string8);
	char	*print_substr = ft_substr(string8, start, len2);

	printf("ft_substr: %s\n", print_substr);
	free(print_substr);
	printf("\n");

//strjoin
	char	*s1 = "Mira lo ";
	char	*s2 = "que me encontre";
	char	*s3 = ft_strjoin(s1, s2);

	printf("ft_strjoin: %s\n", s3);
	free(s3);
	printf("\n");

//strtrim
	char	*string9 = "&&Hey Jude &&";
	char	*set = "&&";

	char	*strtrim = ft_strtrim(string9, set);

	printf("ft_strtrim: %s\n", strtrim);
	free(strtrim);
	printf("\n");

	return (0);
}
