project(geometry)

find_package(fmt CONFIG REQUIRED)

add_library(geometry STATIC)

target_sources(geometry
    PUBLIC FILE_SET HEADERS BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include FILES
    include/geometry/rect.h
    include/geometry/point.h
    include/geometry/vector.h
    include/geometry/formatter.h
    PRIVATE
    src/vector.cpp
    src/point.cpp
    src/rect.cpp
    src/formatter.cpp
)

target_link_libraries(geometry
    fmt::fmt
)
