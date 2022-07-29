/**
 * @file in.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef IN_H
#define IN_H

/* -- Includes -- */
#include <string>
#include "../build_tree/redirect.h"

class In : public Redirect{
    public:
    In(Base* left, Base* right, std::string command) : Redirect(left, right, command) {}
    bool construct(){
        // TO-DO
    }
};
#endif /* IN_H */