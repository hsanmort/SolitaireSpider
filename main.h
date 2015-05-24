#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include "defs.h"

extern void init(char *);
extern void cleanup(void);
extern void getInput();
extern void draw(void);
extern void delay(unsigned int);

Input input;
Gestion jeu;

#endif // MAIN_H_INCLUDED
