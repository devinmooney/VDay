#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <mmsystem.h>


using namespace std;

void printValentine(int);

char answer = ' ';

int main(){
    cout << "Is today Valentine's Day? y/n" << endl;
    cin  >> answer;

    if (answer == 'n'){
        cout << "Then screw all the mushy stuff. Go be a badass.";
        PlaySound(TEXT("C:\\Users\\Firebeard\\Desktop\\VDay\\Attila_MiddleFingersUp.wav"), NULL, SND_SYNC);
    }
    else if (answer == 'y'){
        printValentine(80);
        cout << "I will always be your valentine. I love you." << endl;
        PlaySound(TEXT("C:\\Users\\Firebeard\\Desktop\\VDay\\JohnLegend_AllOfMe.wav"), NULL, SND_SYNC);
    }
}

void printValentine(int width){
    int magic_width = 0;
    magic_width =  (width/2) - (38/2) + 38;

    cout << "\n"
         << left  << setfill('*') << setw( width ) << "*"

         << right << setfill(' ') << setw( magic_width ) << "____   ____         " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|   |     /\\     |    \\ |    \\ \\     /" << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|   |    /  \\    |    | |    |  \\   / " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|___|   /____\\   |____/ |____/   \\ /  " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|   |  /      \\  |      |         |   " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|   | /        \\ |      |         |   " << "\n";

    magic_width = (width/2) - (74/2) + 74;

    cout << right << setfill(' ') << setw( magic_width ) << "_____         _______            _____  /   ____ " << "\n"
         << right << setfill(' ') << setw( magic_width ) << " \\        / /\\     |      |      |\\    |    |    | |\\    | |          /     " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "  \\      / /  \\    |      |      | \\   |    |    | | \\   | |          \\___  " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "   \\    / /____\\   |      |---   |  \\  |    |    | |  \\  | |---           \\ " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "    \\  / /      \\  |      |      |   \\ |    |    | |   \\ | |              | " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "     \\/ /        \\ |_____ |_____ |    \\|    |    | |    \\| |_____     ____/ " << "\n";

    magic_width = (width/2) - (22/2) + 22;

    cout << right << setfill(' ') << setw( magic_width ) << "___                  " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|   \\     /\\   \\     /" << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|    \\   /  \\   \\   / " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|    |  /____\\   \\ /  " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|    / /      \\   |   " << "\n"
         << right << setfill(' ') << setw( magic_width ) << "|___/ /        \\  |   " << "\n"

         << left  << setfill('*') << setw( width ) << "*";
}
