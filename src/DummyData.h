#pragma once

#include <math.h>
#include "ofMain.h"

class DummyData {
public:
	static float* generateDummyData() {
		float* mapdata = new float[640 * 480];
		
		float scale = 0.05f;

		for (int x = 0; x < 640; x++)
		{
			for (int y = 0; y < 480; y++)
			{
				float tmp = (sin(y * scale) + 1) / 2;
				tmp += (sin(x * scale / 2) + 1) / 2;
				tmp *= 0.5f;

				mapdata[y * 640 + x] = tmp;
			}
		}
		return mapdata;
	}
};