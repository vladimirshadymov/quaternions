# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/vladimir/Workspace/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/vladimir/Workspace/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vladimir/CLionProjects/quaternions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vladimir/CLionProjects/quaternions

# Include any dependencies generated for this target.
include CMakeFiles/qtr_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qtr_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qtr_lib.dir/flags.make

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o: CMakeFiles/qtr_lib.dir/flags.make
CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o: qtr_algebra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vladimir/CLionProjects/quaternions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o -c /home/vladimir/CLionProjects/quaternions/qtr_algebra.cpp

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vladimir/CLionProjects/quaternions/qtr_algebra.cpp > CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.i

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vladimir/CLionProjects/quaternions/qtr_algebra.cpp -o CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.s

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.requires:

.PHONY : CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.requires

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.provides: CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.requires
	$(MAKE) -f CMakeFiles/qtr_lib.dir/build.make CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.provides.build
.PHONY : CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.provides

CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.provides.build: CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o


# Object files for target qtr_lib
qtr_lib_OBJECTS = \
"CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o"

# External object files for target qtr_lib
qtr_lib_EXTERNAL_OBJECTS =

libqtr_lib.a: CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o
libqtr_lib.a: CMakeFiles/qtr_lib.dir/build.make
libqtr_lib.a: CMakeFiles/qtr_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vladimir/CLionProjects/quaternions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libqtr_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/qtr_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qtr_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qtr_lib.dir/build: libqtr_lib.a

.PHONY : CMakeFiles/qtr_lib.dir/build

CMakeFiles/qtr_lib.dir/requires: CMakeFiles/qtr_lib.dir/qtr_algebra.cpp.o.requires

.PHONY : CMakeFiles/qtr_lib.dir/requires

CMakeFiles/qtr_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtr_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtr_lib.dir/clean

CMakeFiles/qtr_lib.dir/depend:
	cd /home/vladimir/CLionProjects/quaternions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vladimir/CLionProjects/quaternions /home/vladimir/CLionProjects/quaternions /home/vladimir/CLionProjects/quaternions /home/vladimir/CLionProjects/quaternions /home/vladimir/CLionProjects/quaternions/CMakeFiles/qtr_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtr_lib.dir/depend

