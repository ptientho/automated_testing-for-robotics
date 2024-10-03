#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tortoisebot_waypoints::tortoisebot_waypoints_lib" for configuration ""
set_property(TARGET tortoisebot_waypoints::tortoisebot_waypoints_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tortoisebot_waypoints::tortoisebot_waypoints_lib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtortoisebot_waypoints_lib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS tortoisebot_waypoints::tortoisebot_waypoints_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_tortoisebot_waypoints::tortoisebot_waypoints_lib "${_IMPORT_PREFIX}/lib/libtortoisebot_waypoints_lib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
