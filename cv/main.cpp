#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main (int argc, char** argv) {
    Mat
        img_color = imread("images/test.png", 1),
        img_grayscale = imread("images/test.png", 0);

    imshow("color popov", img_color);
    imshow("grayscale popov", img_grayscale);

    waitKey(0);

    destroyAllWindows();

    imwrite("grayscale.jpg", img_grayscale);

    return 0;
}