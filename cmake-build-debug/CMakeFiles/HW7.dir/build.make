# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion\CLion 2017.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion\CLion 2017.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\git2\EE553GroupHw

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\git2\EE553GroupHw\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW7.dir/flags.make

CMakeFiles/HW7.dir/main.cpp.obj: CMakeFiles/HW7.dir/flags.make
CMakeFiles/HW7.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\git2\EE553GroupHw\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW7.dir/main.cpp.obj"
	E:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW7.dir\main.cpp.obj -c E:\git2\EE553GroupHw\main.cpp

CMakeFiles/HW7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW7.dir/main.cpp.i"
	E:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\git2\EE553GroupHw\main.cpp > CMakeFiles\HW7.dir\main.cpp.i

CMakeFiles/HW7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW7.dir/main.cpp.s"
	E:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\git2\EE553GroupHw\main.cpp -o CMakeFiles\HW7.dir\main.cpp.s

CMakeFiles/HW7.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/HW7.dir/main.cpp.obj.requires

CMakeFiles/HW7.dir/main.cpp.obj.provides: CMakeFiles/HW7.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW7.dir\build.make CMakeFiles/HW7.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/HW7.dir/main.cpp.obj.provides

CMakeFiles/HW7.dir/main.cpp.obj.provides.build: CMakeFiles/HW7.dir/main.cpp.obj


# Object files for target HW7
HW7_OBJECTS = \
"CMakeFiles/HW7.dir/main.cpp.obj"

# External object files for target HW7
HW7_EXTERNAL_OBJECTS =

HW7.exe: CMakeFiles/HW7.dir/main.cpp.obj
HW7.exe: CMakeFiles/HW7.dir/build.make
HW7.exe: CMakeFiles/HW7.dir/linklibs.rsp
HW7.exe: CMakeFiles/HW7.dir/objects1.rsp
HW7.exe: CMakeFiles/HW7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\git2\EE553GroupHw\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW7.dir/build: HW7.exe

.PHONY : CMakeFiles/HW7.dir/build

CMakeFiles/HW7.dir/requires: CMakeFiles/HW7.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/HW7.dir/requires

CMakeFiles/HW7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW7.dir/clean

CMakeFiles/HW7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\git2\EE553GroupHw E:\git2\EE553GroupHw E:\git2\EE553GroupHw\cmake-build-debug E:\git2\EE553GroupHw\cmake-build-debug E:\git2\EE553GroupHw\cmake-build-debug\CMakeFiles\HW7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW7.dir/depend

