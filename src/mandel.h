#ifndef MANDEL_H
#define MANDEL_H

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/types.hpp>

#include <complex>

class Mandel{
    public:
        Mandel();
        void drawMandelbrot();
        int mandelbrot(std::complex<double> const & c);
        
};

#endif