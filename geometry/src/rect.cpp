#include "geometry/rect.h"

namespace geometry {

Rect& operator+=(Rect& rect, const Vector& distance) {
    rect.lt += distance;
    rect.rb += distance;
    return rect;
}

Rect operator+(const Rect& rect, const Vector& distance) {
    Rect r{rect};
    r += distance;
    return r;
}

}// namespace geometry
