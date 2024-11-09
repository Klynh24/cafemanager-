cmake_minimum_required(VERSION 3.5)
project(CafeManager)

set(CMAKE_CXX_STANDARD 17)

# Tìm Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Thêm các file mã nguồn
set(SOURCES src/MainWindow.cpp src/main.cpp)
set(HEADERS src/MainWindow.h)

# Tạo executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Link Qt với dự án
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
