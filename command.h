//
//  command.h
//  command
//
//  Created by hilyah syahidah on 19/04/21.
//

#ifndef command_h
#define command_h

#pragma once
class Command {
public:
    virtual void undo() = 0;
    virtual void excecute() = 0;
};

#endif /* command_h */
