// BuilderDesignPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DellDesktopBuilder.h"
#include "HpDesktopBuilder.h"
#include "DesktopDirector.h"

int main()
{
    HpDesktopBuilder *hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector director1 =  DesktopDirector(hpDesktopBuilder);
    DesktopDirector director2 = DesktopDirector(dellDesktopBuilder);

    Desktop* desktop1 = director1.buildDesktop();
    Desktop* desktop2 = director2.buildDesktop();

    desktop1->showSpecs();
    cout << "----------" << endl;
    desktop2->showSpecs();

   



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file //864156054
