/*
** basic.c in /home/arnhol_m/rendu/perso/b_wheeler/src
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Mon Jan  4 22:10:53 2016 
** Last update Tue Jan  5 05:38:48 2016 
*/

#include "wheeler.h"

void	affchar(char c)
{
  write(1, &c, 1);
}

void	affstr(char *str)
{
  int	i = -1;

  while (str[++i])
    affchar(str[i]);
}

void	affnbr(int nb)
{
  int	i = 1;

  if (nb < 0){
    nb *= -1;
    affchar('-');
  }
  while (nb >= (i * 10))
    i *= 10;
  while (i > 0){
    affchar(nb/i%10+48);
    i /= 10;
  }
}

void	affsin(char **tab)
{
  int   i = -1;

  while (tab[++i])
    affstr(tab[i]);
}

void	afftab(int *sin)
{
  int	i = -1;
  
  while (++i < BUFF_SIZE)
    affthat("[%d >> %d] ", sin[i] ,i);
}

int	getlen(char *str)
{
  int	i = 0;

  while (str[i])
    i++;
  return (i);
}

int	*getdup(int size)
{
  int	*new;

  if ((new = malloc(sizeof(int) * size)) == NULL)
    return (NULL);
  return (new);
}

int     getpow(char *str)
{
  int i = -1;
  int p = 0;

  while (str[p] == '+' || str[p] == '-')
    ((str[p] == '-')?(i*=1):(p++));
  return (i * p);
}

int     getnbr(char *str)
{
  int   nbr;
  int   signe = 1;
  int   first_nbr = getpow(str);

  ((first_nbr < 0)?((first_nbr *= -1) && (signe = -1)):(nbr=0));
  str += first_nbr;
  while (*str >= '0' && *str <= '9'){
    nbr *= 10;
    nbr += (*str - '0');
    str++;
  }
  return (nbr * signe);
}
