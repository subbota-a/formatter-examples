#pragma once
namespace geometry {
struct Vector;
struct Point {
    double x, y;
    friend Point operator+(const Point &point, const Vector &vector);
    friend Point &operator+=(Point &point, const Vector &vector);
    friend Point operator-(const Point &point, const Vector &vector);
    friend Point &operator-=(Point &point, const Vector &vector);
};
}
