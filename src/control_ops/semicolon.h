/**
 * @file semicolon.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief Connect two commands with ;
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SEMICOLON_H
#define SEMICOLON_H

/* -- Includes -- */
#include "../build_tree/connect.h"

class Semicolon : public Connect{
    public:
    Semicolon(Base* left, Base* right){
        this->left = left;
        this->right = right;
    }

    bool construct(){
        left->construct();
        right->construct();
        return true;
    }
};
#endif /* SEMICOLON_H */