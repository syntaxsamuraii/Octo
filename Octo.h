#pragma once
#include <string>
#include "Mathf.h"

namespace Octo
{
	struct Window
	{
		_declspec(dllimport) void Create(const std::string& name, int width, int height, bool FullScreen);
		_declspec(dllimport) bool Running();
		_declspec(dllimport) void Clear(float red, float green, float blue, float alpha);
		_declspec(dllimport) void Display();
		_declspec(dllimport) void DestroyWindow();
		_declspec(dllimport) void SetWindowName(const std::string& name);
		_declspec(dllimport) void SetWindowSize(int width, int height);
		_declspec(dllimport) void SetCameraZoom(float _zoom);
		_declspec(dllimport) void SetCameraPosition(float _x, float _y);
        _declspec(dllimport) void MoveCamera(float _x, float _y);
        _declspec(dllimport) void Zoom(float _zoom);

	private:
		float zoom = -95.0f;
		float x = 0.0f;
		float y = 0.0f;
	};

	struct Sprite
	{
	public:
		_declspec(dllimport) void SetID(int Id);
		_declspec(dllimport) void SetName(const std::string& _name);
		_declspec(dllimport) void SetTag(const std::string& _tag);
		_declspec(dllimport) void SetColor(float Red, float Green, float Blue, float Alpha);
		_declspec(dllimport) void SetPosition(float x, float y);
		_declspec(dllimport) void SetScale(float x, float y);
		_declspec(dllimport) void SetRotation(float radian);
		_declspec(dllimport) void SetZValue(float value);
		_declspec(dllimport) void Move(float x, float y);
		_declspec(dllimport) int GetID();
		_declspec(dllimport) std::string GetName();
		_declspec(dllimport) std::string GetTag();
		_declspec(dllimport) float GetColor_Red();
		_declspec(dllimport) float GetColor_Blue();
		_declspec(dllimport) float GetColor_Green();
		_declspec(dllimport) float GetColor_Alpha();
		_declspec(dllimport) float GetPosition_X();
		_declspec(dllimport) float GetPosition_Y();
		_declspec(dllimport) float GetScale_X();
		_declspec(dllimport) float GetScale_Y();
		_declspec(dllimport) float GetRotation();
		_declspec(dllimport) float GetZValue();

		_declspec(dllimport) void DestroyShaders();

		_declspec(dllimport) unsigned int loadfrompath(const std::string& path);
		_declspec(dllimport) void Init();
		_declspec(dllimport) void Draw(unsigned int texture);

	private:
		Mathf::Vector2 Position = { 0,  0 };
		Mathf::Vector2 Scale = { 10,  10 };
		float Rotation = 0;
		float zValue = 0;

		unsigned int VBO, VAO, EBO;
		int ID = -1;
		std::string name = "NewGameObject";
		std::string tag = "New Tag";
		float color[3] = { (float)255 / 255, (float)255 / 255, (float)255 / 255 };
		float opacity = 255 / 255;
	};

    enum OctoKey
    {
        OCTO_A,
        OCTO_B,
        OCTO_C,
        OCTO_D,
        OCTO_E,
        OCTO_F,
        OCTO_G,
        OCTO_H,
        OCTO_I,
        OCTO_J,
        OCTO_K,
        OCTO_L,
        OCTO_M,
        OCTO_N,
        OCTO_O,
        OCTO_P,
        OCTO_Q,
        OCTO_R,
        OCTO_S,
        OCTO_T,
        OCTO_U,
        OCTO_V,
        OCTO_W,
        OCTO_X,
        OCTO_Y,
        OCTO_Z,

        OCTO_NUM_0,
        OCTO_NUM_1,
        OCTO_NUM_2,
        OCTO_NUM_3,
        OCTO_NUM_4,
        OCTO_NUM_5,
        OCTO_NUM_6,
        OCTO_NUM_7,
        OCTO_NUM_8,
        OCTO_NUM_9,

        // Special character keys
        OCTO_ESCAPE,
        OCTO_ENTER,
        OCTO_TAB,
        OCTO_SPACE,
        OCTO_BACKSPACE,
        OCTO_LEFTSHIFT,
        OCTO_RIGHTSHIFT,
        OCTO_LEFTCTRL,
        OCTO_RIGHTCTRL,
        OCTO_LEFTALT,
        OCTO_RIGHTALT,

        OCTO_LEFT_ARROW,
        OCTO_RIGHT_ARROW,
        OCTO_UP_ARROW,
        OCTO_DOWN_ARROW,

        OCTO_F1,
        OCTO_F2,
        OCTO_F3,
        OCTO_F4,
        OCTO_F5,
        OCTO_F6,
        OCTO_F7,
        OCTO_F8,
        OCTO_F9,
        OCTO_F10,
        OCTO_F11,
        OCTO_F12,
    };

    struct Audio
    {
    public:
        _declspec(dllimport) const std::string loadfromfile(const std::string& path);
        _declspec(dllexport) void Init(const std::string& path);
        _declspec(dllimport) void Play();
        _declspec(dllimport) void Stop();
    };

    _declspec(dllimport) bool IsKeyPressed(OctoKey key);
    _declspec(dllimport) bool IsKeyReleased(OctoKey key);


}
