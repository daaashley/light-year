# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/davidashley/Documents/CPP/light-year

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidashley/Documents/CPP/light-year/build

# Include any dependencies generated for this target.
include LightYear/CMakeFiles/LightYearGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include LightYear/CMakeFiles/LightYearGame.dir/compiler_depend.make

# Include the progress variables for this target.
include LightYear/CMakeFiles/LightYearGame.dir/progress.make

# Include the compile flags for this target's objects.
include LightYear/CMakeFiles/LightYearGame.dir/flags.make

LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o: LightYear/CMakeFiles/LightYearGame.dir/flags.make
LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o: /Users/davidashley/Documents/CPP/light-year/LightYear/src/main.cpp
LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o: LightYear/CMakeFiles/LightYearGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/davidashley/Documents/CPP/light-year/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o -MF CMakeFiles/LightYearGame.dir/src/main.cpp.o.d -o CMakeFiles/LightYearGame.dir/src/main.cpp.o -c /Users/davidashley/Documents/CPP/light-year/LightYear/src/main.cpp

LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LightYearGame.dir/src/main.cpp.i"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidashley/Documents/CPP/light-year/LightYear/src/main.cpp > CMakeFiles/LightYearGame.dir/src/main.cpp.i

LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LightYearGame.dir/src/main.cpp.s"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidashley/Documents/CPP/light-year/LightYear/src/main.cpp -o CMakeFiles/LightYearGame.dir/src/main.cpp.s

LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o: LightYear/CMakeFiles/LightYearGame.dir/flags.make
LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o: /Users/davidashley/Documents/CPP/light-year/LightYear/src/framework/Application.cpp
LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o: LightYear/CMakeFiles/LightYearGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/davidashley/Documents/CPP/light-year/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o -MF CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o.d -o CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o -c /Users/davidashley/Documents/CPP/light-year/LightYear/src/framework/Application.cpp

LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.i"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidashley/Documents/CPP/light-year/LightYear/src/framework/Application.cpp > CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.i

LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.s"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidashley/Documents/CPP/light-year/LightYear/src/framework/Application.cpp -o CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.s

# Object files for target LightYearGame
LightYearGame_OBJECTS = \
"CMakeFiles/LightYearGame.dir/src/main.cpp.o" \
"CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o"

# External object files for target LightYearGame
LightYearGame_EXTERNAL_OBJECTS =

LightYear/LightYearGame: LightYear/CMakeFiles/LightYearGame.dir/src/main.cpp.o
LightYear/LightYearGame: LightYear/CMakeFiles/LightYearGame.dir/src/framework/Application.cpp.o
LightYear/LightYearGame: LightYear/CMakeFiles/LightYearGame.dir/build.make
LightYear/LightYearGame: _deps/sfml-build/lib/libsfml-graphics.2.5.1.dylib
LightYear/LightYearGame: _deps/sfml-build/lib/libsfml-window.2.5.1.dylib
LightYear/LightYearGame: _deps/sfml-build/lib/libsfml-audio.2.5.1.dylib
LightYear/LightYearGame: _deps/sfml-build/lib/libsfml-system.2.5.1.dylib
LightYear/LightYearGame: LightYear/CMakeFiles/LightYearGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/davidashley/Documents/CPP/light-year/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LightYearGame"
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LightYearGame.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E copy_if_different /Users/davidashley/Documents/CPP/light-year/build/_deps/sfml-build/lib/libsfml-graphics.2.5.1.dylib /Users/davidashley/Documents/CPP/light-year/build/LightYear
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E copy_if_different /Users/davidashley/Documents/CPP/light-year/build/_deps/sfml-build/lib/libsfml-window.2.5.1.dylib /Users/davidashley/Documents/CPP/light-year/build/LightYear
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E copy_if_different /Users/davidashley/Documents/CPP/light-year/build/_deps/sfml-build/lib/libsfml-system.2.5.1.dylib /Users/davidashley/Documents/CPP/light-year/build/LightYear
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && /opt/homebrew/Cellar/cmake/3.29.4/bin/cmake -E copy_if_different /Users/davidashley/Documents/CPP/light-year/build/_deps/sfml-build/lib/libsfml-audio.2.5.1.dylib /Users/davidashley/Documents/CPP/light-year/build/LightYear

# Rule to build all files generated by this target.
LightYear/CMakeFiles/LightYearGame.dir/build: LightYear/LightYearGame
.PHONY : LightYear/CMakeFiles/LightYearGame.dir/build

LightYear/CMakeFiles/LightYearGame.dir/clean:
	cd /Users/davidashley/Documents/CPP/light-year/build/LightYear && $(CMAKE_COMMAND) -P CMakeFiles/LightYearGame.dir/cmake_clean.cmake
.PHONY : LightYear/CMakeFiles/LightYearGame.dir/clean

LightYear/CMakeFiles/LightYearGame.dir/depend:
	cd /Users/davidashley/Documents/CPP/light-year/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidashley/Documents/CPP/light-year /Users/davidashley/Documents/CPP/light-year/LightYear /Users/davidashley/Documents/CPP/light-year/build /Users/davidashley/Documents/CPP/light-year/build/LightYear /Users/davidashley/Documents/CPP/light-year/build/LightYear/CMakeFiles/LightYearGame.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : LightYear/CMakeFiles/LightYearGame.dir/depend

