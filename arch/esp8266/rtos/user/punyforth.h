#ifndef __PUNYFORTH_H__
#define __PUNYFORTH_H__

int forth_div(int a, int b);
int forth_mod(int a, int b);

void forth_putchar(char c);
char forth_getchar();

void forth_start();
int forth_gpio_enable(int num, int dir);
void forth_gpio_write(int num, int value);

 
#endif