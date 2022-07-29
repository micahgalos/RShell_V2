/**
 * @file or.h
 * @author Micah Galos (micahzugalos@gmail.com)
 * @brief Connect two commands with ||
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef OR_H
#define OR_H

/* -- Includes -- */
#include "../build_tree/connect.h"

class Or : public Connect{
    public:
    Or(Base* left, Base* right){
        this->left = left;
        this->right = right;
    }

    bool construct(){
        if ( !( left->construct() ) ) return right->construct();
        return true;
    }
};
#endif /* OR_H */