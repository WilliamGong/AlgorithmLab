#source file
aux_source_directory(. SRC_TEST_CASE_LIST)

#build
add_library(testCase ${SRC_TEST_CASE_LIST})
target_link_libraries(testCase sort)