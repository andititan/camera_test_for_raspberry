#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
    Mat frame;
    VideoCapture cap(0);

    cap.read(frame);
    imshow("Frame", frame);
    return 0;
}