//
// Created by Hossam Samir on 05/09/2023.
//
#ifndef IMGK_IMAGE_H
#define IMGK_IMAGE_H

#include <cstdio>
#include <cstdint>
#include <cmath>


#define STEG_HEADER_SIZE sizeof(uint32_t) * 8

#define BYTE_BOUND(value) value<0 ? 0:(value>255? 255 :value)
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

    ImageType Image::get_file_type(const char *filename);

    Image &grayscale_avg();

    Image &grayscale_lum();

    Image &colorMask(float r, float g, float b);

    Image &decodeMessage(char *buffer, size_t *messageLength);

    Image &encodeMessage(const char *message);

    Image &diffmap(Image &imag);

    Image &diffmap_scale(Image &img, uint8_t scl = 0);

    Image &
    std_convolve_clamp_to_0(uint8_t channel, uint32_t ker_w, uint32_t ker_h, double *ker, uint32_t cr, uint32_t cc);

    Image &flipX();

    Image &flipY();

    Image overlay(const Image &image, int x, int y);

    Image &Image::crop(uint16_t cx, uint16_t cy, uint16_t cw, uint16_t ch);

    Image& add_alpha();
};

#endif //IMGK_IMAGE_H
