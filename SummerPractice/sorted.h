#define _CRT_SECURE_NO_WARNINGS
#ifndef sorted_H
#define sorted_H
#include <stdio.h>
#include <locale.h>
void rand_array(int* mass, int n);
void out_array(int* mass, int n);
void SortBySelection(int* mass, int n);
void SortByInsertion(int* mass, int n);
void SortByBubble(int* mass, int n);
#endif
