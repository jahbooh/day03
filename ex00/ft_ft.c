/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:01:02 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 11:55:18 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}


void  ft_ft(int *nbr)
{
  int i;
  
  i = 42;
  *nbr = i;
}

int main(void)
{
  int c;
  
  c = 0;
  ft_ft(&c);
  return (0);
}
