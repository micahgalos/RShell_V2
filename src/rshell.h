/**
 * @file rshell.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef RSHELL_H
#define RSHELL_H

/* -- Includes -- */
#include<string>
#include<vector>
#include "./build_tree/base.h"
#include "./build_tree/command.h"

class RShell{
    private:
    std::string command;
    std::vector<std::string> tokens;

    public:
    void obtainCommand(std::string s);
    void driveParser();
    void eraseComment();
    void insertSpace();
    void parseCommand();
    void connectTokens();
};
#endif /* RSHELL_H */