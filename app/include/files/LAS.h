//
// Created by tristan on 11/5/15.
//

// LAS 1.0 - http://www.asprs.org/a/society/committees/standards/asprs_las_format_v10.pdf
// LAS 1.1 - http://www.asprs.org/a/society/committees/standards/asprs_las_format_v11.pdf
// LAS 1.2 - http://www.asprs.org/a/society/committees/standards/asprs_las_format_v12.pdf
// LAS 1.3 - http://www.asprs.org/a/society/committees/standards/LAS_1_3_r11.pdf

#ifndef LIDAR_LAS_H
#define LIDAR_LAS_H

#include <bitset>
#include <cstdint>
#include <fstream>
#include <iostream>

#include "types/Exceptions.h"

class LAS {

    public:

        LAS();
        LAS( std::string file_path );

    private:

        struct header {

            char        file_signature [4]; // 4 bytes
            int16_t     file_source_id;     // 2 bytes
            int16_t     global_encoding;    // 2 bytes
            int32_t     project_id_1;       // 4 bytes
            int16_t     project_id_2;       // 2 bytes
            int16_t     project_id_3;       // 2 bytes
            char        project_id_4 [8];   // 8 bytes
            char        version_major;      // 1 byte (byte 25) should be converted to an int to test value
            char        version_minor;      // 1 byte (byte 26) should be converted to an int to test value

        };

        header        file_header;
        std::string   file_path;
        std::ifstream file_stream;

        void initialize();
        void readHeader();

};


#endif //LIDAR_LAS_H
