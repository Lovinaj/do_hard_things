#!/bin/bash

# script to compile and link the projects source files
gcc ../dht/dht.c ../lib/dht_lib.c ../questions/dht_questions_c.c ../answers/dht_answers_c.c -o ../dht/dht.out
