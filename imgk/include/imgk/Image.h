//
// Created by Hossam Samir on 05/09/2023.
//
#ifndef IMGK_IMAGE_H
#define IMGK_IMAGE_H

#include <cstdio>
#include <cstdint>

enum ImageType {
    PNG, JPG, BMP, TGA
};

struct Image {
    uint8_t *data;
    size_t size;
    int w;
    int h;
    int channels;

    Image(const char *filename);

    Image(int w, int h, int channels);

    Image(const Image &);

    ~Image();

    bool read(const char *filename);

    bool write(const char *filename);

    ImageType Image::getFileType(const char *filename);

    Image &grayscale_avg();

    Image &grayscale_lum();

};


#endif //IMGK_IMAGE_H
