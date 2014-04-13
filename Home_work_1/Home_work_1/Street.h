#ifndef _STREET_H
#define _STREET_EH

#include "Home.h"
using namespace std;

class BaseError
{
private:
	string error;
public:
	virtual string GetError();
	BaseError(string str);
	BaseError();
};

class Street
{
public:
	Street(void);
	Street(string sName , int Num);
	Street(Street & S);

	~Street(void);

	bool Has(const Home &s);
	Home Find(int iHome);
	void Append(const Home &s);
	void Delete(const Home &s);
	
	int GetNumberHome() const;
	void SetNumberHome(int Hnum);
	
	int GetNumberMens() const;
	void SetNumberMens();
	
	int GetNumberApart() const;
	void SetNumberApart();
	
	string GetNameStreet() const;
	void SetNameStreet(string sName);
	
	int GetNumbStreet() const;
	void SetNumbStreet(int Num);

	class ValueExistException : public BaseError 
	{
	public:
		ValueExistException()
		{
			BaseError("Such element already exists");
		}
	};
	class NotFoundException  : public BaseError 
	{
	public:
		NotFoundException()
		{
			BaseError("Such element don't exists");
		}
	};

private:
	string Name_Street;
	int Homes_num;
	int NumberStreet;
	list<Home> ListHomes;
	Home* List;
};

#endif

