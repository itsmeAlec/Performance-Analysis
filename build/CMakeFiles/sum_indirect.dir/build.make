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
CMAKE_SOURCE_DIR = /home/student/Performance-Analysis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Performance-Analysis/build

# Include any dependencies generated for this target.
include CMakeFiles/sum_indirect.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sum_indirect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum_indirect.dir/flags.make

CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o: CMakeFiles/sum_indirect.dir/flags.make
CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o: ../sum_indirect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Performance-Analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o -c /home/student/Performance-Analysis/sum_indirect.cpp

CMakeFiles/sum_indirect.dir/sum_indirect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum_indirect.dir/sum_indirect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Performance-Analysis/sum_indirect.cpp > CMakeFiles/sum_indirect.dir/sum_indirect.cpp.i

CMakeFiles/sum_indirect.dir/sum_indirect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum_indirect.dir/sum_indirect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Performance-Analysis/sum_indirect.cpp -o CMakeFiles/sum_indirect.dir/sum_indirect.cpp.s

# Object files for target sum_indirect
sum_indirect_OBJECTS = \
"CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o"

# External object files for target sum_indirect
sum_indirect_EXTERNAL_OBJECTS = \
"/home/student/Performance-Analysis/build/CMakeFiles/benchmark.dir/benchmark.cpp.o"

sum_indirect: CMakeFiles/sum_indirect.dir/sum_indirect.cpp.o
sum_indirect: CMakeFiles/benchmark.dir/benchmark.cpp.o
sum_indirect: CMakeFiles/sum_indirect.dir/build.make
sum_indirect: CMakeFiles/sum_indirect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Performance-Analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum_indirect"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum_indirect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum_indirect.dir/build: sum_indirect

.PHONY : CMakeFiles/sum_indirect.dir/build

CMakeFiles/sum_indirect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sum_indirect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sum_indirect.dir/clean

CMakeFiles/sum_indirect.dir/depend:
	cd /home/student/Performance-Analysis/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Performance-Analysis /home/student/Performance-Analysis /home/student/Performance-Analysis/build /home/student/Performance-Analysis/build /home/student/Performance-Analysis/build/CMakeFiles/sum_indirect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sum_indirect.dir/depend

