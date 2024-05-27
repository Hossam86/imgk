//
// Created by Hossam Samir on 05/09/2023.
//
#ifndef IMGK_IMAGE_H
#define IMGK_IMAGE_H

#include <cstdio>
#include <cstdint>


#define STEG_HEADER_SIZE sizeof(uint32_t) * 8

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

    Image &colorMask(float r, float g, float b);

    Image &decodeMessage(char *buffer, size_t *messageLength);

    Image &encodeMessage(const char *message);

};

#endif //IMGK_IMAGE_H
