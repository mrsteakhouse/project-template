#include "user.h"

using namespace classes;

user::user()
{
	this->klasse = 0;
	this->stearke = 0;
	this->magie =0;
	this->leben =0;
	this->agiliteat=0;
	this->zauberkraft=0;
	this->name='0';
	this->level=0;
	this->maxlevel=50;
	this->exp=0;
	this->skillpoints=0;
}
user::~user()
{
}
void user::SetStats()
{
	switch(this->klasse)
	{
		case 1: //Krieger
			this->agiliteat=6+(3*this->level);
			this->leben=80+(5*this->level);
			this->magie=10+(1*this->level);
			this->stearke=10+(5*this->level);
			this->zauberkraft=2+(1*this->level);
			break;
		case 2: //Magier
			this->agiliteat=9+(1*this->level);
			this->leben=50+(3*this->level);
			this->magie=25+(5*this->level);
			this->stearke=3+(1*this->level);
			this->zauberkraft=12+(5*this->level);
			break;
		case 3: //Bogenschuetze
			this->agiliteat=12+(5*this->level);
			this->leben=50+(5*this->level);
			this->magie=10+(1*this->level);
			this->stearke=9+(3*this->level);
			this->zauberkraft=5+(1*this->level);
			break;
	}
}