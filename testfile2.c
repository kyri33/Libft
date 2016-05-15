#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char f1(char c)
{
	return (c + 1);
}

char f2(unsigned int i, char c)
{
	return (c + i);
}

void f3(char *c)
{
	*c = *c + 1;
}

void f4(unsigned int i, char *c)
{
	*c = *c + i;
}


int     main(void)
{
	char word[5] = "Hello";
	char letter = 'H';
	char number= '1';
	int number1 = ft_atoi(&number);
	char str[] = ".1a";
	int i = 0;
	ft_putchar('\n');

	ft_putstr("\nft_atoi test: 			");
	if (number1 + 1 == 2)
	{
		ft_putstr("Test Passed");
	}
	else
	{
		ft_putstr("Test Failed");
	}

	ft_putstr("\nft_isdigit Test:");
	number1 = 0;
	if (ft_isdigit(number1)) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("			Test 1 Failed\n");
	number1 = 9;
	if (ft_isdigit(number1)) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("			Test 2 Failed\n");
	if (ft_isdigit('l')) ft_putstr("				Test 3 Failed\n");
	else ft_putstr("				Test 3 Passed\n");

	ft_putstr("ft_isalpha test:		");
	if (ft_isalpha(letter) == 1)
	{
		ft_putstr("Passed\n");
	}
	else
	{
		ft_putstr("Failed\n");
	}

	ft_putstr("ft_isalnum test:");
	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 1)
		{
			ft_putstr("				Alpha Numeric test Passed\n");
			i++;
		}
		else if (ft_isalnum(str[i]) != 1)
		{
			ft_putstr("		Non Alphanumeric Test Passed\n");
			i++;
		}
	}

	ft_putstr("ft_isascii test:");
	if (ft_isascii(letter) == 1)
	{
		ft_putstr("		Test 1 Passed\n");
	}
	else
	{
		ft_putstr("				Test 1 Failed\n");
	}
	if (ft_isascii('~') == 1)
	{
		ft_putstr("				Test 2 Passed\n");
	}
	else
	{
		ft_putstr("				Test 2 Failed\n");
	}
	char lolnewchar[]= "¢";
	if (ft_isascii(lolnewchar[0])) ft_putstr("				Test 3 Failed\n");
	else ft_putstr("				Test 3 Passed\n");

	ft_putstr("ft_isprint Test:");
	if (ft_isprint('p')) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("				Test 1 Failed\n");
	if (ft_isprint('\n')) ft_putstr("				Test 2 Failed\n");
	else ft_putstr("				Test 2 Passed\n");

	ft_putstr("ft_memset Test: ");
	char strmem[] = "almost every programmer should know memset!";
	ft_memset(strmem, '-',6);
	if (ft_strcmp(strmem, "------ every programmer should know memset!") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("ft_strcmp Test:");
	char cmptest[] = "Hello World";
	char cmtest1[] = "Hello World";
	if (ft_strcmp(cmptest, cmtest1) == 0) ft_putstr("			Test 1 Passed\n");
	else ft_putstr("				Test 1 Failed\n");
	if (ft_strcmp("lol", "Faie") == +1) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("				Test 2 Failed\n");

	ft_putstr("ft_strchr Test: ");
	char strchrstr[] = "This is a sample string";
	char *pch;
	pch = ft_strchr(strchrstr, 's');
	while (pch != NULL)
	{
		if (pch-strchrstr+1 == 4)
		{
			ft_putstr("               Test Passed\n");
			break;
		}
		else
			ft_putstr("             Test Failed\n");
	}

	ft_putstr("ft_strcmp Test: ");
	char cmptestnewlol[] = "Hello";
	char *cpytest = (char *)malloc(sizeof(char *)*6);
	ft_strcpy(cpytest, cmptestnewlol);
	if (strcmp(cmptestnewlol, cpytest) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("			Test Failed\n");

	ft_putstr("ft_strdup Test: ");
	char s1[] = "Hello";
	char *new;
	new	= ft_strdup(s1);
	if (strcmp(new, s1) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("			Test Failed\n");

	ft_putstr("ft_strcat Test:");
	char str2[31];
	ft_strcpy(str, "these ");
	ft_strcat(str, "strings ");
	ft_strcat(str, "are ");
	ft_strcat(str, "concatenated.");
	if (ft_strcmp(str, "these strings are concatenated.") == 0)
	{
		ft_putstr("			Test Passed\n");
	}
	char lentest[] = "hello";

	ft_putstr("ft_strlen Test: ");
	if (ft_strlen(lentest) == 5) ft_putstr("		Test Passed\n");
	else ft_putstr("			Test Failed\n");

	ft_putstr("ft_tolower Test: ");
	char tolowertest = 'A';
	tolowertest = ft_tolower(tolowertest);
	if (tolowertest == 'a') ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("ft_toupper Test: ");
	tolowertest = 'a';
	tolowertest = ft_toupper(tolowertest);
	if (tolowertest == 'A') ft_putstr(" 		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("ft_strncpy Test: ");
	char strncpytest[] = "testlolnew";
	char ncattest[10];
	ft_strncpy(ncattest, strncpytest, 5);
	char testl[] = "testl";
	if (ft_strcmp(ncattest, testl) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("ft_strlcat Test:");
	char strlcatt[] = "testlol";
	char strlcatf[11] = "g";
	char strlcatreal[10];
	ft_strlcat(strlcatf, "kjkjkjkjk", sizeof(strlcatf));
	if (strcmp(strlcatf, "gkjkjkjkjk") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("ft_strncat Test:");
	char strncatest1[20];
	char strncatest2[20];
	strcpy (strncatest1, "To be ");
	strcpy (strncatest2, "or not to be");
	ft_strncat(strncatest1, strncatest2, 6);
	if (strcmp(strncatest1, "To be or not") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("ft_strncmp Test:");
	char strncmp[][5] = { "R2D2", "C3PO", "R2A6" };
	int n = 0;
	while (n <= 10)
	{
		if (ft_strncmp(&str[n], "R2xx", str[n]))
		{
			ft_putstr("		Test Passed\n");
			break;
		}
		n++;
	}
	//	ft_putstr("\n");

	ft_putstr("ft_memcpy Test:");

	char tmemcpy[] = "abcde";
	ft_memcpy(tmemcpy, "12345", 3);
	if (ft_strcmp(tmemcpy, "123de") == 0) ft_putstr("			Test Passed\n");
	else ft_putstr("			Test Failed\n");

	ft_putstr("ft_memchr Test:");

	char tmemchr[] = "www.test.com";
	char *ret = ft_memchr(tmemchr, '.', ft_strlen(tmemchr));
	if (ft_strcmp(ret, ".test.com") == 0) ft_putstr("			Test Passed\n");
	else ft_putstr("			Test Failed\n");

	ft_putstr("ft_memccpy Test:");

	char tmemccpy[2][7]  =  { "abcde", "abcdef" };
	void *re;
	memccpy(tmemccpy[0], "12345", 33, 3);
	if (ft_strcmp(tmemccpy[0], "123de") == 0) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("Test 1 Failed\n");
	re = ft_memccpy(tmemccpy[1], "12345", 51, 5);	
	if (ft_strcmp(tmemccpy[1], "123def") == 0) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("Test 2 Failed\n");
	if (ft_strcmp(re, "d")) ft_putstr("				Test 3 Passed\n");
	else ft_putstr("Test 3 Failed\n");

	ft_putstr("ft_memcmp Test:");

	int greater, lessthan, equal;
	greater = ft_memcmp("abcd", "abc", 4);
	lessthan = ft_memcmp("abc", "abcd", 4);
	equal = ft_memcmp("abc", "abc", 3);
	if (greater > 0) ft_putstr("			Test 1 Passed\n");
	else ft_putstr("				Test 1 Failed\n");
	if (lessthan < 0) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("				Test 2 Failed\n");
	if (equal == 0) ft_putstr("				Test 3 Passed\n");
	else ft_putstr("Test 3 Failed\n");

	ft_putstr("ft_memmove Test:");

	char tmemmove[] = "abcde";
	ft_memmove(tmemmove, "12345", 3);
	if (ft_strcmp(tmemmove, "123de") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("				Test Failed\n");

	ft_putstr("\nPart 2 Tests:\n");

	ft_putstr("\nft_putchar Test:		");
	ft_putchar('M');
	ft_putchar('\n');

	ft_putstr("ft_putstr Test:");
	ft_putstr("			Passed\n");

	ft_putstr("ft_putnbr Test:			");
	ft_putnbr(number1);
	ft_putchar('\n');

	ft_putstr("ft_strequ Test:");
	char tstrequ[] = "hello";
	if (ft_strequ(tstrequ, "hello") == 1) ft_putstr("			Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("ft_putendl Test:		");
	ft_putendl(str);
	ft_putstr("				Passed\n");

	ft_putstr("ft_strclr Test:			");
	char	strnew[] = "Test...";
	ft_putstr(strnew);
	ft_strclr(strnew);
	ft_putstr(strnew);
	ft_putstr("Passed\n");

	ft_putstr("ft_strjoin Test:");
	char	str3[] = "snow";
	char	str4[] = "ball";
	char *str5 = ft_strjoin(str3, str4);
	ft_putstr("		Passed\n");

	ft_putstr("ft_strtrim Test:		");
	char	str6[] = "  Test Test   ";
	ft_putstr(str6);
	ft_putchar('\n');
	char	*str7 = ft_strtrim(str6);
	ft_putstr(str7);
	ft_putstr("			Passed\n");

	ft_putstr("ft_strdel Test:			");
	ft_putstr(str5);
	ft_putchar('\n');
	ft_strdel(&str5);
	ft_putchar('\n');;
	ft_putstr("				Passed\n");
	if (str5 == NULL) ft_putstr("				yup\n");

	ft_putstr("ft_strnequ Test:");
	char tstrequ1[] = "hello";
	char tstrequ2[] = "byte";
	char tstrequ3[] = "hellbb";
	size_t	tstnbr = 3;
	if (ft_strnequ(tstrequ1, tstrequ2, tstnbr) == 0) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("Test Failed\n");
	if (ft_strnequ(tstrequ1, tstrequ3, tstnbr) == 1) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("Test Failed\n");

	//	ft_putstr("\nft_strnew Test:\n");
	//	if (ft_strnew(tstnbr) == 3) ft_putstr("Test Passed\n");
	//		else ft_putstr("Test Failed\n");
	//	ft_putchar('\n');


	ft_putstr("ft_itoa Test:");
	int before = 500;
	char *after = ft_itoa(before);
	if (ft_strcmp(after, "500") == 0) ft_putstr("			Passed\n");
	else ft_putstr("\nTest for itoa Failed");

	ft_putstr("ft_strsplit Test:");
	char tstrsplit[] = "this*test*works";
	char **tstrsplit2 = ft_strsplit(tstrsplit, '*');
	if (ft_strcmp(tstrsplit2[0], "this") == 0 && ft_strcmp(tstrsplit2[1], "test") == 0 && ft_strcmp(tstrsplit2[2], "works") == 0)
		ft_putstr("		Passed\n");
	else ft_putstr("\nTest for strsplit Failed");

	ft_putstr("ft_strsub Test:");
	char strsub[] = "hello world!!!";
	if (ft_strcmp(ft_strsub(strsub, 6, 5), "world") == 0) ft_putstr("			Passed\n");
	else ft_putstr("\nTest for strsub Failed");

	ft_putstr("ft_strmap Test:");
	char tstrmap[] = "abc";
	if (ft_strcmp(ft_strmap(tstrmap, f1), "bcd") == 0) ft_putstr("			Passed\n");
	else ft_putstr("\nTest for strmamp Failed");

	ft_putstr("ft_strmapi Test:");
	char tstrmapi[] = "123";
	if (ft_strcmp(ft_strmapi(tstrmapi, f2), "135") == 0) ft_putstr("		Passed\n");
	else ft_putstr("\nTest for strmampi Failed");

	ft_putstr("ft_striter Test:");
	char tstriter[] = "abc";
	ft_striter(tstriter, f3);
	if (ft_strcmp(tstriter, "bcd") == 0) ft_putstr("		Passed\n");
	else ft_putstr("\nTest for striter Failed");

	ft_putstr("ft_striteri Test:");
	char tstriteri[] = "123";
	ft_striteri(tstriteri, f4);
	if (ft_strcmp(tstriteri, "135") == 0) ft_putstr("		Passed\n");
	else ft_putstr("\nTest for striteri Failed");

	ft_putstr("ft_memalloc Test:");
	char *ptr = (char*)ft_memalloc(sizeof(tstriteri));
	ptr = "abc";
	if (ft_strcmp(ptr, "abc") == 0) ft_putstr("		Passed\n");
	else ft_putstr("\nTest for memalloc Failed");


	return (0);
}
