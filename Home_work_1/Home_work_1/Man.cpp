#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include "Man.h"

Man::Man(string N,string S, int A)
{
	Name = N;
	SurName = S;
	Age = A;
}

Man::Man(void)
{
}

Man::~Man(void)
{
}
