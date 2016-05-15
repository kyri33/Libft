#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <ctype.h>

void	ft_puppercase(char *ptr)
{
	char c;

	c = (char)toupper(*ptr);
	write(1, &c, 1);
}

void	ft_plowercase_mod(unsigned int i, char *ptr)
{
	char c;

	if (i % 2 == 0)
	{
		c = (char)toupper(*ptr);
	}
	else
		c = (char)tolower(*ptr);
	write(1, &c, 1);
}

char	ft_test_upper(char c)
{
	c = (char)toupper(c);
	return (c);
}

char	ft_test_upper_mod(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		c = (char)toupper(c);
	}
	else
		c = (char)tolower(c);
	return (c);
}

int	main(void)
{
	printf("%s\n\n", "Test cases - The first example of each case shown is my own function, the second case (if present) is of the official function we were meant to copy");

	//memset
	char	b[50];
	printf("%s\n", "ft_memset with char 'b' and 30 length");
	printf("%s\n", (char *)ft_memset((void *)b, 'b', 30));
	printf("%s\n", (char *)memset((void *)b, 'b', 30));
	printf("%s\n", "ft_memset with int '6' and 30 length");
	printf("%s\n", (char *)ft_memset((void *)b, 6, 30));
	printf("%s\n", (char *)memset((void *)b, 6, 30));

	//bzero
	printf("\n\n%s\n", "ft_bzero with 10 length");
	ft_bzero((void *)b, 10);
	printf("%s\n", b);
	bzero((void *)b, 10);
	printf("%s\n", b);

	//memcpy
	char	s1[50];
	char	s2[50];
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_memcpy using words 'Hello' and 'world' starting the copy at s1 + 1 for size of 3");
	printf("%s\n", ft_memcpy(s1 + 1, s2, 3));
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", memcpy(s1 + 1, s2, 3));
	printf("\n\n%s\n", "ft_memcpy using words 'Hello' and 'world' starting the copy at s1 + 3 for size of 30");
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", ft_memcpy(s1 + 3, s2, 30));
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", memcpy(s1 + 3, s2, 30));

	//memccpy
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_memccpy using words 'Hello' and 'world' looking for the char 'l' for size of 10");
	printf("%s\n", ft_memccpy(s1, s2, 'l', 10));
	printf("%s\n", s1);
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", memccpy(s1, s2, 'l', 10));
	printf("%s\n", s1);
	printf("\n\n%s\n", "ft_memccpy using words 'Hello' and 'world' looking for the char 'z' with for size of 7");
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", ft_memccpy(s1, s2, 'z', 10));
	printf("%s\n", s1);
	strcpy(s1, "Hello");
	strcpy(s2, "world");
	printf("%s\n", memccpy(s1, s2, 'z', 10));
	printf("%s\n", s1);

	//memmove
	strcpy(s1, "Goodbye");
	strcpy(s2, "planet");
	printf("\n\n%s\n", "ft_memmove using words 'Goodbye' and 'planet' starting the copy at s1 + 1 for size of 3");
	printf("%s\n", ft_memmove(s1 + 1, s2, 3));
	strcpy(s1, "Goodbye");
	strcpy(s2, "planet");
	printf("%s\n", memmove(s1 + 1, s2, 3));
	printf("\n\n%s\n", "ft_memmove using words 'Goodbye' and 'planet' starting the copy at s1 + 3 for size of 30");
	strcpy(s1, "Goodbye");
	strcpy(s2, "planet");
	printf("%s\n", ft_memmove(s1 + 3, s2, 30));
	strcpy(s1, "Goodbye");
	strcpy(s2, "planet");
	printf("%s\n", memmove(s1 + 3, s2, 30));

	//memchr
	strcpy(s1, "Hello world");
	printf("\n\n%s\n", "ft_memchr using the words 'Hello world' searching for char 'l' for size 30");
	printf("%s\n", ft_memchr(s1, 'l', 30));
	printf("%s\n", memchr(s1, 'l', 30));
	printf("\n\n%s\n", "ft_memchr using the words 'Hello world' searching for char 'w' for size 2");
	printf("%s\n", ft_memchr(s1, 'w', 2));
	printf("%s\n", memchr(s1, 'w', 2));
	printf("\n\n%s\n", "ft_memchr using the words 'Hello world' searching for char 'z' for size 30");
	printf("%s\n", ft_memchr(s1, 'z', 30));
	printf("%s\n", memchr(s1, 'z', 30));
	printf("\n\n%s\n", "ft_memchr using the words 'Hello world' searching for null byte for size 70");
	printf("%s\n", ft_memchr(s1, '\0', 70));
	printf("%s\n", memchr(s1, '\0', 70));

	//memcmp
	strcpy(s1, "Hello world");
	strcpy(s2, "Hello planet");
	printf("\n\n%s\n", "ft_memcmp using the words 'Hello world' and 'Hello planet' for size 5");
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
	printf("\n\n%s\n", "ft_memcmp using the words 'Hello world' and 'Hello planet' for size 12");
	printf("%d\n", ft_memcmp(s1, s2, 12));
	printf("%d\n", memcmp(s1, s2, 12));

	//strlen
	printf("\n\n%s\n", "ft_strlen using the words 'Hello world'");
	printf("%lu\n", ft_strlen(s1));
	printf("%lu\n", strlen(s1));

	//strdup
	printf("\n\n%s\n", "ft_strdup using the words 'Hello world'");
	char	*strd1;
	char	*strd2;
	strd1 = ft_strdup(s1);
	strd2 = strdup(s1);
	printf("%s\n", strd1);
	printf("%s\n", strd2);

	//strcpy
	printf("\n\n%s\n", "ft_strcpy copying the words 'Hello world' into a string");
	ft_strcpy(s1, "Hello world");
	strcpy(s2, "Hello world");
	printf("%s\n", s1);
	printf("%s\n", s2);

	//strncpy
	printf("\n\n%s\n", "ft_strncpy copying the words 'Hello world' into a string for a size of 3");
	ft_strncpy(s1, "Hello world", 3);
	strncpy(s2, "Hello world", 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("\n\n%s\n", "ft_strncpy copying the words 'Hello world' into a string for a size of 25");
	ft_strncpy(s1, "Hello world", 25);
	strncpy(s2, "Hello world", 25);
	printf("%s\n", s1);
	printf("%s\n", s2);

	//strcat
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_strcat combining the words 'Hello ' and 'world'");
	printf("%s\n", ft_strcat(s1, s2));
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("%s\n", strcat(s1, s2));

	//strncat
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_strncat combining the words 'Hello ' and 'world' for a size of 3");
	printf("%s\n", ft_strncat(s1, s2, 3));
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("%s\n", strncat(s1, s2, 3));	

	//strlcat
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_strlcat combining the words 'Hello ' and 'world' for a size of 25");
	printf("%lu\n", ft_strlcat(s1, s2, 25));
	printf("%s\n", s1);
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("%lu\n", strlcat(s1, s2, 25));	
	printf("%s\n", s1);
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("\n\n%s\n", "ft_strlcat combining the words 'Hello ' and 'world' for a size of 0");
	printf("%lu\n", ft_strlcat(s1, s2, 0));
	printf("%s\n", s1);
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("%lu\n", strlcat(s1, s2, 0));
	printf("%s\n", s1);
	printf("\n\n%s\n", "ft_strlcat combining the words 'Hello ' and 'world' for a size of 9");
	printf("%lu\n", ft_strlcat(s1, s2, 9));
	printf("%s\n", s1);
	strcpy(s1, "Hello ");
	strcpy(s2, "world");
	printf("%lu\n", strlcat(s1, s2, 9));
	printf("%s\n", s1);

	//strchr
	printf("\n\n%s\n", "ft_strchr looking for 'l' in 'Hello world'");
	printf("%s\n", ft_strchr(s1, 'l'));
	printf("%s\n", strchr(s1, 'l'));
	printf("\n\n%s\n", "ft_strchr looking for 'z' in 'Hello world'");
	printf("%s\n", ft_strchr(s1, 'z'));
	printf("%s\n", strchr(s1, 'z'));
	printf("\n\n%s\n", "ft_strchr looking for null byte in 'Hello world'");
	printf("%s\n", ft_strchr(s1, '\0'));
	printf("%s\n", strchr(s1, '\0'));

	//strrchr
	/*printf("\n\n%s\n", "ft_strrchr looking for 'l' in 'Hello world'");
	printf("%s\n", ft_strrchr(s1, 'l'));
	printf("%s\n", strrchr(s1, 'l'));
	printf("\n\n%s\n", "ft_strrchr looking for 'z' in 'Hello world'");
	printf("%s\n", ft_strrchr(s1, 'z'));
	printf("%s\n", strrchr(s1, 'z'));
	printf("\n\n%s\n", "ft_strrchr looking for null byte in 'Hello world'");
	printf("%s\n", ft_strrchr(s1, '\0'));
	printf("%s\n", strrchr(s1, '\0'));*/

	//strstr
	strcpy(s1, "Foo Bar Baz");
	strcpy(s2, "Bar ");
	printf("\n\n%s\n", "ft_strstr looking for the string 'Bar ' in 'Foo Bar Baz'");
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));	
	printf("\n\n%s\n", "ft_strstr looking for the string 'bar' in 'Foo Bar Baz'");
	strcpy(s2, "bar");
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));


	//strnstr
	/*strcpy(s1, "Foo Bar Baz");
	strcpy(s2, "Bar ");
	printf("\n\n%s\n", "ft_strnstr looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 60");
	printf("%s\n", ft_strnstr(s1, s2, 60));
	printf("%s\n", strnstr(s1, s2, 60));
	printf("\n\n%s\n", "ft_strnstr looking for the string 'bar' in 'Foo Bar Baz' for a size of 60");
	printf("%s\n", ft_strnstr(s1, "bar", 2));
	printf("%s\n", strnstr(s1, "bar", 60));
	printf("\n\n%s\n", "ft_strnstr looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 2");
	printf("%s\n", ft_strnstr(s1, s2, 2));
	printf("%s\n", strnstr(s1, s2, 2));
	printf("\n\n%s\n", "ft_strnstr looking for the string 'Bar ' in 'Foo Bar Baz' for a size of 70");
	printf("%s\n", ft_strnstr(s1, s2, 70));
	printf("%s\n", strnstr(s1, s2, 70));*/

	//strcmp
	printf("\n\n%s\n", "ft_strcmp comparing strings 'Hell§' and 'Hello'");
	printf("%d\n", ft_strcmp("Hell§", "Hello"));
	printf("%d\n", strcmp("Hell§", "Hello"));
	printf("\n\n%s\n", "ft_strcmp comparing strings 'Hello' and 'He%'");
	printf("%d\n", ft_strcmp("Hello", "He%"));
	printf("%d\n", strcmp("Hello", "He%"));
	printf("\n\n%s\n", "ft_strcmp comparing strings 'Hello' and 'Hello'");
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("Hello", "Hello"));

	//strncmp
	printf("\n\n%s\n", "ft_strncmp comparing strings 'Hell§' and 'Hello' for size of 2");
	printf("%d\n", ft_strncmp("Hell§", "Hello", 2));
	printf("%d\n", strncmp("Hell§", "Hello", 2));
	printf("\n\n%s\n", "ft_strcmp comparing strings 'Hello' and 'He±' for size of 10");
	printf("%d\n", ft_strncmp("Hello", "He±", 10));
	printf("%d\n", strncmp("Hello", "He±", 10));
	printf("\n\n%s\n", "ft_strcmp comparing strings 'Hello' and 'Hello' for size 200");
	printf("%d\n", ft_strncmp("Hello", "Hello", 200));
	printf("%d\n", strncmp("Hello", "Hello", 200));

	//atoi
	printf("\n\n%s\n", "ft_atoi converting '-3450' to an int");
	printf("%d\n", ft_atoi("-3450"));
	printf("%d\n", atoi("-3450"));
	printf("\n\n%s\n", "ft_atoi converting '0300' to an int");
	printf("%d\n", ft_atoi("0300"));
	printf("%d\n", atoi("0300"));
	printf("\n\n%s\n", "ft_atoi converting '-34b50' to an int");
	printf("%d\n", ft_atoi("-34b50"));
	printf("%d\n", atoi("-34b50"));
	printf("\n\n%s\n", "ft_atoi converting '-d3450' to an int");
	printf("%d\n", ft_atoi("-d3450"));
	printf("%d\n", atoi("-d3450"));

	//isalpha
	printf("\n\n%s\n", "ft_isalpha checking 'A'");
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('A'));
	printf("\n\n%s\n", "ft_isalpha checking ']'");
	printf("%d\n", ft_isalpha(']'));
	printf("%d\n", isalpha(']'));
	printf("\n\n%s\n", "ft_isalpha checking '4'");
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", isalpha('4'));
	printf("\n\n%s\n", "ft_isalpha checking int 6");
	printf("%d\n", ft_isalpha(6));
	printf("%d\n", isalpha(6));
	printf("\n\n%s\n", "ft_isalpha checking int 65");
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", isalpha(65));

	//isdigit
	printf("\n\n%s\n", "ft_isdigit checking '9'");
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	printf("\n\n%s\n", "ft_isdigit checking ']'");
	printf("%d\n", ft_isdigit(']'));
	printf("%d\n", isdigit(']'));
	printf("\n\n%s\n", "ft_isdigit checking int 6");
	printf("%d\n", ft_isdigit(6));
	printf("%d\n", isdigit(6));
	printf("\n\n%s\n", "ft_isdigit checking int 53");
	printf("%d\n", ft_isdigit(53));
	printf("%d\n", isdigit(53));

	//isalnum
	printf("\n\n%s\n", "ft_isalnum checking '9'");
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", isalnum('9'));
	printf("\n\n%s\n", "ft_isalnum checking ']'");
	printf("%d\n", ft_isalnum(']'));
	printf("%d\n", isalnum(']'));
	printf("\n\n%s\n", "ft_isalnum checking int 'b'");
	printf("%d\n", ft_isalnum('b'));
	printf("%d\n", isalnum('b'));
	printf("\n\n%s\n", "ft_isalnum checking int 53");
	printf("%d\n", ft_isalnum(53));
	printf("%d\n", isalnum(53));

	//isascii
	printf("\n\n%s\n", "ft_isascoii checking '9'");
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", isascii('9'));
	printf("\n\n%s\n", "ft_isascii checking ']'");
	printf("%d\n", ft_isascii(']'));
	printf("%d\n", isascii(']'));
	printf("\n\n%s\n", "ft_isascii checking int 'b'");
	printf("%d\n", ft_isascii('b'));
	printf("%d\n", isascii('b'));

	//isprint
	printf("\n\n%s\n", "ft_isprint checking '9'");
	printf("%d\n", ft_isprint('9'));
	printf("%d\n", isprint('9'));
	printf("\n\n%s\n", "ft_isprint checking ']'");
	printf("%d\n", ft_isprint(']'));
	printf("%d\n", isprint(']'));
	printf("\n\n%s\n", "ft_isprint checking null byte");
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", isprint('\0'));

	//toupper
	printf("\n\n%s\n", "ft_toupper being used on 'b'");
	printf("%d\n", ft_toupper('b'));
	printf("%d\n", toupper('b'));
	printf("\n\n%s\n", "ft_toupper being used on 'B'");
	printf("%d\n", ft_toupper('B'));
	printf("%d\n", toupper('B'));
	printf("\n\n%s\n", "ft_toupper being used on '6'");
	printf("%d\n", ft_toupper('6'));
	printf("%d\n", toupper('6'));

	//tolower
	printf("\n\n%s\n", "ft_tolower being used on 'b'");
	printf("%d\n", ft_tolower('b'));
	printf("%d\n", tolower('b'));
	printf("\n\n%s\n", "ft_tolower being used on 'B'");
	printf("%d\n", ft_tolower('B'));
	printf("%d\n", tolower('B'));
	printf("\n\n%s\n", "ft_tolower being used on '6'");
	printf("%d\n", ft_tolower('6'));
	printf("%d\n", tolower('6'));

	//memalloc
	printf("\n\n%s\n", "ft_memalloc used on a new pointer to char with a size of 20, then the words 'Hello world' are placed into the new string");
	char	*new_str;
	new_str = ft_memalloc(20);
	strcpy(new_str, "Hello world");
	printf("%s", new_str);

	//memdel
	int	new_arr[5][5];
	printf("\n\n%s\n", "ft_memdel used on a newly created array, no crash means it works");
	ft_memdel((void **)new_arr);

	//strnew
	char	*new_str1;
	printf("\n\n%s\n", "ft_strnew used to create a new string of size 10");
	new_str1 = ft_strnew(10);
	printf("%s\n", new_str1);

	//strdel
	printf("\n\n%s\n", "ft_strdel used to free the string that was just created, no crash means it works");
	ft_strdel((char **)new_str1);

	//strclr
	printf("\n\n%s\n", "ft_strclr used to clear the string created with ft_memalloc");
	ft_strclr(new_str);
	printf("%s\n", new_str);

	//striter
	printf("\n\n%s\n", "ft_striter used on a string with 'Hello world' using a test uppercase program");
	strcpy(new_str, "Hello world");
	ft_striter(new_str, &ft_puppercase);

	//striteri
	printf("\n\n%s\n", "ft_striteri used on the same string using a test upper and lower case program");
	ft_striteri(new_str, &ft_plowercase_mod);

	//strmap
	printf("\n\n%s\n", "ft_srrmap used on the same string using a test uppercase program, put into a new string");
	char	*new_str2;
	new_str2 = ft_strmap(new_str, &ft_test_upper);
	printf("%s\n", new_str2);

	//strmapi
	printf("\n\n%s\n", "ft_strmapi used on the string that was just created using an upper and lowercase program, put into a new string");
	char	*new_str3;
	new_str3 = ft_strmapi(new_str2, &ft_test_upper_mod);
	printf("%s\n", new_str3);

	//strequ
	printf("\n\n%s\n", "ft_strequ used to compare strings 'Hello world' and 'Hello world', output should be 1");
	printf("%d\n", ft_strequ("Hello world", "Hello world"));
	printf("\n\n%s\n", "ft_strequ used to compare strings 'Hel±lo§' and 'Hello world', output should be 0");
	printf("%d\n", ft_strequ("Hel±lo§", "Hello world"));

	//strnequ
	printf("\n\n%s\n", "ft_strnequ used to compare strings 'Hello world' and 'Hello world' for size of 200, output should be 1");
	printf("%d\n", ft_strnequ("Hello world", "Hello world", 200));
	printf("\n\n%s\n", "ft_strnequ used to compare strings 'Hel±lo§' and 'Hello world' for a size of 200, output should be 0");
	printf("%d\n", ft_strnequ("Hel±lo§", "Hello world", 200));
	printf("\n\n%s\n", "ft_strnequ used to compare strings 'Hel±lo§' and 'Hello world' for a size of 2, output should be 1");
	printf("%d\n", ft_strnequ("Hel±lo§", "Hello world", 2));

	//strsub
	printf("\n\n%s\n", "ft_strsub used on the string 'Hello world', starting from 0 with a size of 4");
	printf("%s\n", ft_strsub("Hello world", 0, 4));
	printf("\n\n%s\n", "ft_strsub used on the string 'Hello world', starting from 4 with a size of 200");
	printf("%s\n", ft_strsub("Hello world", 4, 200));
	printf("\n\n%s\n", "ft_strsub used on the string 'Hello world', starting from 200 with a size of 4");
	printf("%s\n", ft_strsub("Hello world", 200, 4));

	//strjoin
	printf("\n\n%s\n", "ft_strjoin used on the strings 'Hello ' and 'world'");
	printf("%s\n", ft_strjoin("Hello ", "world"));

	//strtrim
	printf("\n\n%s\n", "ft_strtrim used on the sting '       Hello world		\t     '");
	printf("%s", ft_strtrim("               Hello world          \t         "));

	//strsplit
	char	**str_arr;
	char	**str_arr2;
	int		i;

	i = 0;
	printf("\n\n%s\n", "ft_strsplit used to split the string 'Hello**world*I*am***coding*' with the delimiter '*'");
	str_arr = ft_strsplit("Hello**world*I*am***coding*", '*');
	while (str_arr[i] != '\0')
	{
		printf("%s\n", str_arr[i]);
		i++;
	}
	i = 0;
	printf("\n\n%s\n", "ft_strsplit used to split the string '   Hell o**wo rld*I*a m***cod ing*’ with the delimiter ' ' ");
	str_arr2 = ft_strsplit("Hell o**wo rld*I*a m***cod ing*", ' ');
	while (str_arr2[i] != '\0')
	{
		printf("%s\n", str_arr2[i]);
		i++;
	}
	//itoa
	printf("\n\n%s\n", "ft_itoa used to convert the int '-300' into a string");
	printf("%s\n", ft_itoa(-300));
	printf("\n\n%s\n", "ft_itoa used to convert the int '30501' into a string");
	printf("%s\n", ft_itoa(30501));

	//putchar
	printf("\n\n%s\n", "ft_putchar printing the char 'c'");
	ft_putchar('c');
	printf("\n\n%s\n", "ft_putchar printing the char '4'");
	ft_putchar('4');

	//putstr
	printf("\n\n%s\n", "ft_putstr printing the string 'Hello world'");
	ft_putstr("Hello world");

	//putendl
	printf("\n\n%s\n", "ft_putendl printing the string 'Hello world'");
	ft_putendl("Hello world");

	//putnbr
	printf("\n\n%s\n", "ft_putnbr printing the int '-300'");
	ft_putnbr(-300);
	printf("\n\n%s\n", "ft_putnbr printing the int '605'");
	ft_putnbr(605);

	//all _fd functions
	int	fd;
	fd = 0;

	/*printf("\n\n%s\n", "ft_putchar_fd, ft_putstr_d, ft_putendl_d, ft_putnbr_fd, printing 'A' 'You passed' 'The test case' and '42' to file 'test'");
	if ((fd = open("test", O_WRONLY, S_IRUSR | S_IWUSR)) == -1)
		ft_putendl("Error: couldn't open file.");

	if (fd != -1)
	{
		ft_putchar_fd('A', fd);
		ft_putchar_fd('\n', fd);
		ft_putstr_fd("You passed", fd);
		ft_putchar_fd('\n', fd);
		ft_putendl_fd("The test case", fd);
		ft_putnbr_fd(42, fd);
	}

	if (fd != -1)
		if ((fd = close(fd)) == -1)
			ft_putendl("Error: couldn't close file");*/
}
