# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/AdditionSubtractionOrNothing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AdditionSubtractionOrNothing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AdditionSubtractionOrNothing.dir/flags.make

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o: CMakeFiles/AdditionSubtractionOrNothing.dir/flags.make
CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o -c "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/main.cpp"

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/main.cpp" > CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.i

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/main.cpp" -o CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.s

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.requires

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.provides: CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AdditionSubtractionOrNothing.dir/build.make CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.provides

CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.provides.build: CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o


# Object files for target AdditionSubtractionOrNothing
AdditionSubtractionOrNothing_OBJECTS = \
"CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o"

# External object files for target AdditionSubtractionOrNothing
AdditionSubtractionOrNothing_EXTERNAL_OBJECTS =

AdditionSubtractionOrNothing: CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o
AdditionSubtractionOrNothing: CMakeFiles/AdditionSubtractionOrNothing.dir/build.make
AdditionSubtractionOrNothing: CMakeFiles/AdditionSubtractionOrNothing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AdditionSubtractionOrNothing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AdditionSubtractionOrNothing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AdditionSubtractionOrNothing.dir/build: AdditionSubtractionOrNothing

.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/build

CMakeFiles/AdditionSubtractionOrNothing.dir/requires: CMakeFiles/AdditionSubtractionOrNothing.dir/main.cpp.o.requires

.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/requires

CMakeFiles/AdditionSubtractionOrNothing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AdditionSubtractionOrNothing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/clean

CMakeFiles/AdditionSubtractionOrNothing.dir/depend:
	cd "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing" "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing" "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug" "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug" "/Users/jvanderen11/OneDrive/General Programming/C++ Programs/AdditionSubtractionOrNothing/cmake-build-debug/CMakeFiles/AdditionSubtractionOrNothing.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AdditionSubtractionOrNothing.dir/depend
