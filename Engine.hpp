#include <iostream>
#include <cstdlib>

using namespace std;

class Engine
{
public:
    int cInput, pInput;
    string win;
    void ReturnWin(int pInput, int cInput)
    {
        cInput = (rand() % 3) + 1;
        if (cInput = 1)
        {
            cout << "Rock!" << endl;
        }
        else if (cInput == 2)
        {
            cout << "Paper!" << endl;
        }
        else
        {
            cout << "Scissors!" << endl;
        }
        if (pInput % 3 + 1 == cInput)
        {
            win = "Lose!";
        }
        else if (cInput % 3 + 1 == pInput)
        {
            win = "Win!";
        }
        else
        {
            win = "Tie!";
        }
    }
};
