#include <opencv2/highgui.hpp>
#include "functions.h"
#include <math.h>
#include <vector>
#include <cmath>
#include <iostream>

void max_filter (cv::Mat img, int size) {
    if (size % 2 == 0) {
        return;
    }

    std::vector<int> kernel;
    int max_el;

    for (int i = 0; i < img.rows; i++) {
        std::cout << "i= " << i << "\n";
        for (int j = 0 ; j < img.cols; j++) {
            std::cout << "j=" << j << "\n";
            for (int ker_row = -(floor (size / 2)); ker_row < (floor(size / 2)) + 1; ker_row++) {
                std::cout << "i + ker_row " << i + ker_row << "\n";
                for(int ker_col = -(floor (size / 2)); ker_col < (floor(size / 2)) + 1; ker_col++) {
                    std::cout << "j + ker_col " << j + ker_col << "\n";
                    if (i + ker_row < 0 || j + ker_col < 0 || i + ker_row > img.rows || j + ker_col > img.cols) {
                        std::cout << "here\n";
                        break;
                        }
                    kernel.push_back(img.at<uchar>(i + ker_row, j + ker_col));
                    std::cout << "kernel =" << *kernel.end();
                }
            }
            max_el = *max_element(kernel.begin(), kernel.end());
            img.at<uchar>(i, j) = max_el;
        }
    }
    return;
}

cv::Mat min_filter (cv::Mat img, int size) {
    return img;
}