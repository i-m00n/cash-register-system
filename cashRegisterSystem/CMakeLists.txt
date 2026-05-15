cmake_minimum_required(VERSION 3.16)
project(cashRegisterSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets Sql PrintSupport)

set(SOURCES
    main.cpp
    cashRegisterSystem.cpp
    admin.cpp
    admin_cart.cpp
    cart.cpp
    user_cart.cpp
    login.cpp
    CreatingAccount.cpp
    customersForm.cpp
    ProductsForm.cpp
    navigationBar.cpp
    database.cpp
    sqlite/sqlite3.c
)

set(HEADERS
    cashRegisterSystem.h
    database.h
)

set(UI_FILES
    cashRegisterSystem.ui
)

set(QRC_FILES
    cashRegisterSystem.qrc
)

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${UI_FILES}
    ${QRC_FILES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt5::Widgets
    Qt5::Sql
    Qt5::PrintSupport
)

# SQLite needs these
if(UNIX)
    target_link_libraries(${PROJECT_NAME} PRIVATE dl pthread)
endif()

if(MSVC)
    add_compile_options(/utf-8)
endif()