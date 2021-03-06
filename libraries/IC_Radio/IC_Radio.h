//
//  IC_Radio.h
//  IntelliCopter
//
//  Created by Daniel Heo on 2016. 7. 12.
//  Copyright © 2016 http://dronix.kr. All rights reserved.
//

#ifndef _IC_RADIO_H_
#define _IC_RADIO_H_

#include "config.h"
#include "params.h"

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif
// nums of RC channel
#define RC_CH_NUM 4

// RC pin configuration
#define RC_CH1 30
#define RC_CH2 31
#define RC_CH3 32
#define RC_CH4 33
#define RC_CH5 35

// Radio pulse width limits configuration
// CH1
#define RC_CH1_HIGH  1050
#define RC_CH1_LOW  1940
// CH2
#define RC_CH2_HIGH  1090
#define RC_CH2_LOW  1910
// CH3
#define RC_CH3_HIGH  1960
#define RC_CH3_LOW  1090
// CH4
#define RC_CH4_HIGH  1130
#define RC_CH4_LOW  1800
// CH5
#define RC_CH5_HIGH  1090
#define RC_CH5_MID  1510
#define RC_CH5_LOW  1930

#define ROUNDING_BASE  10

// Offsets
#define YAW_CMD_OFFSET  -1
#define PITCH_CMD_OFFSET -1
#define ROLL_CMD_OFFSET  0
#define ALT_CMD_OFFSET  0

class IC_Radio {
public:
								IC_Radio();

								void begin();
								uint8_t getCommands(double *data);

private:

								void sCounter();

								static void acquireLock();
								static void releaseLock();

};

#endif
