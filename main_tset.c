/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <rdiederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:11:23 by rdiederi          #+#    #+#             */
/*   Updated: 2018/08/06 21:23:02 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_printf/ft_printf.h"

int main(void)
{
    
    ft_putstr("******************************************************************************\n");
    ft_putstr("Simple Test\n");
    ft_putstr("******************************************************************************\n");
    ft_putstr("%s\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%s|, Hello World\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    char s[13] = "Hello World";
    ft_printf("ft_printf = \n|%s|\n", s);
    ft_putstr("\n");
    printf("printf = \n|%s|\n", s);
    ft_putstr("------------------------------------------------------------------------------\n");


    ft_putstr("\n..............................................................................\n");
    ft_putstr("%p\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%p|, char *str = Hello World\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    char *str = "Hello";
    ft_printf("ft_printf = \n|%p|\n", str);
    ft_putstr("\n");
    printf("printf = \n|%p|\n\n", str);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n..............................................................................\n");
    int d = 10000;
    ft_putstr("%d\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%d|, 10000\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%d|\n", d);
    ft_putstr("\n");
    printf("printf = \n|%d|\n", d);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%%\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%%|\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%%|\n");
    ft_putstr("\n");
    printf("printf = \n|%%|\n\n");
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("******************************************************************************\n");
    ft_putstr("Less Simple Test\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("Multiple Convertions\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%s| |%d| |%s| |%d| |%p|, Hello World, 1, Hello Again, 2, char *lt = Hello\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    char *lt = "Hello";
    ft_printf("ft_printf = \n||%s| |%d| |%s| |%d| |%p|\n", "Hello World", 1, "Hello Again", 2, lt);
    ft_putstr("\n");
    printf("printf = \n|%s| |%d| |%s| |%d| |%p|\n", "Hello World", 1, "Hello Again", 2, lt);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("******************************************************************************\n");

    ft_putstr("\n******************************************************************************\n");
    ft_putstr("Slightly Complicated Test\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("%S\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%S| ,");
    ft_putstr("\xE2\x98\xA0\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%s|\n", "\xE2\x98\xA0");
    ft_putstr("\n");
    printf("printf = \n|%s|\n", "\xE2\x98\xA0");
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%D\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%D|, 123456\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%D|\n", 123456);
    ft_putstr("\n");
    printf("printf = \n|%D|\n\n", 123456);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%i\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%i|, 123456\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%i|\n", 123456);
    ft_putstr("\n");
    printf("printf = \n|%i|\n\n", 123456);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%o\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%o|, 255255\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%o|\n", 255255);
    ft_putstr("\n");
    printf("printf = \n|%o|\n\n", 255255);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%O\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%O|, 255255\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%O|\n", 255255);
    ft_putstr("\n");
    printf("printf = \n|%O|\n\n", 255255);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%u\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%u|, unsigned int l = 2148473650\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    unsigned int l = 2148473650;
    ft_printf("ft_printf = \n|%u|\n", l);
    ft_putstr("\n");
    printf("printf = \n|%u|\n\n", l);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%U\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%U|, unsigned int L = 2148473650\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    unsigned int L = 2148473650;
    ft_printf("ft_printf = \n|%U|\n", L);
    ft_putstr("\n");
    printf("printf = \n|%U|\n\n", L);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%x\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%x|, 255255\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%x|\n", 255255);
    ft_putstr("\n");
    printf("printf = \n|%x|\n\n", 255255);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%X\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%X|, 255255\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%X|\n", 255255);
    ft_putstr("\n");
    printf("printf = \n|%X|\n\n", 255255);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%c\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%c|, H\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%c|\n", 'H');
    ft_putstr("\n");
    printf("printf = \n|%c|\n\n", 'H');
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("\n...............................................................................\n");
    ft_putstr("%C\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%C|, H\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%C|\n", 'H');
    ft_putstr("\n");
    printf("printf = \n|%C|\n\n", 'H');
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("******************************************************************************\n");
    ft_putstr("\n******************************************************************************\n");
    ft_putstr("Complicated Test\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%c| |%d| |%d| |%c|,  Hello World, 1, 2, Hello Again\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%s| |%d| |%d| |%s|\n", "Hello World", 1, 2, "Hello Again");
    ft_putstr("\n");
    printf("printf = \n|%s| |%d| |%d| |%s|\n", "Hello World", 1, 2, "Hello Again");
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("******************************************************************************\n");

    ft_putstr("\n******************************************************************************\n");
    ft_putstr("More Complicated Test\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %-10d |,  int number = 1000\n");
    int number = 1000;
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n| %-10d |\n", number);
    ft_putstr("\n");
    printf("printf = \n| %-10d |\n", number);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %010d |,  int number = 1000\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n| %010d |\n", number);
    ft_putstr("\n");
    printf("printf = \n| %010d |\n", number);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %-#10x |,  int number = 1000\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n| %-#10x |\n", number);
    ft_putstr("\n");
    printf("printf = \n| %-#10x |\n", number);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %#x |,  int number = 1000\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n| %#x |\n", number);
    ft_putstr("\n");
    printf("printf = \n| %#x |\n", number);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %+10d |,  int number = 1000\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%+10d|\n", number);
    ft_putstr("\n");
    printf("printf = \n|%+10d|\n", number);
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("\n******************************************************************************\n");
    ft_putstr("More Stuff To Test\n");
    ft_putstr("******************************************************************************\n\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("hh\n");
    ft_putstr("------------------------------------------------------------------------------\n\n");
    
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%hhd|,  char a = 'a'\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    char a = 'a';
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%hhd|\n", a);
    ft_putstr("\n");
    printf("printf = \n|%hhd|\n", a);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%hhx|,  unsigned char u_a = 'a'\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    unsigned char u_a = 'a';
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%hhx|\n", a);
    ft_putstr("\n");
    printf("printf = \n|%hhx|\n", a);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("h\n");
    ft_putstr("------------------------------------------------------------------------------\n\n");
    
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%hd|,  short_int = 3648\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    short int short_int = 3648;
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%hd|\n", short_int);
    ft_putstr("\n");
    printf("printf = \n|%hd|\n", short_int);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%ld|,  lng = 123456789456123\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    long lng = 123456789456123;
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%ld|\n", lng);
    ft_putstr("\n");
    printf("printf = \n|%ld|\n", lng);
    ft_putstr("------------------------------------------------------------------------------\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("|%lld|,  llng = 9,223,372,036,854,775,807\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    long long llng = 9223372036854775807;
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n|%lld|\n", llng);
    ft_putstr("\n");
    printf("printf = \n|%lld|\n", llng);
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("******************************************************************************\n");


















































    ft_putstr("\n******************************************************************************\n");
    ft_putstr("And Finaly\n");
    ft_putstr("******************************************************************************\n");

    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("Test:\n");
    ft_putstr("| %.5d |,  int num = 123456789\n");
    ft_putstr("------------------------------------------------------------------------------\n");
    int num = 123456789;
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("\n");
    ft_printf("ft_printf = \n| %5d |\n", num);
    ft_putstr("\n");
    printf("printf = \n| %5d |\n", num);
    ft_putstr("------------------------------------------------------------------------------\n");
    ft_putstr("******************************************************************************\n");

    /*
     */
}