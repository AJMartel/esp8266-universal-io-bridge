#include <stdint.h>

typedef uint8_t uint8;
typedef uint32_t uint32;

#include "rboot/rboot.h"

const rboot_config rboot_config_data =
{
	.magic			= BOOT_CONFIG_MAGIC,
	.version		= 1,
	.mode			= MODE_STANDARD,
	.current_rom	= 0,
	.gpio_rom		= 0,
	.count			= 2,
	.unused			= { 0x4a, 0xfb },
	.roms			= { 0x02000, 0x102000, 0x00000, 0x00000 }
};
