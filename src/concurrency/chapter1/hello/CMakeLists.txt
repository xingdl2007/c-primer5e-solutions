# output
add_executable(concrrency hello.cc)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(concrrency Threads::Threads)