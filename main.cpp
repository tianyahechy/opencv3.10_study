#include "opencv2/improc/improc_lf.hpp"
#include "opencv2/highgui/highgui_lf.hpp"
int main()
{
	cv::Mat srcImage = cv::imread("E:\\1.png");
	if ( !srcImage.data )
	{
		return -1;
	}
	cv::imshow("srcImage", srcImage);
	cv::waitKey(0);
	return 0;
}