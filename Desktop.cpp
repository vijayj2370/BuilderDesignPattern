#include "Desktop.h"

using namespace std;

void Desktop::setMonitor(string pMonitor) {
	monitor = pMonitor;
}

void Desktop::setKeyboard(string pkeboard) {
	keyboard = pkeboard;
}

void Desktop::setMouse(string pmouse) {
	mouse = pmouse;
}

void Desktop::setRam(string pram) {

	ram = pram;
}

void Desktop::setProcessor(string pprocessor) {
	processor = pprocessor;
}

void Desktop::setMotherBoard(string pmotherboard) {
	motherboard = pmotherboard;
}


void Desktop::showSpecs() {

	cout << "Monitor is " << monitor << endl;
	cout << "keyboard is" << keyboard << endl;
	cout << "mouse is  " << mouse << endl;
	cout << "Ram is " << ram << endl;
	cout << "Processor is " << processor << endl;
	cout << "Motherboard is " << motherboard << endl;

}