cmake_minimum_required (VERSION 3.4)
IF(${CMAKE_BUILD_TYPE} MATCHES "Debug")
    SET(PROJ_BMRK_UTILS hss_bmrk_utilsd)
ELSE()
    SET(PROJ_BMRK_UTILS hss_bmrk_utils)
ENDIF()
PROJECT(${PROJ_BMRK_UTILS})

# Create Library
#---------------------------------------------------#
SET(HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/include/hss_bmrk_utils.h
)

ADD_LIBRARY(${PROJECT_NAME}
    ${HEADER_FILES}
    )

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES
    LINKER_LANGUAGE CXX
    PUBLIC_HEADER "${HEADER_FILES}"
)

# Install steps.
#---------------------------------------------------#
install(TARGETS ${PROJECT_NAME}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}/
    BUNDLE DESTINATION ${CMAKE_INSTALL_LIBDIR}/
 )
