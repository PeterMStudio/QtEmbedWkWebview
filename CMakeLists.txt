project("WebViewDemo")
cmake_minimum_required(VERSION 3.16.0)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 17)
set(TOOL_NAME "WebViewDemo")

set(TOOL_DIR ${CMAKE_CURRENT_LIST_DIR})

list(APPEND QtModels Core Widgets Gui)
include(${TOOL_DIR}/qt-config.cmake)

file(GLOB TOOLS_SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}
        *.cpp
        *.h
        *.mm
        )

set(COMPILE_SOURCE ${BASE_SOURCE} ${TOOLS_SOURCE_FILES})

set(SOURCE_FILES ${COMPILE_SOURCE})

add_compile_options(-x objective-c++)
set(CMAKE_EXE_LINKER_FLAGS "-w -framework Foundation -framework AVFoundation -framework AppKit -framework WebKit")

add_executable(${TOOL_NAME} ${SOURCE_FILES} )

include(${TOOL_DIR}/qt-link.cmake)

