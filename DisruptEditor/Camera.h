#pragma once
#include "Math/LinMath.h"

class Camera {
public:
	Camera() : up(0.f, 1.f, 0.f), type(ORBIT), phi(5.f * 3.14159265f / 8.f), theta(0.f), radius(10.f), lat(0.f), lon(0.f), near_plane(0.15f), far_plane(1500.f), fov(3.141592653f / 3.f) {}
	void update(float delta);
	
	vec3 location;
	vec3 lookingAt;
	vec3 up;
	
	enum Type {
		FLYCAM, ORBIT
	};
	Type type;
	
	float phi;
	float theta;
	float radius;
	float lat;
	float lon;
	
	float near_plane;
	float far_plane;
	float fov;
};