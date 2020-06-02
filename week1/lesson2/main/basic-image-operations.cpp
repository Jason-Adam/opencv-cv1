// Basic Image Operations
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
  // Read image
  string imagePath = "/Users/jasonadam/github/opencv-cv1/imgs/sample_dog.png";
  Mat image = cv::imread(imagePath, IMREAD_COLOR);
  std::cout << "Standard image size = " << image.size() << endl;

  // Cropped Image
  Mat croppedImage = image(Range(40, 200), Range(170, 320));
  namedWindow("normal");
  namedWindow("cropped");
  cv::imshow("normal", image);
  cv::imshow("cropped", croppedImage);

  // Resize Image
  namedWindow("resized");
  int resizeDownWidth = 300;
  int resizeDownHeight = 200;
  Mat resizedDown;
  cv::resize(image, resizedDown, Size(resizeDownWidth, resizeDownHeight),
             INTER_LINEAR);
  cv::imshow("resized", resizedDown);

  // Resize with scaling factor
  namedWindow("scaleFactor");
  double scaleUpX = 1.5;
  double scaleUpY = 1.5;
  Mat scaleUp;
  cv::resize(image, scaleUp, Size(), scaleUpX, scaleUpY, INTER_LINEAR);
  cv::imshow("scaleFactor", scaleUp);
  std::cout << "Scaled up image size = " << scaleUp.size() << endl;

  // Create image mask
  namedWindow("maskedImage");
  Mat mask;
  inRange(image, Scalar(0, 0, 150), Scalar(100, 100, 255), mask);
  cv::imshow("maskedImage", mask);

  // Cleanup
  waitKey(0);
  destroyAllWindows();
  return 0;
}
