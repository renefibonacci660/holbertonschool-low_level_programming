#include "holberton.h"
/**
 * _abs - gives absolute value of r
 * Return: Always 0
 * @r: holds value of assigned in 6-main.c
**/

int _abs(int r)
{
	if (r <= -1)
	r = r * -1;
	return (r);
}
