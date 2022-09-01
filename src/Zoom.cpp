#include "Zoom.h"

Mat original_img, img, show_img;

int zoomRec = 200;
int mousex, mousey;

Zoom::Zoom(std::string path){
    init_zoom(path);
}

Mat zoomIn(int x, int y)
{
    
    int width = zoomRec, height = zoomRec;
    int ptoX = x-(zoomRec/2), ptoY = y-(zoomRec/2);

    /* Verify */
    if((x+(zoomRec/2)) > img.size().width)
        width = width - ((x+(zoomRec/2)) - img.size().width);

    if((y+(zoomRec/2)) > img.size().height)
        height = height - ((y+(zoomRec/2)) - img.size().height);		

    if((x-(zoomRec/2)) < 0)
        ptoX = 0;

    if((y-(zoomRec/2)) < 0)
        ptoY = 0;

    Rect roi = Rect(ptoX, ptoY, width, height);
    Mat img_roi = img(roi);
    resize(img_roi, img_roi, Size(original_img.size().width, original_img.size().height), 3.33, 3.33);

    return img_roi;
}
Mat zoomOut(int x, int y)
{
    return original_img;		
}

void onMouse( int event, int x, int y, int /*flags*/, void* /*param*/ )
{
	mousex = x;
	mousey = y;

    if(event == cv::EVENT_LBUTTONDOWN)
		img = zoomIn(x, y);
	else if(event == cv::EVENT_RBUTTONDOWN)
		img = zoomOut(x, y);
}

void Zoom::init_zoom(std::string path){
    
    original_img = imread(path);

	if(original_img.empty())
		cout << "[ERROR] path to image not found\n\t" << endl;

	namedWindow("Zoom", 1);
	setMouseCallback("Zoom", onMouse, this);

	original_img.copyTo(img);
	original_img.copyTo(show_img);

	while (1)  
	{
		if(img.empty())
			break;

		img.copyTo(show_img);

		rectangle(show_img, 
					Point(mousex-(zoomRec/2), mousey-(zoomRec/2)), 
					Point(mousex+(zoomRec/2), mousey+(zoomRec/2)), 
					cv::Scalar(0,255,0), 1, 8, 0);
    

		imshow("Zoom", show_img);
    
		char c = (char) waitKey(10);
		if(c == 27)
			break;
		switch(c)
        {
        case '+':
			if(zoomRec < 500)
            zoomRec = zoomRec + 10;
			break;
		case '-':
			if(zoomRec > 10)
	            zoomRec = zoomRec - 10;
			break;
        default:
            ;
        }
	}
}