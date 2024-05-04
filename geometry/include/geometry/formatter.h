#pragma once
#include <fmt/format.h>

namespace geometry {
struct Rect;
struct Vector;
struct Point;
}

template<>
struct fmt::formatter<geometry::Point> : nested_formatter<double>{
    auto format(const geometry::Point& pt, format_context& ctx) const -> format_context::iterator;
};

template<>
struct fmt::formatter<geometry::Vector> : nested_formatter<double>{
    auto format(const geometry::Vector& pt, format_context& ctx) const -> format_context::iterator;
};

template<>
struct fmt::formatter<geometry::Rect> : nested_formatter<double>{
    auto format(const geometry::Rect& rc, format_context& ctx) const -> format_context::iterator;
};
