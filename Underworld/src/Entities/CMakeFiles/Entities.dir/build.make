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
include src/Entities/CMakeFiles/Entities.dir/depend.make

# Include the progress variables for this target.
include src/Entities/CMakeFiles/Entities.dir/progress.make

# Include the compile flags for this target's objects.
include src/Entities/CMakeFiles/Entities.dir/flags.make

src/Entities/CMakeFiles/Entities.dir/Entity.cpp.o: src/Entities/CMakeFiles/Entities.dir/flags.make
src/Entities/CMakeFiles/Entities.dir/Entity.cpp.o: src/Entities/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/taka_frey/Orsay/S1/Projets/Underworld/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Entities/CMakeFiles/Entities.dir/Entity.cpp.o"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Entities.dir/Entity.cpp.o -c /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities/Entity.cpp

src/Entities/CMakeFiles/Entities.dir/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Entities.dir/Entity.cpp.i"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities/Entity.cpp > CMakeFiles/Entities.dir/Entity.cpp.i

src/Entities/CMakeFiles/Entities.dir/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Entities.dir/Entity.cpp.s"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities/Entity.cpp -o CMakeFiles/Entities.dir/Entity.cpp.s

# Object files for target Entities
Entities_OBJECTS = \
"CMakeFiles/Entities.dir/Entity.cpp.o"

# External object files for target Entities
Entities_EXTERNAL_OBJECTS =

src/Entities/libEntities.so: src/Entities/CMakeFiles/Entities.dir/Entity.cpp.o
src/Entities/libEntities.so: src/Entities/CMakeFiles/Entities.dir/build.make
src/Entities/libEntities.so: src/Entities/CMakeFiles/Entities.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/taka_frey/Orsay/S1/Projets/Underworld/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libEntities.so"
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Entities.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Entities/CMakeFiles/Entities.dir/build: src/Entities/libEntities.so

.PHONY : src/Entities/CMakeFiles/Entities.dir/build

src/Entities/CMakeFiles/Entities.dir/clean:
	cd /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities && $(CMAKE_COMMAND) -P CMakeFiles/Entities.dir/cmake_clean.cmake
.PHONY : src/Entities/CMakeFiles/Entities.dir/clean

src/Entities/CMakeFiles/Entities.dir/depend:
	cd /home/taka_frey/Orsay/S1/Projets/Underworld && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/taka_frey/Orsay/S1/Projets/Underworld /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities /home/taka_frey/Orsay/S1/Projets/Underworld /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities /home/taka_frey/Orsay/S1/Projets/Underworld/src/Entities/CMakeFiles/Entities.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Entities/CMakeFiles/Entities.dir/depend

