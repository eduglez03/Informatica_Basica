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
CMAKE_SOURCE_DIR = /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex/build

# Utility rule file for test_complex.

# Include the progress variables for this target.
include CMakeFiles/test_complex.dir/progress.make

CMakeFiles/test_complex: complex
	./complex

test_complex: CMakeFiles/test_complex
test_complex: CMakeFiles/test_complex.dir/build.make

.PHONY : test_complex

# Rule to build all files generated by this target.
CMakeFiles/test_complex.dir/build: test_complex

.PHONY : CMakeFiles/test_complex.dir/build

CMakeFiles/test_complex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_complex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_complex.dir/clean

CMakeFiles/test_complex.dir/depend:
	cd /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex/build /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex/build /home/usuario/ib-2021-2022-p12_oop-exercism-eduglez03/complex/build/CMakeFiles/test_complex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_complex.dir/depend

