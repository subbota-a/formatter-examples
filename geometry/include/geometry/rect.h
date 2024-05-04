#pragma once
#include "point.h"

namespace geometry {
struct Vector;
struct Rect {
    Point lt, rb;
    friend Rect& operator+=(Rect& rect, const Vector& distance);
    friend Rect operator+(const Rect& rect, const Vector& distance);
};
}// namespace geometry
