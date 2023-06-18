#include<iostream>

int a = 2;
int b = 5;
int * pa = &a;
int * pb = &b;
auto finalval = *pa++*++*pb++;

std::count<< <<"\n";