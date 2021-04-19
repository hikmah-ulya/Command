//
//  player.h
//  command
//
//  Created by hilyah syahidah on 19/04/21.
//

#ifndef player_h
#define player_h
#include <iostream>
#include <string.h>
#pragma once
using namespace std;
class Player {
    string name;
    int score;

public:
    Player(){
        string s;
        cout<<"Masukkan nama pemain! "; cin>>s;
        score = 0;
        setName(s);
    }
    string getName() {
        return name;
    }
    void setName(string s) {
        name = s;
    }
};

#endif /* player_h */
