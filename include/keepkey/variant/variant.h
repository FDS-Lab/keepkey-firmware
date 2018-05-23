#ifndef KEEPKEY_VARIANT_VARIANT_H
#define KEEPKEY_VARIANT_VARIANT_H

#include <inttypes.h>

#define VARIANT_INFO_MAGIC "KKWL"

typedef struct _VariantImage {
    uint16_t h;
    uint16_t w;
    uint32_t length;
    uint8_t *data;
} VariantImage;

typedef struct _VariantFrame {
    uint16_t x;
    uint16_t y;
    uint8_t color;
    VariantImage *image;
} VariantFrame;

typedef struct _VariantAnimation {
    uint16_t count;
    VariantFrame frames[];
} VariantAnimation;

typedef struct _VariantInfo {
    char magic[4];
    uint16_t version;
    const char *name;
    VariantImage *home_screen;
    VariantAnimation *screensaver;
} VariantInfo;

/// Get the VariantInfo from sector 4 of flash (if it exists), otherwise
/// fallback on keepkey imagery.
const VariantInfo *variant_getInfo(void);

/// Get the Screensaver.
const VariantAnimation *variant_getScreensaver(void);

/// Get the HomeScreen.
const VariantImage *variant_getHomeScreen(void);

#endif
