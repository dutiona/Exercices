set(BASIC_SRCS src/main.cpp)

source_group("Sources" FILES ${BASIC_SRCS})

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(Basic ${BASIC_SRCS})

install(TARGETS Basic
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib)