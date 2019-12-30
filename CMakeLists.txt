#####################################################################
# simple AVR library
#####################################################################
add_subdirectory(communication)
file(GLOB application
    "*.hpp"
    "*.h"
    "*.cc"
    "*.cpp")
if(BUILD_TYPE STREQUAL "TARGET")
    add_avr_library(
    application_code
    ${application}
    )
else()
    add_library (
        pc-application_code
        ${application}
    )
endif()
