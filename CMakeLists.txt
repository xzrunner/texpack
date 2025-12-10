cmake_minimum_required(VERSION 3.16)

project(texpack)

################################################################################
# Source groups
################################################################################
set(Headers
    "texpack.h"
    "texpack_multi.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "texpack.c"
    "texpack_multi.c"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Headers}
    ${Sources}
)

include_directories(${CMAKE_SOURCE_DIR})

add_library(texpack STATIC ${ALL_FILES})
