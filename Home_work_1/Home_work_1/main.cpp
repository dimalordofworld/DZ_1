#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string.h>

#include "street.h"

using namespace std;

int main()
{
	try
	{
		Home H("a", 1, 2, 4);
		Man M1("Foma","Kurochkin",1990);
		H.AddMan(M1);
		Man M2("Petek","Bulkin",1988);
		H.AddMan(M2);
		Man M3("Denisich","Jlobov",1994);
		H.AddMan(M3);
		Man M4("Dimon","Vatrushkin",1992);
		H.AddMan(M4);
		Street S("Lenina",1);
		S.Append(H);
	}
	catch(Street::ValueExistException er)
	{
		cout << er.GetError().c_str();
	}
	catch(Street::NotFoundException er)
	{
		cout << er.GetError().c_str();
	}
}