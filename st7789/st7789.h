#ifndef __ST7789_H__
#define __ST7789_H__

#ifdef __cplusplus
extern "C" {
#endif

#define ST7789_240x240_XSTART 0
#define ST7789_240x240_YSTART 0
#define ST7789_135x240_XSTART 52
#define ST7789_135x240_YSTART 40


// color modes
#define COLOR_MODE_65K      0x50
#define COLOR_MODE_262K     0x60
#define COLOR_MODE_12BIT    0x03
#define COLOR_MODE_16BIT    0x05
#define COLOR_MODE_18BIT    0x06
#define COLOR_MODE_16M      0x07

// commands
#define ST7789_NOP     0x00
#define ST7789_SWRESET 0x01
#define ST7789_RDDID   0x04
#define ST7789_RDDST   0x09

#define ST7789_SLPIN   0x10
#define ST7789_SLPOUT  0x11
#define ST7789_PTLON   0x12
#define ST7789_NORON   0x13

#define ST7789_INVOFF  0x20
#define ST7789_INVON   0x21
#define ST7789_DISPOFF 0x28
#define ST7789_DISPON  0x29
#define ST7789_CASET   0x2A
#define ST7789_RASET   0x2B
#define ST7789_RAMWR   0x2C
#define ST7789_RAMRD   0x2E

#define ST7789_PTLAR   0x30
#define ST7789_COLMOD  0x3A
#define ST7789_MADCTL  0x36

#define ST7789_MADCTL_MY  0x80  // Page Address Order
#define ST7789_MADCTL_MX  0x40  // Column Address Order
#define ST7789_MADCTL_MV  0x20  // Page/Column Order
#define ST7789_MADCTL_ML  0x10  // Line Address Order
#define ST7789_MADCTL_MH  0x04  // Display Data Latch Order
#define ST7789_MADCTL_RGB 0x00
#define ST7789_MADCTL_BGR 0x08

#define ST7789_PORCTRK 0xB2
#define ST7789_PORCTRK_BPA   0x0C
#define ST7789_PORCTRK_FPA   0x0C
#define ST7789_PORCTRK_PSEN  0x00
#define ST7789_PORCTRK_BPB   0x30
#define ST7789_PORCTRK_FPB   0x03
#define ST7789_PORCTRK_BPC   0x30
#define ST7789_PORCTRK_FPC   0x03

#define ST7789_GCTRL   0xB7
#define ST7789_GCTRL_VGHS    0x30  //  13.26V
#define ST7789_GCTRL_VGLS    0x05  // -10.43V

#define ST7789_VCOMS   0xBB
#define ST7789_VCOMS_VCOMS   0x2B  // 1.175V

#define ST7789_LCMCTRL 0xC0
#define ST7789_LCMCTRL_XMY   0x00
#define ST7789_LCMCTRL_XBGR  0x20
#define ST7789_LCMCTRL_XREV  0x00
#define ST7789_LCMCTRL_XMH   0x08
#define ST7789_LCMCTRL_XMV   0x04
#define ST7789_LCMCTRL_XMX   0x00
#define ST7789_LCMCTRL_GS    0x00

#define ST7789_VDVVRHEN 0xC2
#define ST7789_VRHS     0xC3
#define ST7789_VDVS     0xC4
#define ST7789_FRCTRL2  0xC6
#define ST7789_PWCTRL1  0xD0

#define ST7789_RDID1   0xDA
#define ST7789_RDID2   0xDB
#define ST7789_RDID3   0xDC
#define ST7789_RDID4   0xDD
#define ST7789_PVGAMCTRL 0xE0
#define ST7789_NVGAMCTRL 0xE1


// Color definitions
#define	BLACK   0x000000
#define	BLUE    0xFC0000
#define	RED     0x0000FC
#define	GREEN   0x00FC00
#define YELLOW  0x00FCFC
#define MAGENTA 0xFC00FC
#define CYAN    0xFCFC00
#define WHITE   0xFFFFFF

#ifdef  __cplusplus
}
#endif /*  __cplusplus */

#endif  /*  __ST7789_H__ */
