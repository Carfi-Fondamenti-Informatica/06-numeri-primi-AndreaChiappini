//
// Created by Andrea Chiappini on 03/12/22.
//

#include "lib.h"

int primo(int a, int b) {
    bool x=true;
    if (b!=1){
        if ((a % b ) != 0) {
            b--;
            x = primo(a, b);
        } else {
            x=false;
        }
    } else {
        x=true;
    }
    return x;
}

