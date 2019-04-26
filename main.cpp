#include <iostream>
#include "Engine.hpp"

using namespace std;

int main()
{
    cout << "P L A Y E R" << endl << "Please input: " << endl << "1 for Rock" << endl << "2 for Paper" << endl << "3 for Scissors" << endl;
    Engine engine;
    cin >> engine.pInput;
    cout << "C O M P U T E R:" << endl;
    engine.ReturnWin(engine.pInput, engine.cInput);
    cout << engine.win << endl;
}
