#ifndef MANDELBROT_H
#define MANDELBROT_H

#include <vector>
#include <functional>
#include "window.h"
#include "save_image.h"
#include <string>

#include <complex>
using Complex = std::complex<double>;

class Mandelbrot{
    public:
        Mandelbrot(const char *path);
        void draw_mandelbrot(const char *path);

        std::complex<double> scale(window<int> &scr, window<double> &fr, std::complex<double> c);

        int escape(std::complex<double> c, int iter_max, const std::function<std::complex<double>( std::complex<double>, std::complex<double>)> &func);

        void get_number_iterations(window<int> &scr, window<double> &fract, int iter_max, std::vector<int> &colors,
        const std::function<std::complex<double>( std::complex<double>, std::complex<double>)> &func);

        void fractal(window<int> &scr, window<double> &fract, int iter_max, std::vector<int> &colors,
        const std::function<std::complex<double>( std::complex<double>, std::complex<double>)> &func, const char *fname, bool smooth_color);
};


#endif