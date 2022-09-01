#ifndef ZOOM_H
#define ZOOM_H

#include <opencv2/opencv.hpp>
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <string>
using namespace std;
using namespace cv;

class Zoom {
public:
// Functions
    Zoom(std::string path);
    void init_zoom(std::string path);
    // void onMouse( int event, int x, int y, int /*flags*/, void* /*param*/ );
    Mat zoomIn(int x, int y);
    Mat zoomOut(int x, int y);
};

#endif