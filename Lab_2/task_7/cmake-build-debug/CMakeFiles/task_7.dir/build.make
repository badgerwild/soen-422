# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/jason/clion/clion-2020.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jason/clion/clion-2020.3.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jason/collective/soen-422/Lab_2/task_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_7.dir/flags.make

CMakeFiles/task_7.dir/TestQueue.cpp.o: CMakeFiles/task_7.dir/flags.make
CMakeFiles/task_7.dir/TestQueue.cpp.o: ../TestQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task_7.dir/TestQueue.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task_7.dir/TestQueue.cpp.o -c /home/jason/collective/soen-422/Lab_2/task_7/TestQueue.cpp

CMakeFiles/task_7.dir/TestQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_7.dir/TestQueue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/collective/soen-422/Lab_2/task_7/TestQueue.cpp > CMakeFiles/task_7.dir/TestQueue.cpp.i

CMakeFiles/task_7.dir/TestQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_7.dir/TestQueue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/collective/soen-422/Lab_2/task_7/TestQueue.cpp -o CMakeFiles/task_7.dir/TestQueue.cpp.s

CMakeFiles/task_7.dir/Queue.cpp.o: CMakeFiles/task_7.dir/flags.make
CMakeFiles/task_7.dir/Queue.cpp.o: ../Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task_7.dir/Queue.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task_7.dir/Queue.cpp.o -c /home/jason/collective/soen-422/Lab_2/task_7/Queue.cpp

CMakeFiles/task_7.dir/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_7.dir/Queue.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/collective/soen-422/Lab_2/task_7/Queue.cpp > CMakeFiles/task_7.dir/Queue.cpp.i

CMakeFiles/task_7.dir/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_7.dir/Queue.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/collective/soen-422/Lab_2/task_7/Queue.cpp -o CMakeFiles/task_7.dir/Queue.cpp.s

# Object files for target task_7
task_7_OBJECTS = \
"CMakeFiles/task_7.dir/TestQueue.cpp.o" \
"CMakeFiles/task_7.dir/Queue.cpp.o"

# External object files for target task_7
task_7_EXTERNAL_OBJECTS =

task_7: CMakeFiles/task_7.dir/TestQueue.cpp.o
task_7: CMakeFiles/task_7.dir/Queue.cpp.o
task_7: CMakeFiles/task_7.dir/build.make
task_7: CMakeFiles/task_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable task_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_7.dir/build: task_7

.PHONY : CMakeFiles/task_7.dir/build

CMakeFiles/task_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_7.dir/clean

CMakeFiles/task_7.dir/depend:
	cd /home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jason/collective/soen-422/Lab_2/task_7 /home/jason/collective/soen-422/Lab_2/task_7 /home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug /home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug /home/jason/collective/soen-422/Lab_2/task_7/cmake-build-debug/CMakeFiles/task_7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_7.dir/depend

