#include <iostream>
#include <cstdlib>
#include <string>
#include "client.h"
#include "user.h"
#include "main_functions.h"
#include "equipment.h"

using namespace std;
using namespace client;
using namespace classes;
using namespace functions;
using namespace equipment;
user player;

int main()
{
	//eingabe der klasse
	ShowClassChooseInterface(&player);

	//wenn eingabe keine 1, 2 oder 3 ist
	while(!SetDefaultPlayerStats(&player))
	{
		ShowClassChooseInterface(&player);
	}
	//name eingeben    
	SetPlayerName(&player);
	player.level = 1; //F: ne hab was getestet^^
	player.SetStats();

	StartClient(); //startet dann das hauptprogramm

	return 0;
}