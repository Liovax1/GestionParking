cmake_minimum_required(VERSION 3.0.2)
project(testProjet)

#1/3-Ajouter les dossiers/fichiers.cpp du projet
set(SRCS2
    ${CMAKE_SOURCE_DIR}/Date/date.cpp

)

#2/3-Ajouter les dossiers/fichiers.h du projet
set(HEADERS2

    ${CMAKE_SOURCE_DIR}/Date/date.h
)

#3/3-Ajouter les dossiers/fichiers.cpp des tests unitaires
set(TST_SRCS
    1-TU_client_parking_E1.cpp
    1-TU_voiture_E1.cpp
    2-TU_composition_CP_Voiture_E2.cpp
    3-TU_Date.cpp
    testProjet.cpp
)

include(CTest)
include(${CMAKE_BINARY_DIR}/conan-dependencies/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)
add_executable(${PROJECT_NAME} ${TST_SRCS} ${SRCS2} ${HEADERS2})
target_link_libraries(${PROJECT_NAME} CONAN_PKG::catch2)

#DEBUT - Ancienne configuration de catch2
#target_link_libraries(${PROJECT_NAME} ${CMAKE_PROJECT_NAME})
#find_package(Catch2 REQUIRED)
#target_link_libraries(testProjet PRIVATE Catch2::Catch2)
#target_include_directories(testProjet PRIVATE ${CMAKE_SOURCE_DIR})
#enable_testing()
#include(Catch)
#catch_discover_tests(testProjet)
#FIN - Ancienne configuration de catch2

add_test(NAME testPro COMMAND ${PROJECT_NAME})
