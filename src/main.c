/*
** main.c in /home/arnhol_m/rendu/Supinfo/gcc/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Sun Dec  6 20:29:59 2015 
** Last update Tue Jan  5 05:42:20 2016 
*/

#include "wheeler.h"

int	main(int ac, char **av)
{
  int	*t;
  int	*rep1,*rep4;
  int	rep2,rep3;
  int	i = 0;

  t = getdup(ac);
  while (av[++i])
    t[i] = getnbr(av[i]);
  rep1 = occurrences(t, ac);
  rep2 = min(t, ac);
  rep3 = compsize(t, ac);
  rep4 = compress(t, ac);
  //affthat("rep1 = %t \n", rep1);
  //affthat("rep2 = %d \n", rep2);
  //affthat("rep3 = %d \n", rep3);
  i = -1;
  while (++i <= rep3)
    affnbr(rep4[i]);
  return (0);
}
