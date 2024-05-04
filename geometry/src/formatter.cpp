#include "geometry/formatter.h"

#include "geometry/point.h"
#include "geometry/rect.h"
#include "geometry/vector.h"

#include <locale>
namespace {
char get_list_separator(fmt::format_context& ctx) {
    return ',' == std::use_facet<std::numpunct<char>>(ctx.locale().get<std::locale>()).decimal_point()
        ? ';'
        : ',';
}
}// namespace

auto fmt::formatter<geometry::Point>::format(const geometry::Point& pt, fmt::format_context& ctx) const -> format_context::iterator {
    return write_padded(ctx, [this, &pt, list_separator = get_list_separator(ctx)](auto out) {
        return fmt::format_to(out, "({}{} {})", nested(pt.x), list_separator, nested(pt.y));
    });
}

auto fmt::formatter<geometry::Vector>::format(const geometry::Vector& pt, fmt::format_context& ctx) const -> format_context::iterator {
    return write_padded(ctx, [this, &pt, list_separator = get_list_separator(ctx)](auto out) {
        return fmt::format_to(out, "[{}{} {}]", nested(pt.x), list_separator, nested(pt.y));
    });
}

auto fmt::formatter<geometry::Rect>::format(const geometry::Rect& rc, fmt::format_context& ctx) const -> format_context::iterator {
    return write_padded(ctx, [this, &rc, list_separator = get_list_separator(ctx)](auto out) {
        return fmt::format_to(out, "[({}{} {}) - ({}{} {})]", nested(rc.lt.x), list_separator, nested(rc.lt.y), nested(rc.rb.x), list_separator, nested(rc.rb.y));
    });
}
