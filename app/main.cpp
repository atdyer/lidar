//
// Created by tristan on 11/4/15.
//

#include <files/LAS.h>

int main( int argc, char** argv) {

    if ( argc == 2 ) {

        LAS las (argv[1]);

    } else {

        std::cout << "Pass in a .las file to read the header" << std::endl;

    }

    return 0;

}
