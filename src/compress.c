/*
** compress.c in /home/arnhol_m/rendu/perso/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Tue Jan  5 04:45:21 2016 
** Last update Tue Jan  5 05:33:54 2016 
*/

#include "wheeler.h"

int	*compress(int *t, int n)
{
  int	*new;
  int	k = min(t, n);
  int	i,tmp = -1;
  int	o,save = 0;

  if ((new = malloc(sizeof(int) * compsize(t, n))) == NULL)
    return (NULL);
  while (++i <= compsize(t, n))
    {
    if ((tmp = linked(t, n, i)) > 1)
      {
	new[i] = k;
	i++;
	o = tmp - 1;
	while (tmp >= 0){
	  new[i] = o; 
	  i++;
	  tmp--;
	}
	new[i] = t[save];
      }
    else if ((linked(t, n, i)) == 1)
      new[i] = t[save];
    save++;
    }
  return (new);
}
