#include "geometry/vector.h"

namespace geometry {

Vector& operator+=(Vector& vector1, const Vector& vector2) {
    vector1.x += vector2.x;
    vector1.y += vector2.y;
    return vector1;
}

Vector operator+(const Vector& vector1, const Vector& vector2) {
    Vector r{vector1};
    r += vector2;
    return r;
}

Vector& operator-=(Vector& vector1, const Vector& vector2) {
    vector1.x -= vector2.x;
    vector1.y -= vector2.y;
    return vector1;
}

Vector operator-(const Vector& vector1, const Vector& vector2) {
    Vector r{vector1};
    r -= vector2;
    return r;
}

Vector& operator*=(Vector& vector, double k) {
    vector.x *= k;
    vector.y *= k;
    return vector;
}

Vector operator*(const Vector& vector, double k) {
    Vector r{vector};
    r *= k;
    return r;
}

}// namespace geometry
