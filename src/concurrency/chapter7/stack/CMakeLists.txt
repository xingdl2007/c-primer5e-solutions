# output
add_executable(lfstack stack.cc)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(lfstack Threads::Threads)