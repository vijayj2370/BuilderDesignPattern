#pragma once
#include<iostream>

using namespace std;

class Desktop
{
private:
	string monitor;
	string keyboard;
	string mouse;
	string ram;
	string processor;
	string motherboard;


public:
	void setMonitor(string pMonitor);
	void setKeyboard(string Pkeyboard);
	void setMouse(string pMouse);
	void setRam(string pRam);
	void setProcessor(string pProcessor);
	void setMotherBoard(string pMotherBoard);

	void showSpecs();

};

