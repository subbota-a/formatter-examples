#pragma once
namespace geometry {
struct Vector {
    double x, y;
    friend Vector operator+(const Vector& vector1, const Vector& vector2);
    friend Vector& operator+=(Vector& vector1, const Vector& vector2);
    friend Vector operator-(const Vector& vector1, const Vector& vector2);
    friend Vector& operator-=(Vector& vector1, const Vector& vector2);

    friend Vector& operator*=(Vector& vector, double k);
    friend Vector operator*(const Vector& vector, double k);
};
}// namespace geometry
