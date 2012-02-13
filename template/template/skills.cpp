#include "skills.h"

using namespace skill;
using namespace equip;

warskills::warskills()
{
	this->nahdmg = 2*this->level; //J: -> skills.h nahwpdmg wird später eingefügt
}

warskills::~warskills()
{
}

magskills::magskills()
{
	this->magdmg = 2*this->level;
}

magskills::~magskills()
{
}

agiskills::agiskills()
{
	this->ferndmg = 2*this->level;
}

agiskills::~agiskills()
{
}