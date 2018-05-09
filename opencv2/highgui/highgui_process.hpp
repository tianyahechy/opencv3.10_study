#pragma once
#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/videoio.hpp"

namespace cv
{
	enum WindowFlags
	{
		WINDOW_NORMAL		= 0x00000000,
		WINDOW_AUTOSIZE		= 0x00000001,
		WINDOW_OPENGL		= 0x00001000,
		WINDOW_FULLSCREEN	= 1,
		WINDOW_FREERATIO	= 0x00000100,
		WINDOW_KEEPRATIO	= 0x00000000
	};

	enum WindowPropertyFlags
	{

	};
}