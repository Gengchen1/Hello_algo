# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zgc/Hello_algo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zgc/Hello_algo/build

# Include any dependencies generated for this target.
include CMakeFiles/Hello_algo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hello_algo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hello_algo.dir/flags.make

CMakeFiles/Hello_algo.dir/src/iteration.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/iteration.cpp.o: ../src/iteration.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hello_algo.dir/src/iteration.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/iteration.cpp.o -c /home/zgc/Hello_algo/src/iteration.cpp

CMakeFiles/Hello_algo.dir/src/iteration.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/iteration.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/iteration.cpp > CMakeFiles/Hello_algo.dir/src/iteration.cpp.i

CMakeFiles/Hello_algo.dir/src/iteration.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/iteration.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/iteration.cpp -o CMakeFiles/Hello_algo.dir/src/iteration.cpp.s

CMakeFiles/Hello_algo.dir/src/main.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Hello_algo.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/main.cpp.o -c /home/zgc/Hello_algo/src/main.cpp

CMakeFiles/Hello_algo.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/main.cpp > CMakeFiles/Hello_algo.dir/src/main.cpp.i

CMakeFiles/Hello_algo.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/main.cpp -o CMakeFiles/Hello_algo.dir/src/main.cpp.s

CMakeFiles/Hello_algo.dir/src/recursion.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/recursion.cpp.o: ../src/recursion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Hello_algo.dir/src/recursion.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/recursion.cpp.o -c /home/zgc/Hello_algo/src/recursion.cpp

CMakeFiles/Hello_algo.dir/src/recursion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/recursion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/recursion.cpp > CMakeFiles/Hello_algo.dir/src/recursion.cpp.i

CMakeFiles/Hello_algo.dir/src/recursion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/recursion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/recursion.cpp -o CMakeFiles/Hello_algo.dir/src/recursion.cpp.s

CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o: ../src/space_complexity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o -c /home/zgc/Hello_algo/src/space_complexity.cpp

CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/space_complexity.cpp > CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.i

CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/space_complexity.cpp -o CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.s

CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o: ../src/time_complexity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o -c /home/zgc/Hello_algo/src/time_complexity.cpp

CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/time_complexity.cpp > CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.i

CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/time_complexity.cpp -o CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.s

CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o: CMakeFiles/Hello_algo.dir/flags.make
CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o: ../src/worst_best_time_complexity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o -c /home/zgc/Hello_algo/src/worst_best_time_complexity.cpp

CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zgc/Hello_algo/src/worst_best_time_complexity.cpp > CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.i

CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zgc/Hello_algo/src/worst_best_time_complexity.cpp -o CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.s

# Object files for target Hello_algo
Hello_algo_OBJECTS = \
"CMakeFiles/Hello_algo.dir/src/iteration.cpp.o" \
"CMakeFiles/Hello_algo.dir/src/main.cpp.o" \
"CMakeFiles/Hello_algo.dir/src/recursion.cpp.o" \
"CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o" \
"CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o" \
"CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o"

# External object files for target Hello_algo
Hello_algo_EXTERNAL_OBJECTS =

Hello_algo: CMakeFiles/Hello_algo.dir/src/iteration.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/src/main.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/src/recursion.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/src/space_complexity.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/src/time_complexity.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/src/worst_best_time_complexity.cpp.o
Hello_algo: CMakeFiles/Hello_algo.dir/build.make
Hello_algo: CMakeFiles/Hello_algo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zgc/Hello_algo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Hello_algo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hello_algo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hello_algo.dir/build: Hello_algo

.PHONY : CMakeFiles/Hello_algo.dir/build

CMakeFiles/Hello_algo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hello_algo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hello_algo.dir/clean

CMakeFiles/Hello_algo.dir/depend:
	cd /home/zgc/Hello_algo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zgc/Hello_algo /home/zgc/Hello_algo /home/zgc/Hello_algo/build /home/zgc/Hello_algo/build /home/zgc/Hello_algo/build/CMakeFiles/Hello_algo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Hello_algo.dir/depend

