#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>
#include <stdio.h>

#include "Mandelbrot.h"

using namespace cv;
using namespace std;

#include "Zoom.h"

void info(){
    cout << "\n" << "Opencv version: " << CV_VERSION << endl
            << endl;

    cout << "\nUsage: \n"
            "\tESC - Escape the program\n"
            "\tLeft CLICK - zoom\n"
            "\tRight CLICK - Restore image\n" << endl;
}

int main( int argc, char** argv )
{
        info();

        const char *path = "../img/mandelbrot.png";
        new Mandelbrot(path);
        new Zoom(path);

	return 0;
}