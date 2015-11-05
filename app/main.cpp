//
// Created by tristan on 11/4/15.
//

#include <files/LAS.h>
#include "types/Point.h"

int main( int argc, char** argv) {

    if ( argc == 2 ) {

        LAS las (argv[1]);

    }

    return 0;

}
