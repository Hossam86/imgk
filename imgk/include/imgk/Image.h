//
// Created by Hossam Samir on 05/09/2023.
//
#include "stb_image.h"

#ifndef IMGK_IMAGE_H
#define IMGK_IMAGE_H


struct Image {
    uint8_t *data;
    size_t size;
    int w;
    int h;
    int channels;

    Image(const char *filename);

    Image(int w, int h, int channels);

    Image(const Image &);

    bool read();

    bool write();

    ~Image();

};


#endif //IMGK_IMAGE_H
