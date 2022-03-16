#include <opencv2/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include "functions.h"

int main(int argc, char** argv) {

    // TASK 1

    cv::Mat img= cv::imread(argv[1]);
    cv::namedWindow("Original Image", cv::WINDOW_NORMAL);
    cv::imshow("Original Image", img);

    cv::Mat gray_img;
    cv::cvtColor(img, gray_img,  cv::COLOR_BGR2GRAY);

    cv::namedWindow("Gray Image", cv::WINDOW_NORMAL);
    cv::imshow("Gray Image", gray_img);
    cv::waitKey(0);

    cv::imwrite("gray_image.jpg",gray_img);
    
    // TASK 2

    cv::Mat max = img.clone();
    max_filter(max, 3);
    return 0;
    }
