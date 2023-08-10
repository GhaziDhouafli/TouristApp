# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TouristApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TouristApp_autogen.dir\\ParseCache.txt"
  "TouristApp_autogen"
  )
endif()
