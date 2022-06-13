// Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//All of these #include statements are setting up the program to make sure that everything functions the way that it should.

#include <iostream>
#include <string>
#include "Busch.h"
#include "PBR.h"
#include "Miller.h"
#include "Bud_Light.h"


using namespace std;



int main()
{
    int usr_in;
    int char_in;
    cout << "\n\nWelcome to battle of the beers! This is a game to determine what beer is the best beer.\n"
        "The contestants are PBR, Miller, Busch, and Bud Light.There is obviously one clear winner, \n"
        "Will you pick the right one?\n\n"<< endl;

    cout << "Would you like to play?\n"
        "Press 1 to play the amazing 'Battle of the Beers' game!\n" 
        "Press 2 if you are too afraid of dangerous battle... " << endl;

    cin >> usr_in;
    cout << "You entered  " << usr_in << endl;
    if (usr_in == 1) {
       std::cout << "Let the battle for the title of best beer BEGIN!!" << endl;
    }
    if (usr_in == 2) {
        cout << "Goodbye...." << endl;
        return 0;
    }
    
    cout << "How about we take a guess now and see if you can correctly guess the winner...\n"
        "Please input which Beer you think will win the throne of 'Best Beer' \n"
        "Your options are as follows, \n"
        "1 for PBR\n"
        "2 for Miller\n"
        "3 for Busch\n"
        "4 for Bud Light\n" << endl;
    cin >> usr_in;
    cout << "You entered " << usr_in << endl;
    if (usr_in == 1) {
        std::cout << "An excellent choice!" << endl;
    }

    if (usr_in == 2) {
        std::cout << "That one is decent, I suppose.." << endl;
    }

    if (usr_in == 3) {
        std::cout << "Pretty weak choice if we're being honest..." << endl;
    }

    if (usr_in == 4) {
        std::cout << "Ok then....." << endl;
    }

    cout << "Let's see if you guessed the right one!" << endl;
    PBR bc("PBR");
    Busch cd("Busch");
    Miller ab("Miller");
    Bud_Light lk("Bud Light");
    
    cout << "The first beer up to fight is " << bc.getName() << "\nIts health is "
        << bc.getHealth() << " and its attack points are " << bc.attack() << "!!\n\n" << endl;

    cout << "The second beer up to fight is " << cd.getName() << "\nIts health is "
        << cd.getHealth() << " and its attack points are " << cd.attack() << "!!\n\n" << endl;

    cout << "The third beer up to fight is " << ab.getName() << "\nIts health is "
        << ab.getHealth() << " and its attack points are " << ab.attack() << "!!\n\n" << endl;

    cout << "The last 'beer' up to fight is " << lk.getName() << "\nIts health is "
        << lk.getHealth() << " and its attack points are " << lk.attack() << "!!\n\n" << endl;
        
    cout << "Do you feel that any of the beers have an unfair advantage against the others?" << endl;
    cin>>usr_in 
    
}

