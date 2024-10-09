#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp> // Include the OpenCV library

using namespace cv;

// Read an image from a file, crop and save it
int main() {
    // Read the image from file
    Mat image = imread("png_path", IMREAD_COLOR);
    if (image.empty()) {
        printf("Error: Unable to open the file\n");
        return 1;
    }

    // Define the region of interest (ROI) for cropping
    Rect roi(0, 0, 20, 20); // Example: crop a 200x200 region starting at (100, 100)

    // Crop the image using the ROI
    Mat croppedImage = image(roi);

    // Save the cropped image to file
    imwrite("out_png_path", croppedImage);

    return 0;
}




// Command to compile the code  
// g++ -std=c++11 -o outputfile read_an_image.cpp `pkg-config --cflags --libs opencv4`