#pragma once
#include "Desktop.h"
#include "DesktopBuilder.h"

class HpDesktopBuilder : public DesktopBuilder
{
public:
	void buildMonitor();
	void buildKeyboard();
	void buildMouse();
	void buildRam();
	void buildProcessor();
	void buildMotherBoard();


};

