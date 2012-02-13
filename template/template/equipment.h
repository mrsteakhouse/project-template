#ifndef _equipment_h_
#define _equipment_h_

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

namespace equipment
{
	class equip
	{
		public:
			equip();
			~equip();
			int strenght;
			int ressistence;
			int mana;
			int endurance;
			int life;
			int spellpower;
			int agility;
			int type;
			string equipname;
		private:
	};

	class weapon
	{
		public:
			weapon();
			~weapon();
			int wpdmg;
			string wpname;
	}
}
#endif