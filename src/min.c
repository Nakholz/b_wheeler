/*
** min.c in /home/arnhol_m/rendu/Supinfo/gcc/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Dec  7 02:25:14 2015 
** Last update Tue Jan  5 05:33:19 2016 
*/

#include "wheeler.h"

int	min(int *t, int n)
{
  int	sm,i = BUFF_SIZE;
  int	*new;

  new = occurrences(t, n);
  while (i >= 0){
      if ((i < sm) && (new[i] == 0 || new[i] <= new[sm]))
	sm = i;
      i--;
    }
  return (sm);
}
