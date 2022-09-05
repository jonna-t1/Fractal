#include "mandel.h"

using namespace cv;
using namespace std;

static const int RE_START = -2;
static const int RE_END = 1;
static const int IM_START = -1;
static const int IM_END = 1;
static const int MAX_ITER = 80;

int m;

Mandel::Mandel(){
    drawMandelbrot();
}

void Mandel::drawMandelbrot(){
    int width = 960;
    int height = 640;

    cv::Mat mandelbrotImg(height, width, CV_8UC3);
    double wid = (double)width;
    double hei = (double)height;
    double reWidth = RE_END - RE_START;
    double imWidth = IM_END - IM_START;
    for (int x = 0; x < width; x++) 
    {
        for (int y = 0; y < height; y++) 
        {
            std::complex<double> c(RE_START + (x / wid) * reWidth, IM_START + (y / hei) * imWidth);
            int m = mandelbrot(c);

            double hue = (255 * m / (float)MAX_ITER);
            double saturation = 255.0;
            double value = (m < MAX_ITER) ? 255.0 : 0;

            mandelbrotImg.at<cv::Vec3b>(y, x) = cv::Vec3b((uchar)hue, (uchar)saturation, (uchar)value);
        }
    }
    cv::cvtColor(mandelbrotImg, mandelbrotImg, cv::COLOR_HSV2BGR);
    imwrite("../img/mandel.png", mandelbrotImg);
    // while(1){
    //     cv::imshow("Mandelbrot",mandelbrotImg);
    //     cv::waitKey(0);
    // }
}

int Mandel::mandelbrot(std::complex<double> const & c) 
{
    std::complex<double> z{ 0,0 };
    int n = 0;
    while (norm(z) <= 4 && n < MAX_ITER) 
    {
        z = z*z + c;
        n += 1;
    }
    return n;
}