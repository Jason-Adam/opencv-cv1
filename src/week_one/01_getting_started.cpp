// Getting Started
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int weekOne() {
  // Read in image
  string imagePath = "/Users/jasonadam/github/opencv-cv1/sample_dog.png";
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
  imshow("Blue", channel[0]);
  imshow("Green", channel[1]);
  imshow("Red", channel[2]);

  // Cleanup
  waitKey(0);
  destroyAllWindows();
}
