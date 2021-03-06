// (c) 2013, 2014 Henner Zeller <h.zeller@acm.org>
//
// This file is part of BeagleG. http://github.com/hzeller/beagleg
//
// BeagleG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// BeagleG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with BeagleG.  If not, see <http://www.gnu.org/licenses/>.
//

// To be read by *.c and *.p file, so only // comments and simple defines.

// Frequency we use for our timer. The CPU uses two CPU cycles per busy loop,
// so we divide CPU freq by that.
// A hardware timer might run natively at full speed.
#define TIMER_FREQUENCY (200000000 / 2)

#define STATE_EMPTY  0   // Queue element empty, ready to be filled by host
#define STATE_FILLED 1   // Queue element filled by host, to be picked up by PRU
#define STATE_EXIT   2   // Filled by host, no parameters; tells PRU to exit.

#define QUEUE_LEN 16

// In calculation of delay cycles: number of bits shifted
// for higher resolution.
#define DELAY_CYCLE_SHIFT 5

// We only use GPIO-bins that are not otherwise reserved for BeagleBone
// capabilities.
// GPIO-0 - output steps.
#define MOTOR_1_STEP_BIT  2
#define MOTOR_2_STEP_BIT  3
#define MOTOR_3_STEP_BIT  4
#define MOTOR_4_STEP_BIT  5
#define MOTOR_5_STEP_BIT  7
#define MOTOR_6_STEP_BIT 14
#define MOTOR_7_STEP_BIT 15
#define MOTOR_8_STEP_BIT 20

#define AUX_1_BIT 30
#define AUX_2_BIT 31

// GPIO-0 - input bits.
#define STOP_1_BIT 23
#define STOP_2_BIT 26
#define STOP_3_BIT 27

// GPIO-1 - the direction bits are mapped on GPIO-1, starting from bit 12
// as that is a contiguous region accessible as IO pins.
#define DIRECTION_GPIO1_SHIFT 12
#define MOTOR_ENABLE_GPIO1_BIT 28
