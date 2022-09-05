#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include "mandel.h"
#include "Zoom.h"


int main(void)
{
    new Mandel();
    new Zoom("../img/mandel.png");
    return 0;
}