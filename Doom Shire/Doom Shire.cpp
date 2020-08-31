// Doom Shire.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "FunctionDefinitions.h"


int main()
{
    start();
    choose(0,0);


}

void choose(int a,int b)
{
    string choice;
    getline(cin, choice);
    if (choice == "go to the therapist")
    {
        therapist();
    }
    if (choice == "go to the broadcast station")
    {
        broadcastStation();
    }

    if (a == 1)
    {
        if (b == 0)
        {
            if (choice == "sympathize")
                therapistTalkCode = 1;
            if (choice == "antagonize")
                therapistTalkCode = 2;
        }
    }
}

void start()
{
    cout << "DoomShire 05-26-2035\n";
    cout << "You are in your office.\n";
    cout << "Neuralace: Everyone has been notified of the nuclear destruction of Earth, Elon.\n";
    cout << "   You need to get ahead of this.\n";
    cout << "   Please, consult with the colony's therapist before you address DoomShire.\n";
    cout << "   Please, 'go to the therapist'\n";
    choose(0, 0);
}



void broadcastStation() 
{
    cout << "";
}

void randomEncounter()
{

    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
