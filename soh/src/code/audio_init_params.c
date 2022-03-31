#include "global.h"

u8 D_8016F0E0[0xA0]; // unused
AudioContext gAudioContext;
void (*D_801755D0)(void);
s32 D_801755D8[3]; // unused

const s16 D_8014A6C0[] = {
    0x1C00, // unused
    0x0030, // gTatumsPerBeat
};

const AudioContextInitSizes D_8014A6C4 = { 0x37F00, 0xE0E0, 0xBCE0 };

ReverbSettings D_80133420[][3] = {
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x20, 0x0800, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x0000, 0x0, 0x0 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x30, 0x1800, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x0000, 0xB, 0xB },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x38, 0x2800, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x0000, 0x7, 0x7 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x50, 0x5000, 0, 0, 0x7FFF, 0x1000, 0x1000, 0xFF, 0x3000, 0x7, 0x7 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x40, 0x5000, 0, 0, 0x7FFF, 0x1800, 0x1800, 0xFF, 0x3000, 0x7, 0x7 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x40, 0x5C00, 0, 0, 0x7FFF, 0x2000, 0x2000, 0xFF, 0x3000, 0x4, 0x4 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x30, 0x6000, 0, 0, 0x7FFF, 0x1000, 0x1000, 0xFF, 0x3000, 0xA, 0xA },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x30, 0x6800, 0, 0, 0x7FFF, 0x1400, 0x1400, 0xFF, 0x3000, 0x6, 0x6 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 2, 0x50, 0x5000, 0, 0, 0x7FFF, 0xD000, 0x3000, 0xFF, 0x3000, 0x0, 0x0 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x20, 0x0000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x0000, 0x0, 0x0 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x30, 0x1800, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x0000, 0xB, 0xB },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
    },
    {
        { 1, 0x30, 0x3000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
        { 1, 0x40, 0x5000, 0, 0, 0x7FFF, 0x0000, 0x0000, 0xFF, 0x3000, 0x0, 0x0 },
    },
};

AudioSpec gAudioSpecs[18] = {
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[0], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x4000, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[1], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[2], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 23, 4, 0, 0, 2, D_80133420[4], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 23, 4, 0, 0, 2, D_80133420[5], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[6], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[7], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 23, 4, 0, 0, 2, D_80133420[8], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[9], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 23, 4, 0, 0, 2, D_80133420[8], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 28, 3, 0, 0, 2, D_80133420[10], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x2800, 0x2880, 0, 0, 0 },
    { 32000, 1, 28, 3, 0, 0, 1, D_80133420[11], 0x300, 0x200, 0x7FFF, 0, 0x4800, 0, 0x4000, 0, 0, 0, 0 },
    { 32000, 1, 28, 3, 0, 0, 1, D_80133420[11], 0x300, 0x200, 0x7FFF, 0, 0, 0, 0x4000, 0x4800, 0, 0, 0 },
    { 32000, 1, 22, 4, 0, 0, 2, D_80133420[0], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 22, 4, 0, 0, 2, D_80133420[8], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 16, 4, 0, 0, 2, D_80133420[0], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 22050, 1, 24, 4, 0, 0, 2, D_80133420[0], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3800, 0x2880, 0, 0, 0 },
    { 32000, 1, 24, 4, 0, 0, 2, D_80133420[2], 0x300, 0x200, 0x7FFF, 0x7F0, 0xE00, 0, 0x3600, 0x2600, 0, 0, 0 },
};