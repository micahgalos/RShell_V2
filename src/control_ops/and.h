/**
 * @file and.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief Connect two commands with &&
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef AND_H
#define AND_H

/* -- Includes -- */
#include "../build_tree/connect.h"

class And : public Connect{
    public:
    And(Base* left, Base* right){
        this->left = left;
        this->right = right;
    }

    bool construct(){
        if( left->construct() ) return right->construct();
        return false;
    }    
};
#endif /* AND_H */