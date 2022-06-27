cmake_minimum_required(VERSION 3.20)

project(agent_user)

if(EXISTS "${PROJECT_SOURCE_DIR}/../Cpp_Agent_Design_Pattern/")
	message("folder exists locally!")
	add_subdirectory(${PROJECT_SOURCE_DIR}/../Cpp_Agent_Design_Pattern ./agent_user)
else()
	message("folder doesn't exist! Downloading source from github!")
	include(FetchContent)
	FetchContent_Declare(
		agent
		GIT_REPOSITORY https://github.com/wireless-hazard/Cpp_Agent_Design_Pattern.git
		GIT_TAG        6da0e7b9941aa90baa98cfeeadbb2dcfd06c60d8 # current commit
	)
	FetchContent_MakeAvailable(agent)
endif()

add_executable(main_app main.cpp)
target_link_libraries(main_app PUBLIC agent)