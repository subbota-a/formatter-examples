#include <fmt/format.h>
#include <geometry/formatter.h>
#include <geometry/rect.h>
#include <geometry/vector.h>
#include <geometry/point.h>

using namespace geometry;
int main() {
    //std::locale::global(std::locale("en_US.UTF8"));
    std::locale::global(std::locale("ru_RU.UTF8"));
    auto point1 = Point{10.1, 15.2};
    auto distance = Vector{15.4, 10.3};
    distance *= 5.9;
    auto point2 = point1 + distance;
    auto rect1 = Rect{point1, point2};
    fmt::print("  point1={:>35.1Lf}\n", point1);
    fmt::print("  point2={:>35.1Lf}\n", point2);
    fmt::print("distance={:>35.1Lf}\n", distance);
    fmt::print("    rect={:>35.1Lf}\n", rect1);
    return 0;
}
