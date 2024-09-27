cmake_minimum_required(VERSION 3.16)
project(NoteImp LANGUAGES CXX)

include(qt.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

include_directories(include)

set(PROJECT_SOURCES
    main.cpp
    include/UI/NoteImp.ui
    src/NoteImpView/MainWindow.cpp
    include/NoteImpView/MainWindow.h
    src/NoteImpModel/File.cpp
    include/NoteImpModel/File.h
    src/NoteImpController/AppController.cpp
    include/NoteImpController/AppController.h
)

set(PROJECT_RESOURCES include/UI/styles/MainWindow.qrc)

qt_add_executable(NoteImp
    ${PROJECT_RESOURCES}
    ${PROJECT_SOURCES}
)

set_target_properties(NoteImp
    PROPERTIES
        WIN32_EXECUTABLE TRUE
)

target_link_libraries(NoteImp
    PUBLIC
        Qt::Core
        Qt::Gui
        Qt::Widgets
)
