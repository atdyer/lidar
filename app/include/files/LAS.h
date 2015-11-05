//
// Created by tristan on 11/5/15.
//

#ifndef LIDAR_LAS_H
#define LIDAR_LAS_H

#include <bitset>
#include <fstream>
#include <iostream>

#include "types/Exceptions.h"

class LAS {

    public:

        LAS();
        LAS( std::string file_path );

    private:

        std::string   file_path;
        std::ifstream file_stream;

        void initialize();
        void readHeader();

};


#endif //LIDAR_LAS_H
