// Getting Started
#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
  // Read in image
  string imagePath = "/Users/jasonadam/code/opencv-cv1/imgs/sample_dog.png";
  Mat image = imread(imagePath, IMREAD_COLOR);
  Mat channel[3];

  // Print Image metadata
  cout << "image dimensions = " << image.size() << endl;
  cout << "number of channels =" << image.channels();

  // Create Windows
  namedWindow("Red", 1);
  namedWindow("Green", 1);
  namedWindow("Blue", 1);

  // Split
  split(image, channel);

  // Display
  cv::imshow("Blue", channel[0]);
  cv::imshow("Green", channel[1]);
  cv::imshow("Red", channel[2]);

  // Cleanup
  waitKey(0);
  destroyAllWindows();
  return 0;
}
