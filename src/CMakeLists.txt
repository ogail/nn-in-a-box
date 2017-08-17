
# Specify .cpp files
set(TARGET_NAME nn-in-a-box)
file(GLOB SRC
    *.h
    *.hpp
    *.cpp
    mnist/include/*.hpp
)

# Build an executable from main.cpp and all specified source files
add_executable(${TARGET_NAME} main.cpp ${SRC})
target_link_libraries(${TARGET_NAME} ${LIBRARIES})

# Build a library from all specified source files
# This is required for using googletest
add_library(${TARGET_NAME}-lib ${SRC})
target_link_libraries(${TARGET_NAME}-lib ${LIBRARIES})
set_target_properties(${TARGET_NAME}-lib PROPERTIES OUTPUT_NAME nn-in-a-box)

# vim:ft=cmake


