#ifndef _skills_h_
#define _skills_h_

#include <iostream>
using namespace std;

namespace skill //J: Spezifische Skills werden später gemacht
{
	class warskills
	{
		public:
			warskills();
			~warskills();
			int nahdmg;
			int nahwpdmg; //J: Der nahkampfschaden des Kriegerst zusammen mit dem Waffenschaden
		private:
	};
	
	class magskills
	{
		public:
			magskills();
			~magskills();
			int magdmg;
			int magwpdmg;
		private:
	};

	class agiskills
	{
		public:
			agiskills();
			 ~agiskills();
			int ferndmg;
			int fernwpdmg;
		private:
	};

}
#endif