// Created by Hossam Samir on 05/09/2023.

#include <imgk/Image.h>

int main() {
//! test image loading, copy and write
//    Image img("C:\\projects\\imgk\\resources\\flower.jpg");
//    img.write("new.png");
//    Image copy(img);
//    for (int i = 0; i < copy.w * copy.channels; ++i) {
//        copy.data[i] = 0;
//    }
//    copy.write("copy.png");
//    Image blank(100, 100, 3);
//    blank.write("blank.jpg");


//! test gray scale filter
//    Image test("C:/projects/imgk/resources/flower.jpg");
//    Image gray_avg = test;
//    gray_avg.grayscale_avg();
//    gray_avg.write("gray_avg.png");
//
//    Image gray_lum = test;
//    gray_lum.grayscale_lum();
//    gray_lum.write("gray_lum.png");

//!  test color mask
//    Image test("C:/projects/imgk/resources/flower.jpg");
//    test.colorMask(0, 0, 1);
//    test.write("blue.png");
//    return 0;

//! test encoding and decoding
//    Image test("C:/projects/imgk/resources/flower.jpg");
//    test.encodeMessage("Msg");
//    char buffer[256] = {0};
//    size_t len = 0;
//    test.decodeMessage(buffer, &len);
//    printf("Message: %s(%zu)\n", buffer, len);

//! test diff Map
//    Image test1("C:/projects/imgk/resources/flower.jpg");
//    Image test2("C:/projects/imgk/resources/cat.jpg");
//    test1.diffmap(test2);
//    test1.write("diff.png");

//! test diffmap with scale
//    Image test1("C:/projects/imgk/resources/flower.jpg");
//    Image test2("C:/projects/imgk/resources/flower.jpg");
//    test2.data[100] += 1;
//    test1.diffmap_scale(test2, 0);
//    test1.write("diff.png");

//! test imag convolution
//    Image test1("C:/projects/imgk/resources/flower.jpg");
//
//    double ker_emboss[] = {
//            -2 / 9.0, -1 / 9.0, 0,
//            -1 / 9.0, 1 / 9.0, 1 / 9.0,
//            0, 1 / 9.0, 2 / 9.0,
//    };
//    double ker_gaussian_blur[] = {
//            1 / 16.0, 2 / 16.0, 1 / 16.0,
//            2 / 16.0, 4 / 16.0, 2 / 16.0,
//            1 / 16.0, 2 / 16.0, 1 / 16.0,
//    };
//
//    test1.std_convolve_clamp_to_0(0, 3, 3, ker_emboss, 1, 1);
//    test1.std_convolve_clamp_to_0(1, 3, 3, ker_emboss, 1, 1);
//    test1.std_convolve_clamp_to_0(2, 3, 3, ker_emboss, 1, 1);
//
//    test1.write("blurred.png");

//! test flipping
//    Image test1("C:/projects/imgk/resources/egypt.jpg");
//    test1.flipX();
//    test1.write("flipped_X.png");
//    test1.flipY();
//    test1.write("flipped_Y.png");

//! test overlay
    Image test1("C:/projects/imgk/resources/egypt.jpg");
    Image logo ("C:/projects/imgk/resources/logo.png");
    test1.overlay(logo, 20,20);
    test1.write("overlay.png");

    return 0;
}