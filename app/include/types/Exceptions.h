//
// Created by tristan on 11/5/15.
//

#ifndef LIDAR_EXCEPTIONS_H
#define LIDAR_EXCEPTIONS_H

#include <stdexcept>

class LAS_error : public std::runtime_error {

    public:

        explicit LAS_error( const std::string &error_string ) : runtime_error( error_string ) { }

};

#endif //LIDAR_EXCEPTIONS_H
