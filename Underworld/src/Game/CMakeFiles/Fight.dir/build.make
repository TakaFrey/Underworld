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
CMAKE_SOURCE_DIR = /home/taka_frey/Orsay/S1/Projets/Underworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/taka_frey/Orsay/S1/Projets/Underworld

# Include any dependencies generated for this target.
include src/Game/CMakeFiles/Fight.dir/depend.make

# Include the progress variables for this target.
include src/Game/CMakeFiles/Fight.dir/progress.make

# Include the compile flags for this target's objects.
include src/Game/CMakeFiles/Fight.dir/flags.make

src/Game/CMakeFiles/Fight.dir/Game.cpp.o: src/Game/CMakeFiles/Fight.dir/flags.make
src/Game/CMakeFiles/Fight.dir/Game.cpp.o: src/Game/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/taka_frey/Orsay/S1/Projets/Underworld/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Game/CMakeFiles/Fight.dir/Game.cpp.o"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fight.dir/Game.cpp.o -c /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game/Game.cpp

src/Game/CMakeFiles/Fight.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fight.dir/Game.cpp.i"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game/Game.cpp > CMakeFiles/Fight.dir/Game.cpp.i

src/Game/CMakeFiles/Fight.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fight.dir/Game.cpp.s"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game/Game.cpp -o CMakeFiles/Fight.dir/Game.cpp.s

# Object files for target Fight
Fight_OBJECTS = \
"CMakeFiles/Fight.dir/Game.cpp.o"

# External object files for target Fight
Fight_EXTERNAL_OBJECTS =

src/Game/libFight.so: src/Game/CMakeFiles/Fight.dir/Game.cpp.o
src/Game/libFight.so: src/Game/CMakeFiles/Fight.dir/build.make
src/Game/libFight.so: src/Game/CMakeFiles/Fight.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/taka_frey/Orsay/S1/Projets/Underworld/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libFight.so"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fight.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Game/CMakeFiles/Fight.dir/build: src/Game/libFight.so

.PHONY : src/Game/CMakeFiles/Fight.dir/build

src/Game/CMakeFiles/Fight.dir/clean:
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game && $(CMAKE_COMMAND) -P CMakeFiles/Fight.dir/cmake_clean.cmake
.PHONY : src/Game/CMakeFiles/Fight.dir/clean

src/Game/CMakeFiles/Fight.dir/depend:
	cd /home/taka_frey/Orsay/S1/Projets/Underworld && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/taka_frey/Orsay/S1/Projets/Underworld /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game /home/taka_frey/Orsay/S1/Projets/Underworld /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game /home/taka_frey/Orsay/S1/Projets/Underworld/src/Game/CMakeFiles/Fight.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Game/CMakeFiles/Fight.dir/depend
