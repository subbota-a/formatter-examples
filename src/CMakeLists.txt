find_package(fmt CONFIG REQUIRED)

add_executable(fmt-example)

target_sources(fmt-example
    PRIVATE
    main.cpp
)

target_link_libraries(fmt-example
    fmt::fmt
    geometry
)
