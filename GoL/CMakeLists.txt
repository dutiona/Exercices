set(GOL_SRCS src/main.cpp)

source_group("Sources" FILES ${GOL_SRCS})

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(GameOfLife ${GOL_SRCS})

install(TARGETS GameOfLife
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib)