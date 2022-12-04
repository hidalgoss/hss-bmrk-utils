
# Create Library
#---------------------------------------------------#
ADD_LIBRARY(hss_bmrk_utils SHARED 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/hss_bmrk_utils.h
    )

TARGET_INCLUDE_DIRECTORIES(hss_bmrk_utils
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

SET_TARGET_PROPERTIES(hss_bmrk_utils PROPERTIES LINKER_LANGUAGE CXX)
