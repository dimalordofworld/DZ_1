#ifndef _MAN_H
#define _MAN_H

#include <string.h>
using namespace std;

class Man
{
public:
	Man();
	Man(string, string, int);
	string FullName();
	bool IsElector(int);
	~Man();
private:
	string Name;
	string SurName;
	int BirthYear;
};

#endif
