

#include "FunctionDefinitions.h"
void therapist()
{
    if (therapistTalkCode == 0)
    {
        cout << therapistName << ": OH GOD, ELON WHAT ARE WE GOING TO DO???\n";
        cout << "   WE AREN'T EXPECTED TO BE SELF SUSTAING FOR 2 MORE YEARS!!!\n";
        cout << "*breathing eratically and she is starting to sound incoherant.\n";
        cout << "Neuralace: I think it'd be best to calm her.\n";
        cout << "   Try to 'sympathize' with her.\n";
        choose(1, 0);
    }
    if (therapistTalkCode == 1)
    {
        cout << "Elon: I know it seems impossible now, but we can figure this out.\n";
        cout << "   We've just lost almost everything, but not everything.\n";
        cout << "   I'm going to do my best to get us sustainable, but right now I need your help.\n";
        cout << "   Do you have any advice on how to address the colony?\n";
        cout << "*breathing regularizing and she is returning to her senses.\n";
        cout << therapistName << ": What is there to say, the Earth is gone.\n";
        cout << "   Try to give them as much hope as you can.\n";
        cout << "   Good luck, I need to figure what I'm going to say as well.\n";
        cout << "   Thank you for consoling me.  Goodbye.\n\n";
        cout << "Neuralace: It seems we have to 'inspire' them to turn their minds away from this tragedy.\n";
        cout << "   I recomend for you to 'go to the broadcast station'.\n";
        choose(1, 1);
    }
    if (therapistTalkCode == 2)
    {
        //antagonize option
    }
}