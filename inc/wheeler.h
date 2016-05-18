/*
** wheeler.h in /home/arnhol_m/rendu/Supinfo/gcc/b_wheeler/inc
** 
** Made by Arnholz Martin
** Login : arnhol_m
** 
** Started on  Sun Dec  6 20:31:00 2015 
** Last update Tue Jan  5 05:32:49 2016 
*/

#ifndef WHEELER_H_
#define WHEELER_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#define  BUFF_SIZE 256

int	occ(int *, int , int );
int	min(int *, int );
int	contig(int *, int );
int     getnbr(char *);
int	getlen(char *);
int	getpow(char *);
int	*compress(int *, int );
int     *getdup(int );
int	*codage(int *, int );
int	*occurrences(int *, int );
int	flags(va_list , char *, int );
int	linked(int *, int , int);
int	compsize(int *, int);
void	affthat(char *, ...);
void	affchar(char );
void    affstr(char *);
void    affnbr(int );
void    afftab(int *);
void    affsin(char **);
void	affred(int , int , int );

#endif
