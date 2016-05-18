/*
** affthat.c in /home/arnhol_m/rendu/Supinfo/arc/b_wheeler
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 23:44:14 2016 
** Last update Tue Jan  5 05:39:00 2016 
*/

#include "wheeler.h"

void	affthat(char *str, ...)
{
  va_list	ap;
  int		i = -1;

  va_start(ap, str);
  while(str[++i])
    ((str[i] == '%')?(i = flags(ap, str, i+1)):(affchar(str[i])));
  va_end(ap);
}

int	flags(va_list ap, char *str, int i)
{
  if(str[i] == 'd' || str[i] == 'i')
    affnbr(va_arg(ap, int));
  else if(str[i] == 'c')
    affchar(va_arg(ap, int));
  else if(str[i] == 's')
    affstr(va_arg(ap, char *));
  else if(str[i] == 't')
    afftab(va_arg(ap, int *));
  return (i++);
}
