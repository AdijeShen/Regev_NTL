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
CMAKE_SOURCE_DIR = /home/adije/dev/Regev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adije/dev/Regev/build

# Include any dependencies generated for this target.
include CMakeFiles/Regev.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Regev.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Regev.dir/flags.make

CMakeFiles/Regev.dir/main.cpp.o: CMakeFiles/Regev.dir/flags.make
CMakeFiles/Regev.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adije/dev/Regev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Regev.dir/main.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Regev.dir/main.cpp.o -c /home/adije/dev/Regev/main.cpp

CMakeFiles/Regev.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Regev.dir/main.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adije/dev/Regev/main.cpp > CMakeFiles/Regev.dir/main.cpp.i

CMakeFiles/Regev.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Regev.dir/main.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adije/dev/Regev/main.cpp -o CMakeFiles/Regev.dir/main.cpp.s

# Object files for target Regev
Regev_OBJECTS = \
"CMakeFiles/Regev.dir/main.cpp.o"

# External object files for target Regev
Regev_EXTERNAL_OBJECTS =

Regev: CMakeFiles/Regev.dir/main.cpp.o
Regev: CMakeFiles/Regev.dir/build.make
Regev: CMakeFiles/Regev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adije/dev/Regev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Regev"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Regev.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Regev.dir/build: Regev

.PHONY : CMakeFiles/Regev.dir/build

CMakeFiles/Regev.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Regev.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Regev.dir/clean

CMakeFiles/Regev.dir/depend:
	cd /home/adije/dev/Regev/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adije/dev/Regev /home/adije/dev/Regev /home/adije/dev/Regev/build /home/adije/dev/Regev/build /home/adije/dev/Regev/build/CMakeFiles/Regev.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Regev.dir/depend
