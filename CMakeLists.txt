# Create Library
#---------------------------------------------------#
SET(CMAKE_CONFIGURATION_TYPES "Debug;Release;RelWithDebInfo"
    CACHE STRING "Configs" FORCE
)

SET(HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/include/hss_bmrk_utils.h
)

ADD_LIBRARY(hss_bmrk_utils
    ${HEADER_FILES}
    )

TARGET_INCLUDE_DIRECTORIES(hss_bmrk_utils PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

SET_TARGET_PROPERTIES(hss_bmrk_utils PROPERTIES
    LINKER_LANGUAGE CXX
    PUBLIC_HEADER "${HEADER_FILES}"
)

# Install steps.
#---------------------------------------------------#
install(TARGETS hss_bmrk_utils
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}/
 )
