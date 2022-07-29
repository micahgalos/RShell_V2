/**
 * @file rshell.cpp
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/* -- Includes -- */
#include<string>
#include<sstream>
#include "rshell.h"

// Command Control
#include "./control_ops/and.h"
#include "./control_ops/or.h"
#include "./control_ops/semicolon.h"

// File Control
#include "./file_ops/doubleout.h"
#include "./file_ops/in.h"
#include "./file_ops/out.h"
#include "./file_ops/piping.h"

// TO-DO
void RShell::obtainCommand(std::string s){
    command = s;
}

void RShell::driveParser(){
    eraseComment();
    insertSpace();
    parseCommand();
}

/**
 * @brief 
 * 
 */
void RShell::eraseComment(){
    int n = command.size();
    for(int i = 0; i < n; i++){
        if(command[i] == '#'){
            command.erase(i, n - 1);
        }
    }
}

/**
 * @brief 
 * 
 */
void RShell::insertSpace(){
    int n = command.size();
    for(int i = 0; i < n; i++){
        if(command[i] == ';' || command[i] == '(' || command[i] == ')'){
            if(i > 0){
                (command[i - 1] != ' ') ? command.insert(i, " ") : command;
            }

            (command[i + 1] != ' ') ? command.insert(i + 1, " ") : command;

            i++;
        }
    }
}

/**
 * @brief 
 * 
 */
void RShell::parseCommand(){
    std::istringstream istream(command);
    std::string nodes;
    while(istream >> nodes) { tokens.push_back(nodes); }
}