#include <iostream>
#include <opencv2/core/core.hpp>
  
// Drawing shapes
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

#define 	CV_RGB(r, g, b)   cv::Scalar((b), (g), (r), 0)
  
// Driver Code
int main()
{
    // string path = r"../img/cat.png";
    const char* filename = "../img/poo.png";
    // Loads an image
    Mat img = imread( samples::findFile( filename ) );
    // string path("./src/cat.png");
    // Mat img = imread(path);
    circle(img, Point(10,10), 10, Scalar(255), 8);
    imshow("out", img);
    
    waitKey(0);
}