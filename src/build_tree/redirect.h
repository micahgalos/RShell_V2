/**
 * @file redirect.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef REDIRECT_H
#define REDIRECT_H

/* -- Includes -- */
#include <string>
#include "base.h"

class Redirect : public Base{
    protected:
    Base *left, *right;

    public:
    Redirect(Base* left, Base* right, std::string command) : Base(command), left(left), right(right) {}
    virtual bool construct() = 0;
};
#endif /* REDIRECT_H */