#pragma once
#include "Module.h"
#include "Globals.h"

#define TIME_STEP 1.0f / 60.0f
#define VELOCITY_ITERATIONS 8
#define POSITION_ITERATIONS 3
#define PIXEL_METER(num_pixel) ((num_pixel / 300) * 2)
#define METER_PIXEL(num_meters) ((num_meters * 300) / 2)

class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:

	b2World* world;
	bool debug;
	float gravity_x;
	float gravity_y;
};