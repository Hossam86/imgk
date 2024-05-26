// Created by Hossam Samir on 05/09/2023.

#include <imgk/Image.h>

int main() {
    // test image loading, copy and write
//    Image img("C:\\projects\\imgk\\resources\\flower.jpg");
//    img.write("new.png");
//    Image copy(img);
//    for (int i = 0; i < copy.w * copy.channels; ++i) {
//        copy.data[i] = 0;
//    }
//    copy.write("copy.png");
//    Image blank(100, 100, 3);
//    blank.write("blank.jpg");


// test gray scale filter

    Image test("C:\\projects\\imgk\\resources\\flower.jpg");
    Image gray_avg = test;
    gray_avg.grayscale_avg();
    gray_avg.write("gray_avg.png");

    Image gray_lum = test;
    gray_lum.grayscale_lum();
    gray_lum.write("gray_lum.png");
}