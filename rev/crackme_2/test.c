
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

char first[56];
int second;

fgets(first,47,stdin);

printf(first[0xb]);
printf((byte)(first[0xb]));
//(param_1[0xb] + -1 == (int)param_1[8]);
