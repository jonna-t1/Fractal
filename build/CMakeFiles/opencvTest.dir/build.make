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
CMAKE_SOURCE_DIR = /home/jobo/projects/fractal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jobo/projects/fractal/build

# Include any dependencies generated for this target.
include CMakeFiles/opencvTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opencvTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opencvTest.dir/flags.make

CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o: CMakeFiles/opencvTest.dir/flags.make
CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o: ../src/Mandelbrot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jobo/projects/fractal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o -c /home/jobo/projects/fractal/src/Mandelbrot.cpp

CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jobo/projects/fractal/src/Mandelbrot.cpp > CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.i

CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jobo/projects/fractal/src/Mandelbrot.cpp -o CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.s

CMakeFiles/opencvTest.dir/src/Zoom.cpp.o: CMakeFiles/opencvTest.dir/flags.make
CMakeFiles/opencvTest.dir/src/Zoom.cpp.o: ../src/Zoom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jobo/projects/fractal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/opencvTest.dir/src/Zoom.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencvTest.dir/src/Zoom.cpp.o -c /home/jobo/projects/fractal/src/Zoom.cpp

CMakeFiles/opencvTest.dir/src/Zoom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencvTest.dir/src/Zoom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jobo/projects/fractal/src/Zoom.cpp > CMakeFiles/opencvTest.dir/src/Zoom.cpp.i

CMakeFiles/opencvTest.dir/src/Zoom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencvTest.dir/src/Zoom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jobo/projects/fractal/src/Zoom.cpp -o CMakeFiles/opencvTest.dir/src/Zoom.cpp.s

CMakeFiles/opencvTest.dir/src/main.cpp.o: CMakeFiles/opencvTest.dir/flags.make
CMakeFiles/opencvTest.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jobo/projects/fractal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/opencvTest.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencvTest.dir/src/main.cpp.o -c /home/jobo/projects/fractal/src/main.cpp

CMakeFiles/opencvTest.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencvTest.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jobo/projects/fractal/src/main.cpp > CMakeFiles/opencvTest.dir/src/main.cpp.i

CMakeFiles/opencvTest.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencvTest.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jobo/projects/fractal/src/main.cpp -o CMakeFiles/opencvTest.dir/src/main.cpp.s

CMakeFiles/opencvTest.dir/src/save_image.cpp.o: CMakeFiles/opencvTest.dir/flags.make
CMakeFiles/opencvTest.dir/src/save_image.cpp.o: ../src/save_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jobo/projects/fractal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/opencvTest.dir/src/save_image.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencvTest.dir/src/save_image.cpp.o -c /home/jobo/projects/fractal/src/save_image.cpp

CMakeFiles/opencvTest.dir/src/save_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencvTest.dir/src/save_image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jobo/projects/fractal/src/save_image.cpp > CMakeFiles/opencvTest.dir/src/save_image.cpp.i

CMakeFiles/opencvTest.dir/src/save_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencvTest.dir/src/save_image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jobo/projects/fractal/src/save_image.cpp -o CMakeFiles/opencvTest.dir/src/save_image.cpp.s

# Object files for target opencvTest
opencvTest_OBJECTS = \
"CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o" \
"CMakeFiles/opencvTest.dir/src/Zoom.cpp.o" \
"CMakeFiles/opencvTest.dir/src/main.cpp.o" \
"CMakeFiles/opencvTest.dir/src/save_image.cpp.o"

# External object files for target opencvTest
opencvTest_EXTERNAL_OBJECTS =

opencvTest: CMakeFiles/opencvTest.dir/src/Mandelbrot.cpp.o
opencvTest: CMakeFiles/opencvTest.dir/src/Zoom.cpp.o
opencvTest: CMakeFiles/opencvTest.dir/src/main.cpp.o
opencvTest: CMakeFiles/opencvTest.dir/src/save_image.cpp.o
opencvTest: CMakeFiles/opencvTest.dir/build.make
opencvTest: /usr/local/lib/libopencv_gapi.so.4.6.0
opencvTest: /usr/local/lib/libopencv_highgui.so.4.6.0
opencvTest: /usr/local/lib/libopencv_ml.so.4.6.0
opencvTest: /usr/local/lib/libopencv_objdetect.so.4.6.0
opencvTest: /usr/local/lib/libopencv_photo.so.4.6.0
opencvTest: /usr/local/lib/libopencv_stitching.so.4.6.0
opencvTest: /usr/local/lib/libopencv_video.so.4.6.0
opencvTest: /usr/local/lib/libopencv_videoio.so.4.6.0
opencvTest: /usr/local/lib/libopencv_imgcodecs.so.4.6.0
opencvTest: /usr/local/lib/libopencv_dnn.so.4.6.0
opencvTest: /usr/local/lib/libopencv_calib3d.so.4.6.0
opencvTest: /usr/local/lib/libopencv_features2d.so.4.6.0
opencvTest: /usr/local/lib/libopencv_flann.so.4.6.0
opencvTest: /usr/local/lib/libopencv_imgproc.so.4.6.0
opencvTest: /usr/local/lib/libopencv_core.so.4.6.0
opencvTest: CMakeFiles/opencvTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jobo/projects/fractal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable opencvTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencvTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opencvTest.dir/build: opencvTest

.PHONY : CMakeFiles/opencvTest.dir/build

CMakeFiles/opencvTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opencvTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opencvTest.dir/clean

CMakeFiles/opencvTest.dir/depend:
	cd /home/jobo/projects/fractal/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jobo/projects/fractal /home/jobo/projects/fractal /home/jobo/projects/fractal/build /home/jobo/projects/fractal/build /home/jobo/projects/fractal/build/CMakeFiles/opencvTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencvTest.dir/depend

