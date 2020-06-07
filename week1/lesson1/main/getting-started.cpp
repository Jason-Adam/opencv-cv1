// Getting Started
#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
  // Read in image
  std::string imagePath{"/Users/jasonadam/code/opencv-cv1/imgs/sample_dog.png"};
  cv::Mat image{cv::imread(imagePath, cv::IMREAD_COLOR)};
  cv::Mat channel[3];

  // Print Image metadata
  std::cout << "image dimensions = " << image.size() << std::endl;
  std::cout << "number of channels =" << image.channels();

  // Create Windows
  cv::namedWindow("Red", 1);
  cv::namedWindow("Green", 1);
  cv::namedWindow("Blue", 1);

  // Split
  cv::split(image, channel);

  // Display
  cv::imshow("Blue", channel[0]);
  cv::imshow("Green", channel[1]);
  cv::imshow("Red", channel[2]);

  // Cleanup
  cv::waitKey(0);
  cv::destroyAllWindows();
  return 0;
}
