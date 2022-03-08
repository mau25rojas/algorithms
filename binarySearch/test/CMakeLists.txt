set(BINARY ${CMAKE_PROJECT_NAME}_test)

set(TEST_SOURCES test_binarysearch.cpp)

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

# target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
target_link_libraries(${BINARY} PUBLIC
                    gtest
                    gmock
                    pthread)