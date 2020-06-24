/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:01:02 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/24 15:35:24 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putint(int i)
{
  printf("%d",i);
}

void  ft_ft(int *nbr)
{
  int i;
  
  i = 42;
  *nbr = i;
}

/*int main(void)
{
  int c;
  
  c = 0;
  ft_ft(&c);
  ft_putint(c);
  return (0);
}\*
