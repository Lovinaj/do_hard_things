#ifndef DHT_H
#define DHT_H

#include <stdio.h>

/* Prototypes for dht_questions.c */

const char *question(int num, int range);

/* Prototypes for dht_random.c */

int _isnumber(char str[]);
int _rand(int range);

/* Prototypes for dht_answers.c */

void options_a(void);
void options_b(void);
void options_c(void);
void options_d(void);

#endif /* DHT_H */
