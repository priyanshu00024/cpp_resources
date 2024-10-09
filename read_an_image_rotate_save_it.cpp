#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp> // Include the OpenCV library

using namespace cv;

// Read an image from a file, rotate and save it
int main() {
    // Read the image from file
    Mat image = imread("png_path", IMREAD_COLOR);
    if (image.empty()) {
        printf("Error: Unable to open the file\n");
        return 1;
    }

    // Rotate the image by 90 degrees clockwise
    Mat rotatedImage;
    transpose(image, rotatedImage);
    flip(rotatedImage, rotatedImage, 1);

    // Rotate the image by 90 degrees anti-clockwise
    // Mat rotatedImage;
    // transpose(image, rotatedImage);
    // flip(rotatedImage, rotatedImage, 0);

    // Save the rotated image to file
    imwrite("png_path", rotatedImage);

    return 0;
}