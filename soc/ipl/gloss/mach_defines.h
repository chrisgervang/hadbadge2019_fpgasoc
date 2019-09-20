#pragma once

#define MACH_RAM_START		0x40000000
#define MACH_RAM_SIZE		(16*1024*1024)
#define MACH_FLUSH_REGION 	0x41000000

#define MEM_IPL_START		0x40002000
#define MEM_APP_START		0x40100000

#define UART_OFFSET		0x10000000
#define UART_DATA_REG	0x0
#define UART_DIV_REG	0x4
#define UART_IRDA_DATA_REG	0x8
#define UART_IRDA_DIV_REG	0xC

#define MISC_OFFSET 0x20000000
#define MISC_LED_REG 0x0
#define MISC_BTN_REG 0x4
#define BUTTON_UP (1<<0)
#define BUTTON_DOWN (1<<1)
#define BUTTON_LEFT (1<<2)
#define BUTTON_RIGHT (1<<3)
#define BUTTON_A (1<<4)
#define BUTTON_B (1<<5)
#define BUTTON_SELECT (1<<6)
#define BUTTON_START (1<<7)
#define MISC_SOC_VER 0x8
#define MISC_CPU_NO 0xC
#define MISC_PSRAMOVRA_REG 0x10
#define MISC_PSRAMOVRB_REG 0x14
#define MISC_RESETN_REG 0x18
#define MISC_FLASH_CTL_REG 0x1C
#define MISC_FLASH_CTL_CLAIM (1<<0)
#define MISC_FLASH_CTL_IDLE (1<<1)
#define MISC_FLASH_WDATA_REG 0x20
#define MISC_FLASH_RDATA_REG 0x24
#define MISC_RNG_REG 0x28
#define MISC_FLASH_SEL_REG 0x2C
#define MISC_FLASH_SEL_CARTFLASH 1
#define MISC_FLASH_SEL_INTFLASH 0
#define MISC_FLASH_SEL_FPGARELOAD_MAGIC (0xD0F1A5<<8)
#define MISC_ADC_CTL_REG 0x30
#define MISC_ADC_CTL_ENA (1<<0)
#define MISC_ADC_CTL_VALID (1<<1)
#define MISC_ADC_CTL_DIV(x) (x<<16)
#define MISC_ADC_VAL_REG 0x34
#define MISC_GENIO_IN_REG 0x38
#define MISC_GENIO_OUT_REG 0x3C
#define MISC_GENIO_OE_REG 0x40
#define MISC_GENIO_W2S_REG 0x44
#define MISC_GENIO_W2C_REG 0x48
#define MISC_GPEXT_IN_REG 0x4C
#define MISC_GPEXT_OUT_REG 0x50
#define MISC_GPEXT_OE_REG 0x54
#define MISC_GPEXT_W2S_REG 0x58
#define MISC_GPEXT_W2C_REG 0x5C


#define LCD_OFFSET 0x30000000
#define LCD_COMMAND_REG 0x0
#define LCD_DATA_REG 0x4
#define LCD_CONTROL_REG 0x8
#define LCD_CONTROL_BLEN (1<<0)
#define LCD_CONTROL_RST (1<<1)
#define LCD_CONTROL_CS (1<<2)
#define LCD_CONTROL_FBSTART (1<<3)
#define LCD_CONTROL_FBENA (1<<4)
#define LCD_STATUS_REG 0xC
#define LCD_STATUS_FMARK (1<<0)
#define LCD_STATUS_ID (1<<1)
#define LCD_FB_STARTCMD 0x10

#define GFX_OFFSET 0x50000000
#define GFX_PALDEF0_REG 0x0
#define GFX_PALDEF1_REG 0x4
#define GFX_PALDEF2_REG 0x8
#define GFX_PALDEF3_REG 0xC
#define GFX_PALDEF4_REG 0x10
#define GFX_PALDEF5_REG 0x14
#define GFX_PALDEF6_REG 0x18
#define GFX_PALDEF7_REG 0x1C
#define GFX_PALDEF8_REG 0x20
#define GFX_PALDEF9_REG 0x24
#define GFX_PALDEF10_REG 0x28
#define GFX_PALDEF11_REG 0x2C
#define GFX_PALDEF12_REG 0x30
#define GFX_PALDEF13_REG 0x34
#define GFX_PALDEF14_REG 0x38
#define GFX_PALDEF15_REG 0x3C
#define GFX_FBADDR_REG 0x40

#define USB_CORE_OFFSET 0x60000000
#define USB_COREREGS 0x00000
#define USB_RXMEM    0x10000
#define USB_TXMEM    0x20000

#define USB_DATA_BASE_RX (USB_CORE_OFFSET+USB_RXMEM)
#define USB_DATA_BASE_TX (USB_CORE_OFFSET+USB_TXMEM)

