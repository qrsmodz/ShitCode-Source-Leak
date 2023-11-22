#pragma once

#define  IMGUI_DEFINE_MATH_OPERATORS


#include <string>
#include <vector>
#include <functional>
#include "Imgui/imgui.h"

using namespace std;

#define to_vec4( r, g, b, a ) ImColor( r / 255.f, g / 255.f, b / 255.f, a )

class c_custom
{

public:
    float m_anim = 0.f;

    
    float col_buf[4] = { 1.f, 1.f, 1.f, 1.f };


    int accent_color[4] = { 242, 192, 71, 255 };
    ImColor get_accent_color(float a = 1.f)
    {

        return to_vec4(accent_color[0], accent_color[1], accent_color[2], a);
    }


};

c_custom custom;

