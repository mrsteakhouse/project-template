#include "main_functions.h"
#include "user.h"
#include "equipment.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace functions;
using namespace classes;
using namespace std;
using namespace equipment;

void functions::StartClient()
{

}
bool functions::SetDefaultPlayerStats(classes::user *pointer)
{
	switch(pointer->klasse)
	{
		case 1: //Krieger
			return true;
			break;
		case 2:	//Magier
			return true;
			break;
		case 3: //Bogenschuetze
			return true;
			break;
		default:
			return false;
			break;	
	}
}

void functions::ShowClassChooseInterface(classes::user *pointer)
{
	system("cls");
	cout << "Willkommen im Testprojekt!" << endl << endl
		 << "Weahle deinen Held! " << endl
		 << "\n\nKrieger\t\t-> [1]"
		 << "\nMagier\t\t-> [2]"
		 << "\nBogenschuetze\t-> [3]\n"
		 << "Held: ";
	cin >> pointer->klasse;
}
void functions::SetPlayerName(classes::user *pointer)
{
	//Eingabepuffer leeren
	cin.seekg(0,std::ios::end);
	cin.clear();
	char buff='\0';
	cout << "Wie ist dein Name?: ";
	getline(cin, pointer->name);
}
void functions::GiveWeaponStats(classes::user *pointer, int type)
{
	pointer->SetStats();
	switch(type)
	{
		case 1: //Schwert
			pointer->stearke+=5;
			pointer->zauberkraft-=2;
			break;
		case 2: //Axt
			pointer->agiliteat-=3;
			pointer->stearke+=7;
			pointer->zauberkraft-=3;
			break;
	}
}
void functions::Levelup(classes::user *pointer) //berechnung des lvlup und der neuen xp
{ 
	if(pointer->exp >= (32*(pointer->level))*2)
	{
		pointer->level++;
		pointer->exp=0;
	}
}