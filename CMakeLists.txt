cmake_minimum_required(VERSION 3.18)

project(GeometricShapes)

add_library(GeometricShapes
	src/Constants.h
	src/GeometricShape.h
	src/PolygonInterface.h
    src/Circle.h
    src/Circle.cpp
	src/Square.h
    src/Square.cpp
	src/Rectangle.h
	src/Rectangle.cpp
	src/ShapeFactory.h
	src/ShapeFactory.cpp
	src/ShapeInterface.h
	src/UnsupportedShapeException.h
	src/WrongParamCountException.h
	src/Ai.h
		src/Ai.cpp
)

target_compile_features(GeometricShapes PUBLIC cxx_std_17)
target_include_directories(GeometricShapes PUBLIC src)
target_compile_definitions(GeometricShapes PUBLIC "PROJECT_DIR_PATH=\"${CMAKE_SOURCE_DIR}\"")

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(GeometricShapes PUBLIC /W3 /MP)
else()
    target_compile_options(GeometricShapes PUBLIC -Wall)
endif()

add_executable(GeometricShapesApp
    tests/Application.cpp
    tests/Application.h
    tests/Main.cpp
)

target_link_libraries(GeometricShapesApp PRIVATE GeometricShapes)
set_target_properties(GeometricShapesApp PROPERTIES RUNTIME_OUTPUT_NAME "GeometricShapes")