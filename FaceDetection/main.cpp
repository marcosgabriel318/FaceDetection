#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void main() {
	string path = "imagem.jpg";
	Mat img = imread(path);
	imshow("Frame", img);
	waitKey(0);
}
