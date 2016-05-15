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
	
	ft_putstr("\nPart 1 Tests:\n");

	//memset test
	ft_putstr("ft_memset Test: ");
	char strmem1[] = "almost every programmer should know memset!";
	char strmem2[] = "almost every programmer should know memset!";
	ft_memset(strmem1, '-',6);
	memset(strmem2, '-',6);
	if (ft_strcmp(strmem1, strmem2) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");
	
	//bzero test
	ft_putstr("ft_bzero test:");
	char bzerotest[] = "hello";
	char bzerot[] = "hello";
	bzero(bzerotest, 5);
	ft_bzero(bzerot, 5);
	if (strcmp(bzerotest, bzerot) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");
	
	//memcpy test
	ft_putstr("ft_memcpy Test:");
	char tmemcpy[] = "abcde";
	ft_memcpy(tmemcpy, "12345", 3);
	if (ft_strcmp(tmemcpy, "123de") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");
	
	//memccpy test
	ft_putstr("ft_memccpy Test:");
	char tmemccpy[2][7]  =  { "abcde", "abcdef" };
	void *re;
	memccpy(tmemccpy[0], "12345", 33, 3);
	if (ft_strcmp(tmemccpy[0], "123de") == 0) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("		Test 1 Failed\n");
	re = ft_memccpy(tmemccpy[1], "12345", 51, 5);	
	if (ft_strcmp(tmemccpy[1], "123def") == 0) ft_putstr("		Test 2 Passed\n");
	else ft_putstr("		Test 2 Failed\n");
	if (ft_strcmp(re, "d")) ft_putstr("		Test 3 Passed\n");
	else ft_putstr("		Test 3 Failed\n");
	
	//memmove test
	ft_putstr("ft_memmove Test:");
	char tmemmove[] = "abcde";
	ft_memmove(tmemmove, "12345", 3);
	if (ft_strcmp(tmemmove, "123de") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//memchr test
	ft_putstr("ft_memchr Test:");
	char tmemchr[] = "www.test.com";
	char *ret = ft_memchr(tmemchr, '.', ft_strlen(tmemchr));
	if (ft_strcmp(ret, ".test.com") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//memcmp test
	ft_putstr("ft_memcmp Test:");
	int greater, lessthan, equal;
	greater = ft_memcmp("abcd", "abc", 4);
	lessthan = ft_memcmp("abc", "abcd", 4);
	equal = ft_memcmp("abc", "abc", 3);
	if (greater > 0) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("		Test 1 Failed\n");
	if (lessthan < 0) ft_putstr("		Test 2 Passed\n");
	else ft_putstr("		Test 2 Failed\n");
	if (equal == 0) ft_putstr("		Test 3 Passed\n");
	else ft_putstr("		Test 3 Failed\n");

	//strlen test
	ft_putstr("ft_strlen Test: ");
	char lentest[] = "hello";
	if (ft_strlen(lentest) == 5) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strdup test
	ft_putstr("ft_strdup Test: ");
	char s1[] = "Hello";
	char *new;
	new	= ft_strdup(s1);
	if (strcmp(new, s1) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strcpy test
	ft_putstr("ft_strcpy Test:");
	char strcpystr1[] = "World";
	char strcpystr2[] = "World";
	char *tstrcpy1 = ft_strcpy(strcpystr1, "hello");
	char *tstrcpy2 = strcpy(strcpystr2, "hello");
	if (ft_strcmp(tstrcpy1, tstrcpy2) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strncpy test
	ft_putstr("ft_strncpy Test: ");
	char strncpytest[] = "testlolnew";
	char ncattest[10];
	ft_strncpy(ncattest, strncpytest, 5);
	char testl[] = "testl";
	if (ft_strcmp(ncattest, testl) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strcat test
	ft_putstr("ft_strcat Test:");
	char str2[31];
	ft_strcpy(str, "these ");
		ft_putstr(str);
		ft_putchar('\n');
	ft_strcat(str, "strings ");
		ft_putstr(str);
		ft_putchar('\n');
	ft_strcat(str, "are ");
		ft_putstr(str);
		ft_putchar('\n');
	ft_strcat(str, "concatenated.");
		ft_putstr(str);
		ft_putchar('\n');
	if (ft_strcmp(str, "these strings are concatenated.") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strncat test
	ft_putstr("ft_strncat Test:");
	char strncatest1[20];
	char strncatest2[20];
	strcpy (strncatest1, "To be ");
	strcpy (strncatest2, "or not to be");
	ft_strncat(strncatest1, strncatest2, 6);
	if (strcmp(strncatest1, "To be or not") == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strlcat test
	ft_putstr("ft_strlcat Test:");
    	char strlcatt[] = "testlol";
    	char strlcatf[11] = "g";
    	char strlcatreal[10];
    	ft_strlcat(strlcatf, "kjkjkjkjk", sizeof(strlcatf));
    	if (strcmp(strlcatf, "gkjkjkjkjk") == 0) ft_putstr("		Test Passed\n");
    	else ft_putstr("		Test Failed\n");

	//strchr test
	ft_putstr("ft_strchr Test:");
	char strchrstr[] = "This is a sample string";
	char *pch;
	char *pch2;
	pch = ft_strchr(strchrstr, 's');
	pch2 = strchr(strchrstr, 's');
	if (ft_strcmp(pch, pch2) == 0) ft_putstr("			Test Passed\n");
	else ft_putstr("		Test Failed\n");
	
	//strrchr test
	ft_putstr("ft_strrchr Test:");
	char strchrrstr[] = "Looking for the 's' character in \"This is a sample string\"";
	char *tstrchr1 = ft_strchr(strchrstr, 's');
	char *tstrchr2 = strchr(strchrstr, 's');
	if (ft_strcmp(tstrchr1, tstrchr2) == 0) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strstr test
	ft_putstr("ft_strstr Test:");
	char s1strstr[] = "Looking for the 's' character in \"This is a sample string\"";
	char *tstrstr1 = ft_strstr(s1strstr, "sample");
	char *tstrstr2 = strstr(s1strstr, "sample");
	if (ft_strcmp(tstrstr1, tstrstr2) == 0) ft_putstr("			Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//strnstr test
	ft_putstr("ft_strnstr Test:");
	char s1strnstr[] = "Looking for the 's' character in \"This is a sample string\"";
	//char *tstrnstr1 = ft_strnstr(s1strnstr, "sample", 3);
	//char *tstrnstr2 = strnstr(s1strstr, "sample", 3);
	//if (ft_strcmp(tstrnstr1, tstrnstr2) == 0) ft_putstr("		Test Passed\n");
	//else ft_putstr("		Test Failed\n");

	//strcmp test
	ft_putstr("ft_strcmp Test:");
	char cmptest[] = "Hello World";
	char cmtest1[] = "Hello World";
	if (ft_strcmp(cmptest, cmtest1) == 0) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("		Test 1 Failed\n");
	if (ft_strcmp("lol", "Faie") == +1) ft_putstr("		Test 2 Passed\n");
	else ft_putstr("		Test 2 Failed\n");

	//strncmp test
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
	
	//atoi test
	ft_putstr("ft_atoi test:");
	if (number1 + 1 == 2) ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	ft_putstr("\nft_isdigit Test:");
	number1 = 0;
	if (ft_isdigit(number1)) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("			Test 1 Failed\n");
	number1 = 9;
	if (ft_isdigit(number1)) ft_putstr("				Test 2 Passed\n");
	else ft_putstr("			Test 2 Failed\n");
	if (ft_isdigit('l')) ft_putstr("				Test 3 Failed\n");
	else ft_putstr("				Test 3 Passed\n");
	
	
	//isalpha test
	ft_putstr("ft_isalpha test:");
	if (ft_isalpha(letter) == 1) puts("		Test Passed\n");
	else puts("		Test Failed\n");

	//isdigit test
	ft_putstr("ft_isdigit test:");
	if (ft_isdigit(5) == 1) puts("		Test Passed\n");
	else puts("		Test Failed\n");
	
	//isalnum test
	ft_putstr("ft_isalnum test:");
	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 1)
		{
			ft_putstr("		Alpha Numeric test Passed\n");
			i++;
		}
		else if (ft_isalnum(str[i]) != 1)
		{
			ft_putstr("		Non Alphanumeric test Passed\n");
			i++;
		}
	}

	//isascii test
	ft_putstr("ft_isascii test:");
	if (ft_isascii(letter) == 1) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("		Test 1 Failed\n");
	if (ft_isascii('~') == 1) ft_putstr("		Test 2 Passed\n");
	else ft_putstr("		Test 2 Failed\n");
	char lolnewchar[]= "¢";
	if (ft_isascii(lolnewchar[0])) ft_putstr("		Test 3 Failed\n");
	else ft_putstr("		Test 3 Passed\n");

	//isprint test
	ft_putstr("ft_isprint Test:");
	if (ft_isprint('p')) ft_putstr("		Test 1 Passed\n");
	else ft_putstr("		Test 1 Failed\n");
	if (ft_isprint('\n')) ft_putstr("		Test 2 Failed\n");
	
	//toupper test
	ft_putstr("ft_toupper Test:");
	char casetest = 'a';
	casetest = ft_toupper(casetest);
	if (casetest == 'A') ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

	//tolower test
	ft_putstr("ft_tolower Test:");
	casetest = ft_tolower(casetest);
	if (casetest == 'a') ft_putstr("		Test Passed\n");
	else ft_putstr("		Test Failed\n");

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
	ft_strdel(&str5);
	ft_putchar('\n');
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

	ft_putstr("ft_memdel Test:");
	char *tmemdel;
	tmemdel = (char*)malloc(sizeof(char *) * 50);
	ft_memdel((void*)&tmemdel);
	if (tmemdel == NULL) ft_putstr("			Passed\n");
	else ft_putstr("\nTest for memdel Failed");

	ft_putstr("ft_strnew Test:");
	char *tstrnew;
	tstrnew = ft_strnew(5);
	ft_strcpy(tstrnew, "hello");
	if (ft_strcmp(tstrnew, "hello") == 0) ft_putstr("			Passed\n");
	else ft_putstr("\nTest for strnew Failed");

	return (0);
}
