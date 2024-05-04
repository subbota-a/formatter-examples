#include "geometry/point.h"
#include "geometry/vector.h"

namespace geometry {

Point& operator+=(Point& point, const Vector& distance) {
    point.x += distance.x;
    point.y += distance.y;
    return point;
}

Point operator+(const Point& point, const Vector& distance) {
    Point r{point};
    r += distance;
    return r;
}

Point& operator-=(Point& point, const Vector& distance) {
    point.x -= distance.x;
    point.y -= distance.y;
    return point;
}

Point operator-(const Point& point, const Vector& distance) {
    Point r{point};
    r -= distance;
    return r;
}

}// namespace geometry
