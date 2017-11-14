#pragma once

#include <ctime>
#include <math.h>
#include "ofMain.h"


class DummyData {
public:
	float* generateDummyData() {
		float* mapdata = new float[640 * 480];
		float scale = 0.05f;

		time_t seconds;
		seconds = time(NULL);
		if (startTime == 0){
			startTime = seconds;
		}
		float timeDelta = (seconds - startTime) / 20.0f;

		for (int x = 0; x < 640; x++)
		{
			for (int y = 0; y < 480; y++)
			{
				float tmp = (sin(y * scale+timeDelta) + 1) / 2;
				tmp += (sin(x * scale / 2+timeDelta) + 1) / 2;
				tmp *= 0.5f;

				mapdata[y * 640 + x] = tmp;
			}
		}
		return mapdata;
	}
private:
	 int startTime = 0;
};