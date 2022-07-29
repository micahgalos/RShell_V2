/**
 * @file base.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief Parent class for rshell program
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef BASE_H
#define BASE_H

/* -- Includes -- */
#include <string>
#include <vector>

class Base{
    public:
    virtual bool construct() = 0;
    std::string command_input;
    std::vector<std::string> tokens;
    const std::string argument = tokens[0]; 
    int file_in = 0, file_out = 1;

    Base(){ command_input = ""; }

    Base(std::string command_input){
        this->command_input = command_input;
    }
};
#endif /* BASE_H */