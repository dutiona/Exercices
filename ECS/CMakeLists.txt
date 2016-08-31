set(ECS_SRCS src/main.cpp)

source_group("Sources" FILES ${ECS_SRCS})

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(ECS ${ECS_SRCS})

install(TARGETS ECS
		RUNTIME DESTINATION bin
		LIBRARY DESTINATION lib
		ARCHIVE DESTINATION lib)