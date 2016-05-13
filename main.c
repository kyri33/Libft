/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kioulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:49:49 by kioulian          #+#    #+#             */
/*   Updated: 2016/05/12 10:15:57 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     main(void)
{
	char word[5] = "Hello";
	char letter = 'H';
	char number= '1';
	int number1 = ft_atoi(&number);
	char str[] = ".:123abc$>.";
	int i = 0;

	ft_putstr("ft_putchar test:\n");
	ft_putchar('T');
	ft_putstr("\n");

	ft_putstr("\nft_putstr test:");
	ft_putstr("\nPassed\n");

	ft_putstr("\nft_atoi test:");
	if (number1 + 1 == 2)
	{
		ft_putstr("\nPassed\n");
	}
	else
	{
		ft_putstr("\n Failed\n");
	}

	ft_putstr("\nft_isdigit test:\n");

	number1 = '0';
	if (ft_isdigit(number1)) ft_putstr("Test 1 Passed");
	else ft_putstr("\nTest 1 Failed");
	number1 = '9';
	if (ft_isdigit(number1)) ft_putstr("\nTest 2 Passed");
	else ft_putstr("\nTest 2 Failed");
	if (ft_isdigit('l')) ft_putstr("\nTest 3 Failed");
	else ft_putstr("\nTest 3 Passed\n");

	ft_putstr("\nft_isalpha test:\n");
	if (ft_isalpha(letter) == 1)
	{
		ft_putstr("Passed\n");
	}
	else
	{
		ft_putstr("Failed\n");
	}

	ft_putstr("\nft_isalnum test:\n");
	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 1)
		{
			ft_putnbr(i);
			ft_putstr("Alpha Numeric test Passed\n");
			i++;
		}
		else if (ft_isalnum(str[i]) != 1)
		{
			ft_putnbr(i);
			ft_putstr("Non Alphanumeric Test Passed\n");
			i++;
		}
	}

	ft_putstr("\nft_isascii test:\n");
	if (ft_isascii(letter) == 1)
	{
		ft_putstr("Test 1 Passed\n");
	}
	else
	{
		ft_putstr("Test 1 Failed\n");
	}
	if (ft_isascii('~') == 1)
	{
		ft_putstr("Test 2 Passed\n");
	}
	else
	{
		ft_putstr("\nTest 2 Failed");
	}
	char lolnewchar[]= "¢";
	if (ft_isascii(lolnewchar[0])) ft_putstr("Test 3 Failed");
	else ft_putstr("Test 3 Passed\n");

	ft_putstr("\nft_isprint Test:\n");
	if (ft_isprint('p')) ft_putstr("Test 1 Passed\n");
	else ft_putstr("Test 1 Failed\n");
	if (ft_isprint('\n')) ft_putstr("Test 2 Failed\n");
	else ft_putstr("Test 2 Passed\n");

	ft_putstr("\nft_memset Test:\n");
	char strmem[] = "almost every programmer should know memset!";
	memset(strmem, '-',6);
	if (ft_strcmp(strmem, "------ every programmer should know memset!") == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strcmp Test:\n");
	char cmptest[] = "Hello World";
	char cmtest1[] = "Hello World";
	if (ft_strcmp(cmptest, cmtest1) == 0) ft_putstr("Test 1 Passed\n");
	else ft_putstr("Test 1 Failed\n");
	if (ft_strcmp("lol", "Faie") == +1) ft_putstr("Test 2 Passed\n");
	else ft_putstr("Test 2 Failed\n");

	ft_putstr("\nft_strchr Test:\n");
	char strnewlol[] = "This is a sample string";
	char * pch;
	printf ("Looking for the 's' character in \"%s\"...\n",strnewlol);
	pch=ft_strchr(strnewlol,'s');
	while (pch!=NULL)
	{
		if (pch-strnewlol+1 == 4)
		{
			puts("\nTest Passed\n");
			break;
		}
	}

	ft_putstr("\nft_strcpy Test:\n");
	char cmptestnewlol[] = "Hello";
	char *cpytest = (char *)malloc(sizeof(char *)*6);
	ft_strcpy(cpytest, cmptestnewlol);
	if (strcmp(cmptestnewlol, cpytest) == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strdup Test:\n");
	char s1[] = "Hello";
	char *new;
	new = ft_strdup(s1);
	if (strcmp(new, s1) == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strcat Test:\n");
	char str2[31];
	ft_strcpy(str, "these ");
	ft_strcat(str, "strings ");
	ft_strcat(str, "are ");
	ft_strcat(str, "concatenated.");
	if (ft_strcmp(str, "these strings are concatenated.") == 0) ft_putstr("Test Passed\n");
	char lentest[] = "hello";

	ft_putstr("\nft_strlen Test:\n");
	if (ft_strlen(lentest) == 5) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_tolower Test:\n");
	char tolowertest = 'A';
	tolowertest = ft_tolower(tolowertest);
	if (tolowertest == 'a') ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_toupper Test:\n");
	tolowertest = 'a';
	tolowertest = ft_toupper(tolowertest);
	if (tolowertest == 'A') ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strncpy Test:\n");
	char strncpytest[] = "testlolnew";
	char ncattest[10];
	ft_strncpy(ncattest, strncpytest, 5);
	char testl[] = "testl";
	if (ft_strcmp(ncattest, testl) == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strlcat Test:\n");
	char strlcatt[] = "testlol";
	char strlcatf[10];
	ft_strlcat(strlcatf, "kjkjkjkjkjkl", sizeof(strlcatf));
	if (ft_strcmp(strlcatf, "kjkjkjkjk") == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strncat Test:\n");
	char strncatest1[20];
	char strncatest2[20];
	strcpy (strncatest1, "To be ");
	strcpy (strncatest2, "or not to be");
	ft_strncat(strncatest1, strncatest2, 6);
	if (strcmp(strncatest1, "To be or not") == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strncmp Test:\n");
	char strncmp[][5] = { "R2D2", "C3PO", "R2A6" };
	int n = 0;
	while (n <= 10)
	{
		if (ft_strncmp(&str[n], "R2xx", str[n]))
		{
			ft_putstr("Test Passed\n");
			break;
		}
		n++;
	}
	ft_putstr("\n");

	ft_putstr("\nft_strjoin Test:\n");
	char cat1[] = "snow";
	char cat2[] = "ball";
	ft_putstr(ft_strjoin(cat1, cat2));

	ft_putstr("\nft_memcpy Test:\n");

	char tmemcpy[] = "abcde";
	ft_memcpy(tmemcpy, "12345", 3);
	if (ft_strcmp(tmemcpy, "123de") == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	//ft_putstr("\nft_memchr Test:\n");

	//char tmemchr[] = "www.test.com";
	//char *ret = ft_memchr(tmemchr, '.', ft_strlen(tmemchr));
	//if (ft_strcmp(ret, ".test.com") == 0) ft_putstr("Test Passed\n");
	//else ft_putstr("Test Failed\n");

	ft_putstr("\nft_memccpy Test:\n");

	char tmemccpy[2][7]  =  { "abcde", "abcdef" };
	void *re;
	memccpy(tmemccpy[0], "12345", 33, 3);
	if (ft_strcmp(tmemccpy[0], "123de") == 0) ft_putstr("Test 1 Passed\n");
	else ft_putstr("Test 1 Failed\n");
	re = ft_memccpy(tmemccpy[1], "12345", 51, 5);
	if (ft_strcmp(tmemccpy[1], "123def") == 0) ft_putstr("Test 2 Passed\n");
	else ft_putstr("Test 2 Failed\n");
	if (ft_strcmp(re, "d")) ft_putstr("Test 3 Passed\n");
	else ft_putstr("Test 3 Failed\n");

	//ft_putstr("\nft_memcmp Test:\n");

	//int greater, lessthan, equal;
	//greater = ft_memcmp("abcd", "abc", 4);
	//lessthan = ft_memcmp("abc", "abcd", 4);
	//equal = ft_memcmp("abc", "abc", 3);
	//if (greater > 0) ft_putstr("Test 1 Passed\n");
	//else ft_putstr("Test 1 Failed\n");
	//if (lessthan < 0) ft_putstr("Test 2 Passed\n");
	//else ft_putstr("Test 2 Failed\n");
	//if (equal == 0) ft_putstr("Test 3 Passed\n");
	//else ft_putstr("Test 3 Failed\n");

	//ft_putstr("\nft_memmove Test:\n");

	//char tmemmove[] = "abcde";
	//ft_memmove(tmemmove, "12345", 3);
	//if (ft_strcmp(tmemmove, "123de") == 0) ft_putstr("Test Passed\n");
	//else ft_putstr("Test Failed\n");

	ft_putstr("\nft_strequ Test:\n");

	char tstrequ[] = "hello";
	if (ft_strequ(tstrequ, "hello") == 1) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	ft_putstr("\nft_bzero Test:\n");
	char strbzero[10] = "llllllllll";
	char strbzerot[10] = "llllllllll";
	ft_bzero(strbzero, ft_strlen(strbzero));
	bzero(strbzerot, ft_strlen(strbzerot));
	if (strcmp(strbzero, strbzerot) == 0) ft_putstr("Test Passed\n");
	else ft_putstr("Test Failed\n");

	puts("\nft_strstr\n");
	char strstrstr[] ="This is a simple string";
	char strstrstrstr[] = "This is a sample string";
	char *strpch;
	strpch = ft_strstr(strstrstr,"simple");
	strncpy (strpch,"sample",6);
	  if (strcmp(strstrstr, strstrstrstr) == 0) puts("Test Passed\n");
	  else puts("Test Failed\n");

	return (0);
}
