/*
 * Copyright (C) ST-Ericsson SA 2010
 *
 * ST-Ericsson MCDE DPI display driver
 *
 * Author: Torbjorn Svensson <torbjorn.x.svensson@stericsson.com>
 * for ST-Ericsson.
 *
 * License terms: GNU General Public License (GPL), version 2.
 */

#ifndef __MCDE_DISPLAY_DPI__H__
#define __MCDE_DISPLAY_DPI__H__

#include <linux/regulator/consumer.h>

#include "mcde_display.h"

#define NASTECH_DISP_NUM_SUPPLIES 4

struct mcde_display_dpi_platform_data {
	/* Platform info */
	int reset_gpio;
	bool reset_high;
	const char *regulator_id;
	int reset_delay;

	/* Driver data */
	struct regulator *regulator;
	int max_supply_voltage;
	int min_supply_voltage;
	struct regulator_bulk_data supplies[NASTECH_DISP_NUM_SUPPLIES];
};
#endif /* __MCDE_DISPLAY_DPI__H__ */
