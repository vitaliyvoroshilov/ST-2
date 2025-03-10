#include "circle.h"
#include "tasks.h"

double earthAndRope() {
    double earth_radius = 6378100.0;
    Circle earth_circle(earth_radius);

    double rope_length = earth_circle.getFerence() + 1.0;
    earth_circle.setFerence(rope_length);

    return earth_circle.getRadius() - earth_radius;
}

double poolFencePath() {
    double pool_radius = 3.0;
    double path_width = 1.0;
    double path_price = 1000.0;
    double fence_price = 2000.0;

    Circle pool_circle(pool_radius);
    double fence_totalcost = fence_price * pool_circle.getFerence();

    Circle path_circle(pool_radius + path_width);
    double path_area = path_circle.getArea() - pool_circle.getArea();
    double path_totalcost = path_price * path_area;

    return fence_totalcost + path_totalcost;
}