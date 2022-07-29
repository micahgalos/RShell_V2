/**
 * @file main.cpp
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief main rshell interface
 * 
 * This file contain's the program's
 * main() function.
 * 
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/* -- Includes -- */
#include <iostream>
#include <string>
#include "./src/rshell.h"

/**
 * @brief Handles user string inputs 
 *
 * This is the program's starting point.
 * Enter an input string to commence parsing a linux command.
 *  
 * @return Should not return
 */
int main(){
    RShell terminal;
    std::string user_input;

    while(1){
        std::cout << "$ ";
        getline(std::cin, user_input);
        if(user_input == "exit") break;
    
        terminal.obtainCommand(user_input);
        terminal.driveParser();
    }

    return 0;
}