// Basic Image Operations
#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
  // Read image
  std::string imagePath{"/Users/jasonadam/code/opencv-cv1/imgs/sample_dog.png"};
  cv::Mat image{cv::imread(imagePath, cv::IMREAD_COLOR)};
  std::cout << "Standard image size = " << image.size() << std::endl;

  // Cropped Image
  cv::Mat croppedImage{image(cv::Range(40, 200), cv::Range(170, 320))};
  cv::namedWindow("normal");
  cv::namedWindow("cropped");
  cv::imshow("normal", image);
  cv::imshow("cropped", croppedImage);

  // Resize Image
  cv::namedWindow("resized");
  int resizeDownWidth{300};
  int resizeDownHeight{200};
  cv::Mat resizedDown;
  cv::resize(image, resizedDown, cv::Size(resizeDownWidth, resizeDownHeight),
             cv::INTER_LINEAR);
  cv::imshow("resized", resizedDown);

  // Resize with scaling factor
  cv::namedWindow("scaleFactor");
  double scaleUpX{1.5};
  double scaleUpY{1.5};
  cv::Mat scaleUp;
  cv::resize(image, scaleUp, cv::Size(), scaleUpX, scaleUpY, cv::INTER_LINEAR);
  cv::imshow("scaleFactor", scaleUp);
  std::cout << "Scaled up image size = " << scaleUp.size() << std::endl;

  // Create image mask
  cv::namedWindow("maskedImage");
  cv::Mat mask;
  cv::inRange(image, cv::Scalar(0, 0, 150), cv::Scalar(100, 100, 255), mask);
  cv::imshow("maskedImage", mask);

  // Cleanup
  cv::waitKey(0);
  cv::destroyAllWindows();
  return 0;
}
