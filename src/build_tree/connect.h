/**
 * @file connect.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief Subclass of Base
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef CONNECT_H
#define CONNECT_H

/* -- Includes -- */
#include "base.h"

class Connect : public Base{
    protected:
    Base *left, *right;

    public:
    virtual bool construct() = 0;
    std::string precedence;
    std::vector<Connect> precedence_cmd;

    Connect() { left = 0, right = 0; }
    Connect(const std::string &paren_str){ precedence = paren_str; }
};
#endif /* CONNECT_H */