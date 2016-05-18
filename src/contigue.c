/*
** contigue.c in /home/arnhol_m/rendu/perso/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Tue Jan  5 04:33:32 2016 
** Last update Tue Jan  5 17:31:50 2016 
*/

#include "wheeler.h"

int	linked(int *t, int size, int begin)
{
  int	label = begin;
  int	sbuff = 0;

  while ((begin <= size) && (t[begin] == t[label])){
    sbuff++;
    begin++;
  }
  return (sbuff);
}

int	compsize(int *t, int n)
{
  int	size = 0;
  int	i = -1;

  while (++i <= n){
    size += linked(t, n, i);
    i += linked(t, n, i);
  }
  return (size);
}
