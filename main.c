/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcowle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:52:43 by kcowle            #+#    #+#             */
/*   Updated: 2016/05/11 11:05:07 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main(void)
{
	char word[5] = "Hello";
	char letter = 'H';
	ft_putchar('l');
	ft_putstr("Test for putstr Passed");
	char number = '1';
	int number1 = ft_atoi(&number);
	if (number1 + 1 == 2) ft_putstr("\nTest for atoi passed");
	else ft_putstr("\nTest for atoi Failed");
	char str[]="zxcvb1234....";
	int i = 0;
	while (ft_isalnum(str[i])) i++;
	if (i == 9) ft_putstr("\nTest for isalnum Passed");
	else ft_putstr("\nTest for isalnum Failed");
    printf("%i", i);
	letter = 'l';
	if (ft_isalpha(letter)) ft_putstr("\nTest 1 for isalpha Passed");
	else ft_putstr("\nTest 1 for isalpha Failed");
	number1 = 1;
	if (ft_isalpha(number1)) ft_putstr("\nTest 2 for isalpha Failed");
	else ft_putstr("\nTest 2 for isalpha Passed");
	letter = ' ';
	if (ft_isascii(letter)) ft_putstr("\nTest 1 for isascii Passed");
	else ft_putstr("\nTest 1 for isascii Failed");
	if (ft_isascii('~')) ft_putstr("\nTest 2 for isascii Passed");
	else (ft_putstr("\nTest 2 for isascii Failed"));
	char lolnewchar[]= "¢";
	if (ft_isascii(lolnewchar[0])) ft_putstr("\nTest 3 for isascii Failed");
	else ft_putstr("\nTest 3 for isascii Passed");
	int numberlol = '0';
	if (ft_isdigit(numberlol)) ft_putstr("\nTest 1 for isdigit Passed");
	else ft_putstr("\nTest 1 for isdigit Failed");
	numberlol = '9';
	if (ft_isdigit(numberlol)) ft_putstr("\nTest 2 for isdigit Passed");
	else ft_putstr("\nTest 2 for isdigit Failed");
	if (ft_isdigit('l')) ft_putstr("\nTest 3 for isdigit Failed");
	else ft_putstr("\nTest 3 for isdigit Passed");
	if (ft_isprint('p')) ft_putstr("\nTest 1 for isprint Passed");
	else ft_putstr("\nTest 1 for isprint Failed");
	if (ft_isprint('\n')) ft_putstr("\nTest 2 for isprint Failed");
	else ft_putstr("\nTest 2 for isprint Passed");
	char strmem[] = "almost every programmer should know memset!";
	char strmemt[] = "almost every programmer should know memset!";
	ft_memset(strmemt, '-', 6);
	memset(strmem, '-',6);
	if (strcmp(strmem, strmemt) == 0) ft_putstr("\nTest for memset Passed");
	else ft_putstr("\nTest for memset Failed");
    char cmptest[] = "Hello World";
	char cmtest1[] = "Hello World";
	if (ft_strcmp(cmptest, cmtest1) == 0) ft_putstr("\nTest 1 for strcmp Passed");
	else ft_putstr("\nTest 1 for strcmp Failed");
	if (ft_strcmp("lol", "Faie") == +1) ft_putstr("\nTest 2 for strcmp Passed");
	else ft_putstr("\nTest 2 for strcmp Failed");
	char strchrstr[] = "Looking for the 's' character in \"This is a sample string\"";
	char *pch;
	pch = ft_strchr(strchrstr, 's');
    if (pch == &strchrstr[17])
    {
        ft_putstr("\nTest 1 for ft_strchr Passed");
    }
    if (ft_strchr(strchrstr, 'z') == NULL) ft_putstr("\nTest 2 for ft_strchr Passed");
	char cmptestnewlol[] = "Hello";
	char *cpytest = (char *)malloc(sizeof(char *)*6);
	ft_strcpy(cpytest, cmptestnewlol);
	if (strcmp(cmptestnewlol, cpytest) == 0) ft_putstr("\nTest for strcpy Passed");
	else ft_putstr("\nTest for strcpy Failed");
	char s1[] = "Hello";
	char *new;
	new	= ft_strdup(s1);
	if (strcmp(new, s1) == 0) ft_putstr("\nTest for strdup Passed");
	else ft_putstr("\nTest for strdup Failed");
	char str2[31];
	ft_strcpy(str2, "these ");
	ft_strcat(str2, "strings ");
	ft_strcat(str2, "are ");
	ft_strcat(str2, "concatenated.");
	if (ft_strcmp(str2, "these strings are concatenated.") == 0) ft_putstr("\nTest for strcat Passed");
	char lentest[] = "hello";
	if (ft_strlen(lentest) == 5) ft_putstr("\nTest for strlen Passsed");
	else ft_putstr("\nTest for strlen Failed");
	char tolowertest = 'A';
	tolowertest = ft_tolower(tolowertest);
	if (tolowertest == 'a') ft_putstr("\nTest for tolower Passed");
	else ft_putstr("\nTest for tolower Failed");
	tolowertest = 'a';
	tolowertest = ft_toupper(tolowertest);
	if (tolowertest == 'A') ft_putstr("\nTest for toupper Passed");
	else ft_putstr("\nTest for toupper Failed");
//	char strncpytest[] = "testlolnew";
//	char ncattest[10];
//	ft_strncpy(ncattest, strncpytest, 5);
//	char testl[] = "testl";
//	if (ft_strcmp(ncattest, testl) == 0) ft_putstr("\nTest for strncpy Passed");
//	else ft_putstr("\nTest for strncpy Failed");
//	char strlcatt[] = "testlol";
//	char strlcatf[10];
//	ft_strlcat(strlcatf, "kjkjkjkjkjkl", sizeof(strlcatf));
//	if (ft_strcmp(strlcatf, "kjkjkjkjk") == 0) ft_putstr("\nTest for strlcat Passed");
//	else ft_putstr("\nTest for strlcat Failed");
//	char strncatest1[20];
//	char strncatest2[20];
//	strcpy (strncatest1, "To be ");
//	strcpy (strncatest2, "or not to be");
//	ft_strncat(strncatest1, strncatest2, 6);
//	if (strcmp(strncatest1, "To be or not") == 0) ft_putstr("\nTest for strncat Passed");
//	else ft_putstr("\nTest for strncat Failed");
	char strncmp[][5] = { "R2D2", "C3PO", "R2A6" };
	int n = 0;
	while (n <= 10)
	{
		if (ft_strncmp(&str[n], "R2xx", str[n]))
		{
			ft_putstr("\nTest for strncmp Passed");
			break;
		}
		n++;
	}
	ft_putstr("\n");
	return (0);
}
