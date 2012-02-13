#ifndef _main_functions_h_
#define _main_functions_h_
#include "user.h"
#include "equipment.h"
#include <string>

using namespace std;

namespace functions
{
	void StartClient();
	bool SetDefaultPlayerStats(classes::user *pointer);
	void ShowClassChooseInterface(classes::user *pointer);
	void SetPlayerName(classes::user *pointer);
	void GiveWeaponStats(classes::user *pointer, int type);
	void Levelup(classes::user *pointer);
}
#endif