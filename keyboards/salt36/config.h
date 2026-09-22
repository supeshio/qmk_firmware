// Copyright 2023 Yuta Sakai (@unbosoms)                                                                                                                                    
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* AZ1UBALL settings */
#define PIMORONI_TRACKBALL_SCALE 8    // default 5
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15