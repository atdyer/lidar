//
// Created by tristan on 11/4/15.
//

#include "types/Point.h"

Point::Point() {

    this->x = 0.0;
    this->y = 0.0;
    this->z = 0.0;

}

Point::Point( double x, double y, double z ) {

    this->x = x;
    this->y = y;
    this->z = z;

}

void Point::print() const {

    std::cout << '(' << x << ", " << y << ", " << z << ')' << std::endl;

}
