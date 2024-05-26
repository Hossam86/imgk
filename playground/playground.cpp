// Created by Hossam Samir on 05/09/2023.

#include <imgk/Image.h>

int main() {
    Image img("C:\\projects\\imgk\\resources\\flower.jpg");
    img.write("new.png");
    Image copy(img);
    for (int i = 0; i < copy.w * copy.channels; ++i) {
        copy.data[i] = 0;
    }
    copy.write("copy.png");
    Image blank(100, 100, 3);
    blank.write("blank.jpg");

}