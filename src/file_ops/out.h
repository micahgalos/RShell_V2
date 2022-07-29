/**
 * @file out.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef OUT_H
#define OUT_H

/* -- Includes -- */
#include <string>
#include "../build_tree/redirect.h"

class Out : public Redirect{
    public:
    Out(Base* left, Base* right, std::string command) : Redirect(left, right, command) {}
    bool construct(){
        // TO-DO
    }
};
#endif /* OUT_H */