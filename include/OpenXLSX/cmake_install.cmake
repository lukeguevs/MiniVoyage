# Install script for directory: /Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/OpenXLSX-Exports.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/IZipArchive.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCell.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCellIterator.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCellRange.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCellReference.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCellValue.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLColor.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLColumn.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLCommandQuery.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLComments.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLConstants.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLContentTypes.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLDateTime.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLDocument.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLException.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLFormula.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLIterator.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLMergeCells.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLProperties.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLRelationships.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLRow.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLRowData.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLSharedStrings.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLSheet.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLStyles.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLWorkbook.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLXmlData.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLXmlFile.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLXmlParser.hpp"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/headers/XLZipArchive.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX" TYPE FILE FILES "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/OpenXLSX.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lib" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/libOpenXLSX.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSX.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSX.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSX.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/OpenXLSXConfig.cmake"
    "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/OpenXLSX/OpenXLSXConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake"
         "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets-noconfig.cmake")
  endif()
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/adrientrahan/Documents/École/LOG2400/MiniVoyageLOG2400/include/OpenXLSX/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
