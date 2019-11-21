#pragma once
using namespace std;
class Plane
{
private:
	char Name[20];
	int ObiemVlitrach;
	int Pasashirov;
public:
	int a;
	char b[100];

	void EnterName();
	void EnterObiemVlitrach();
	void EnterPasashirov();
	void OutName();
	void OutObiemVlitrach();
	void OutPasashirov();

	void InputA()
	{
		cout << "\nInput a=";
		cin >> a;
		cout << "\n";
	}
	void InputB()
	{
		cout << "\nInput b= ";
		cin >> b;
		cout << "\n";
	}
	void InputC()
	{
		cout << "\nInput c=";
		cin >> c;
		cout << "\n";
	}
	void InputD()
	{
		cout << "\nInput d=";
		cin >> d;
		cout << "\n";
	}
	void OutA()
	{
		cout << "\na=" << a;
	}
	void OutB()
	{
		cout << "\nb=" << b;
	}
	void OutC()
	{
		cout << "\nc=" << c;
	}
	void OutD()
	{
		cout << "\nd=" << d;
	}
	int getA()
	{
		return a;
	}
	char* getB()
	{
		return b;
	}
	int getC()
	{
		return c;
	}
	int get_d()
	{
		return d;
	}
	char* getName()
	{
		return Name;
	}
	int getObiemVlitrach()
	{
		return ObiemVlitrach;
	}
	char getPasashirov()
	{
		return Pasashirov;
	}
	Plane()
	{
		EnterName();
		EnterObiemVlitrach();
		EnterPasashirov();
		InputA();
		InputB();
		InputC();
		InputD();

	}
	~Plane()
	{
		cout << "\n Vse Rabotae)";
	}


protected:
	int c, d;
};