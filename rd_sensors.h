/*
 * rd_sensors.h: Include file used to read sensors statistics
 * (C) 1999-2017 by Sebastien Godard (sysstat <at> orange.fr)
 */

#ifndef _RD_SENSORS_H
#define _RD_SENSORS_H

#include "common.h"
#include "rd_stats.h"

/*
 ***************************************************************************
 * Definitions of structures for sensors statistics
 ***************************************************************************
 */

/*
 * Structure for fan statistics.
 */
struct stats_pwr_fan {
	double  rpm				__attribute__ ((aligned (8)));
	double  rpm_min				__attribute__ ((aligned (8)));
	char    device[MAX_SENSORS_DEV_LEN]	__attribute__ ((aligned (8)));
};

#define STATS_PWR_FAN_SIZE     (sizeof(struct stats_pwr_fan))

/*
 * Structure for device temperature statistics.
 */
struct stats_pwr_temp {
	double  temp				__attribute__ ((aligned (8)));
	double  temp_min			__attribute__ ((aligned (8)));
	double  temp_max			__attribute__ ((aligned (8)));
	char    device[MAX_SENSORS_DEV_LEN]	__attribute__ ((aligned (8)));
};

#define STATS_PWR_TEMP_SIZE    (sizeof(struct stats_pwr_temp))

/*
 * Structure for voltage inputs statistics.
 */
struct stats_pwr_in {
	double  in				__attribute__ ((aligned (8)));
	double  in_min				__attribute__ ((aligned (8)));
	double  in_max				__attribute__ ((aligned (8)));
	char    device[MAX_SENSORS_DEV_LEN]	__attribute__ ((aligned (8)));
};

#define STATS_PWR_IN_SIZE	(sizeof(struct stats_pwr_in))

/*
 ***************************************************************************
 * Prototypes for functions used to read sensors statistics
 ***************************************************************************
 */

__nr_t read_fan
	(struct stats_pwr_fan *, __nr_t);
__nr_t read_temp
	(struct stats_pwr_temp *, __nr_t);
__nr_t read_in
	(struct stats_pwr_in *, __nr_t);

/*
 ***************************************************************************
 * Prototypes for functions used to count number of items
 ***************************************************************************
 */

__nr_t get_fan_nr
	(void);
__nr_t get_temp_nr
	(void);
__nr_t get_in_nr
	(void);

#endif /* _RD_SENSORS_H */
