
// Copyright 2012 Ettus Research LLC

#ifndef INCLUDED_B250_DEFS_H
#define INCLUDED_B250_DEFS_H

#define CPU_CLOCK 175000000
#define MAIN_RAM_BASE 0x0000
#define PKT_RAM0_BASE 0x8000
#define XGE0_BASE 0xC000
#define XGE1_BASE 0xD000
#define BOOT_LDR_BASE 0xFC00
#define UART0_BASE 0xfd00
#define UART0_BAUD 115200
#define UART1_BASE 0xf900
#define UART1_BAUD 115200
#define I2C0_BASE 0xfe00
#define I2C1_BASE 0xff00
#define I2C2_BASE 0xfc00
#define SET0_BASE 0xa000
#define RB0_BASE 0xa000 //same as set
#define SETXB_BASE 0xb000

#define ETH1G
//#define ETH10G 

//eeprom map for mboard addrs
#define MBOARD_EEPROM_ADDR 0x50

// Setting Regs Memeory Map
static const int SR_LEDS       = 0;
static const int SR_SW_RST     = 1;
static const int SR_CLOCK_CTRL = 2;
static const int SR_XB_LOCAL   = 3;
static const int SR_SFPP_CTRL  = 4;
static const int SR_SPI        = 32;
static const int SR_ETHINT0    = 40;
static const int SR_ETHINT1    = 56;

//led shifts for SR_LEDS
static const int LED_ACT1 = (1 << 5);
static const int LED_ACT2 = (1 << 4);
static const int LED_LINK1 = (1 << 3);
static const int LED_LINK2 = (1 << 2);
static const int LED_LINKSTAT = (1 << 1);
static const int LED_LINKACT = (1 << 0);

// Readback Memory Map
static const int RB_COUNTER      = 0;
static const int RB_SPI_RDY      = 1;
static const int RB_SPI_DATA     = 2;
static const int RB_ETH_TYPE0    = 4;
static const int RB_ETH_TYPE1    = 5;
static const int RB_SFPP_STATUS0 = 8;
static const int RB_SFPP_STATUS1 = 9;

// Bootloader Memory Map
static const int BL_ADDRESS     = 0;
static const int BL_DATA        = 1;

#define SW_RST_PHY 0x01
#define SW_RST_RADIO 0x02
#define SW_RST_RADIO_PLL 0x04

//eth framer constants
#define ETH_FRAMER_SRC_MAC_HI 0
#define ETH_FRAMER_SRC_MAC_LO 1
#define ETH_FRAMER_SRC_IP_ADDR 2
#define ETH_FRAMER_SRC_UDP_PORT 3
#define ETH_FRAMER_DST_RAM_ADDR 4
#define ETH_FRAMER_DST_IP_ADDR 5
#define ETH_FRAMER_DST_UDP_MAC 6
#define ETH_FRAMER_DST_MAC_LO 7

#endif /* INCLUDED_B250_DEFS_H */
