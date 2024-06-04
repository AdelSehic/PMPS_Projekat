/*
 * controller.h
 *
 *  Created on: Jun 4, 2024
 *      Author: adeldsk
 */

#ifndef INC_CONTROLLER_H_
#define INC_CONTROLLER_H_

#include "stdint.h"

struct Controller {
	uint8_t *wind_speed;
	uint8_t wind_count;
	uint8_t *blade_angle;
	uint8_t angle_count;
	uint8_t **heatmap;
};

struct Controller* CTRL_ControllerInit();
void CTRL_Cleanup(struct Controller*);
char* CTRL_HeatmapString(struct Controller*);
int CTRL_FindAngle(struct Controller*, int windspeed, int angle);
void CTRL_SetParameters(struct Controller*, char*);

#endif /* INC_CONTROLLER_H_ */
