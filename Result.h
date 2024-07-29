#pragma once
#include "imgui.h"
#include "Mathfunction.h"
#include "struct.h"

static const int kWindowWidth = 1280;
static const int kWindowHeight = 720;

class Result
{
public:

	Vector3 cameraTranslate{};
	Vector3 cameraRotate{};
	Vector3 rotate{};
	Vector3 translate{};
	Vector3 cameraPosition{};
	Matrix4x4 worldMatrix{};
	Matrix4x4 cameraMatrix{};
	Matrix4x4 viewMatrix{};
	Matrix4x4 projectionMatrix{};
	Matrix4x4 worldviewProjectionMatrix{};
	Matrix4x4 viewportMatrix{};

	Sphere sphere{};
	Plane plane{};
	uint32_t color{};

	Segment segment
	{
		{0.0f, 0.1f, -2.0f}, //origin
		{1.0f, -0.4f, 2.0f}, //diff

	};

	//int color = WHITE;

	Result();

	void Initialize();

	void Updata();

	void Draw();

};
