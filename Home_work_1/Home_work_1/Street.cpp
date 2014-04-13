#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include "Street.h"

string BaseError::GetError()
{
	return error;
}
	
BaseError::BaseError(string str)
{
	error = str;
}

BaseError::BaseError()
{
}

Street::Street(void)
{
	Name_Street = "";
	Homes_num = 0;
	NumberStreet = 0;
}

Street::Street(string sName , int Num)
{
	Name_Street = sName;
	Homes_num = 0;
	NumberStreet = Num;
}

Street::~Street(void)
{
}

int Street::GetNumberHome() const
{
	return Homes_num;
}

void Street::SetNumberHome(int Hnum)
{
	Homes_num = Hnum;
}

int Street::GetNumberMens() const
{
	return ;
}

void Street::SetNumberMens()
{

}

int Street::GetNumberApart() const
{
	return ;
}

void Street::SetNumberApart()
{

}

string Street::GetNameStreet() const
{
	return Name_Street;
}

void Street::SetNameStreet(string sName)
{
	Name_Street = sName;
}

int Street::GetNumbStreet() const
{
	return NumberStreet;
}

bool Street::Has(const Home &s)
{
	list<Home>::iterator i;

	for ( i = ListHomes.begin(); i != ListHomes.end(); i++)
	{
		if (i->getiHome() == s.getiHome)
			return true;
	}
	return false;
}

Home Street::Find(int iHome)
{
	list<Home>::iterator i;

	for ( i = ListHomes.begin(); i != ListHomes.end(); i++)
	{
		if (i->getiHome() == iHome)
			return *i;
	}
	throw NotFoundException();
}

void Street::Delete(const Home &s)
{
	list<Home>::iterator i;

	for ( i = ListHomes.begin(); i != ListHomes.end(); i++)
	{
		if (i == s)
			ListHomes.remove(s);
			return;
	}
	throw NotFoundException();
}

void Street::Append(const Home &s)
{
	if (Has(s))
		throw NotFoundException();
	ListHomes.insert(ListHomes.end(), s);
};
