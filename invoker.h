//
//  invoker.h
//  command
//
//  Created by hilyah syahidah on 19/04/21.
//

#ifndef invoker_h
#define invoker_h
#pragma once
#include <stack>
#include "command.h"

class Invoker {
private:
    stack <Command*> Commands;
    stack <Command*> c;
public:
    void pushCommand(Command& command);
    void pushCommand2(Command& command);
    void popUndo();
    void popRedo();
};

void Invoker::pushCommand2(Command& command){
    c.push(&command);
    cout<<"A";
}

void Invoker::pushCommand(Command& command) {
    Commands.push(&command);
    cout << "Command is added" << endl;
}

void Invoker::popUndo() {
    if (Commands.empty() == true) {
        cout << "The stack is empty" << endl;
    }
    else {
        cout << "command popped" << endl;
        Commands.top()->undo();
        Commands.pop();
    }
}

void Invoker::popRedo() {
    if (c.empty() == true) {
        cout << "The stack is empty" << endl;
    }
    else {
        cout << "command popped" << endl;
        c.top()->excecute();
        c.pop();
    }
}


#endif /* invoker_h */
