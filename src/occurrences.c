/*
** occurrences.c in /home/arnhol_m/rendu/perso/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 22:36:22 2016 
** Last update Tue Jan  5 04:06:56 2016 
*/

#include "wheeler.h"

int	*occurrences(int *t, int n)
{
  int	*r;
  int	i = 0;
  int	j = 1;
  int	buff = 0;

  if ((r = malloc(sizeof(int) * BUFF_SIZE + 1)) == NULL)
    return (0);
  while (i < BUFF_SIZE ){
    while (j < n){
      if (t[j] == i)
	buff++;
      j++;
    }
    r[i] = buff;
    buff = 0;
    j = 0;
    i++;
  }
  return (r);
}
