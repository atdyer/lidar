//
// Created by tristan on 11/4/15.
//

#ifndef LIDAR_POINT_H
#define LIDAR_POINT_H

#include <iostream>

class Point {

    public:

        Point();
        Point( double x, double y, double z );

        void print() const;

    protected:

        double x;
        double y;
        double z;

};


#endif //LIDAR_POINT_H
