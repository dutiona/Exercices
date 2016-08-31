set(PUISSANCE4_SRCS src/main.cpp)

source_group("Sources" FILES ${PUISSANCE4_SRCS})

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(Puissance4 ${PUISSANCE4_SRCS})

install(TARGETS Puissance4
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib)