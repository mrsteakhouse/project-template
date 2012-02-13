#ifndef _user_h_
#define _user_h_
#include <string>

using namespace std;

namespace classes
{
	class user
	{
		public:
			user();
			~user();
			int klasse;
			int stearke;
			int magie;
			int leben;
			int agiliteat;
			int zauberkraft;
			int level;
			int maxlevel; //J: Wenn mans erreicht hat, is halt stop mit exp und so
			int exp;
			int skillpoints; 
			string name;
			void SetStats();
		private:
	};
}
#endif