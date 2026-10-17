#pragma once
#include "DesktopBuilder.h"

class DesktopDirector  {

private:
	DesktopBuilder* desktopBuilder;

public:
	DesktopDirector(DesktopBuilder* pDesktopBuilder) {
		desktopBuilder = pDesktopBuilder;
	}
	Desktop* buildDesktop() {
		desktopBuilder->buildMonitor();
		desktopBuilder->buildKeyboard();
		desktopBuilder->buildMouse();
		desktopBuilder->buildRam();
		desktopBuilder->buildProcessor();
		desktopBuilder->buildMotherBoard();
		return desktopBuilder->getDesktop();
	}

};