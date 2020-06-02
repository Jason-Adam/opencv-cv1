#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
  // Read in the image
  string imagePath = "/Users/jasonadam/github/opencv-cv1/imgs/sample_dog.png";
  Mat image = cv::imread(imagePath, IMREAD_COLOR);

  double scalingFactor = 1 / 255.0;
  double shift = 0;

  // Convert from unsigned char to float(32bit)
  image.convertTo(image, CV_32FC3, scalingFactor, shift);
}
