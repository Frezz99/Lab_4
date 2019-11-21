#include <iostream>
#include "Plane.h"
using namespace std;

void Plane::EnterName()
{
	cout << "\n\n\nEnter Name: ";
	cin >> Name;
	cout << "\n";
}
void Plane::OutName()
{
	cout << "\nName= " << Name;
	cout << "\n";
}


void Plane::EnterObiemVlitrach()
{
	cout << "Objem baka: ";
	cin >> ObiemVlitrach;
	cout << "\n";

}
void Plane::OutObiemVlitrach()
{
	cout << "Objem baka=" << ObiemVlitrach;
}


void Plane::EnterPasashirov()
{
	cout << "Kilkit' Pasashirov: ";
	cin >> Pasashirov;
	cout << "\n";
}
void Plane::OutPasashirov()
{
	cout << "\nKilkist' Pasashirov=" << Pasashirov;
}