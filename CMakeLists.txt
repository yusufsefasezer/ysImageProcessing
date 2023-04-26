cmake_minimum_required(VERSION 3.20)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(ysImageProcessing VERSION 0.0.1
					   DESCRIPTION "A simple Image Processing library developed with Modern C++."
					   LANGUAGES CXX)

include_directories(include)
include_directories(${GD_INCLUDE_DIR})
find_package(GD REQUIRED)

set(SOURCES
	src/Color/RGB.cpp
	src/Color/HSL.cpp
	src/Color/RGBA.cpp
	src/Arithmetic/ImageArithmetic.cpp
	src/Effect/Hue.cpp
	src/Effect/Invert.cpp
	src/Effect/Greyscale.cpp
	src/Effect/Gamma.cpp
	src/Effect/Sepia.cpp
	src/Effect/Threshold.cpp
	src/Effect/Effect.cpp
	src/Effect/Brightness.cpp
	src/Effect/Contrast.cpp
	src/Effect/Vibrance.cpp
	src/ysImage.cpp
	src/ConvolutionFilter/Blur/Blur3x3.cpp
	src/ConvolutionFilter/Blur/Blur5x5.cpp
	src/ConvolutionFilter/Blur/MotionBlur/MotionBlur.cpp
	src/ConvolutionFilter/Blur/MotionBlur/MotionBlurLeftToRight.cpp
	src/ConvolutionFilter/Blur/MotionBlur/MotionBlurRightToLeft.cpp
	src/ConvolutionFilter/Kirsch/Kirsch3x3Vertical.cpp
	src/ConvolutionFilter/Kirsch/Kirsch3x3Horizontal.cpp
	src/ConvolutionFilter/Sobel/Sobel3x3Vertical.cpp
	src/ConvolutionFilter/Sobel/Sobel3x3Horizontal.cpp
	src/ConvolutionFilter/Laplacian/Laplacian5x5.cpp
	src/ConvolutionFilter/Laplacian/LaplacianOfGaussian.cpp
	src/ConvolutionFilter/Laplacian/Laplacian3x3.cpp
	src/ConvolutionFilter/Prewitt/Prewitt3x3Horizontal.cpp
	src/ConvolutionFilter/Prewitt/Prewitt3x3Vertical.cpp
	src/ConvolutionFilter/Gaussian/Gaussian5x5.cpp
	src/ConvolutionFilter/Gaussian/Gaussian7x7.cpp
	src/ConvolutionFilter/Gaussian/Gaussian3x3.cpp
	src/ConvolutionFilter/Emboss/Emboss45Degree.cpp
	src/ConvolutionFilter/Emboss/EmbossTopLeftBottomRight.cpp
	src/ConvolutionFilter/Emboss/IntenseEmboss.cpp
	src/ConvolutionFilter/Emboss/Emboss.cpp
	src/ConvolutionFilter/Mean/Mean5x5.cpp
	src/ConvolutionFilter/Mean/Mean3x3.cpp
	src/ConvolutionFilter/Mean/Mean7x7.cpp
	src/ConvolutionFilter/Mean/Mean9x9.cpp
	src/ConvolutionFilter/Sharpen/SharpenFilter.cpp
	src/ConvolutionFilter/Sharpen/Sharpen3x3.cpp
	src/ConvolutionFilter/Sharpen/Sharpen3x3Factor.cpp
	src/ConvolutionFilter/Sharpen/Sharpen5x5.cpp
	src/ConvolutionFilter/Sharpen/IntenseSharpen.cpp
	src/ConvolutionFilter/LowPass/LowPass3x3.cpp
	src/ConvolutionFilter/LowPass/LowPass5x5.cpp
	src/ConvolutionFilter/SoftenFilter.cpp
	src/ConvolutionFilter/EdgeDetection/EdgeDetection45Degree.cpp
	src/ConvolutionFilter/EdgeDetection/EdgeDetectionTopLeftBottomRight.cpp
	src/ConvolutionFilter/EdgeDetection/HorizontalEdgeDetection.cpp
	src/ConvolutionFilter/EdgeDetection/VerticalEdgeDetection.cpp
	src/ConvolutionFilter/HighPass/HighPass3x3.cpp)

add_library(ysImageProcessing SHARED ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${GD_LIBRARIES})

install(TARGETS ysImageProcessing
				LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
				PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION include)

add_subdirectory(examples)
