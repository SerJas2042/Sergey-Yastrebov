#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;


int main()
{
	int height = 520;
	int width = 840;

	Mat img(height, width, CV_8UC3);
	Point textOrg(100, img.rows / 2);
	int fontFace = FONT_HERSHEY_COMPLEX;
	double fontScale = 5;
	Scalar color(0, 255, 0);
	putText(img, "MY TEXT BOX", textOrg, fontFace, fontScale, color);
	namedWindow("MY PROGRAMM", 0);
	imshow("MY PROGAMM", img);
	waitKey(0);
	return 0;







}