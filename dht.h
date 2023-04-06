#ifndef DHT_H
#define DHT_H

#include <stdio.h>

/* Prototypes for dht_questions.c */

const char *question(int num);

/* Prototypes for dht_random.c */

int _isnumber(char str[]);
int _rand(int range);

/* Prototypes for dht_answers.c */

const char *options(int num, int num1);

#endif /* DHT_H */
