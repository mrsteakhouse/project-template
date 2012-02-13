#include "equipment.h"

using namespace equipment;
using namespace std;

equip::equip()
{
	this->strenght=0;
	this->ressistence=0;
	this->mana=0;
	this->endurance=0;
	this->life=0;
	this->spellpower=0;
	this->agility=0;
	this->type=0;
	this->equipname='\0';
}

equip::~equip()
{
}
weapon::weapon()
{
	this->wpdmg=0;
	this->wpname='\0';
}
weapon::~weapon()
{
}