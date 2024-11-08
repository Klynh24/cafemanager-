cmake_minimum_required(VERSION 3.16)
project(CafeManagementApp)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql)

add_executable(CafeManagement main.cpp MainWindow.cpp Database.cpp Employee.cpp)
target_include_directories(CafeManagement PRIVATE "C:/Qt/6.7.3/mingw_64/include" "C:/sqlite-amalgamation-3470000")

target_link_libraries(CafeManagement PRIVATE Qt6::Widgets Qt6::Sql sqlite3)
