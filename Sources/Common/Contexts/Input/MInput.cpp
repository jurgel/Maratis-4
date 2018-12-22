/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Maratis
// MInput.cpp
/////////////////////////////////////////////////////////////////////////////////////////////////////////

//========================================================================
// Copyright (c) 2003-2011 Anael Seghezzi <www.maratis3d.com>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================


#include "MInput.h"
#include "MWinEvents.h"

#include "MVector2.h"
#include "MVector3.h"


static const char * getKeyMapping(int key)
{
	switch(key)
	{
		case MKEY_BACKSPACE:	return "BACKSPACE";
		case MKEY_TAB:			return "TAB";
		case MKEY_RETURN:		return "ENTER";
//		case GLFW_KEY_PAUSE:		return MKEY_PAUSE;
//		case GLFW_KEY_ESCAPE:		return MKEY_ESCAPE;
//		case GLFW_KEY_DELETE:		return MKEY_DELETE;
//		case GLFW_KEY_KP_0:			return MKEY_KP_0;
//		case GLFW_KEY_KP_1:			return MKEY_KP_1;
//		case GLFW_KEY_KP_2:			return MKEY_KP_2;
//		case GLFW_KEY_KP_3:			return MKEY_KP_3;
//		case GLFW_KEY_KP_4:			return MKEY_KP_4;
//		case GLFW_KEY_KP_5:			return MKEY_KP_5;
//		case GLFW_KEY_KP_6:			return MKEY_KP_6;
//		case GLFW_KEY_KP_7:			return MKEY_KP_7;
//		case GLFW_KEY_KP_8:			return MKEY_KP_8;
//		case GLFW_KEY_KP_9:			return MKEY_KP_9;
//		case GLFW_KEY_KP_ENTER:		return MKEY_KP_ENTER;
//		case GLFW_KEY_KP_ADD:		return MKEY_KP_ADD;
//		case GLFW_KEY_KP_SUBTRACT:	return MKEY_KP_SUB;
//		case GLFW_KEY_KP_MULTIPLY:	return MKEY_KP_MUL;
//		case GLFW_KEY_KP_DIVIDE:	return MKEY_KP_DIV;
//		case GLFW_KEY_KP_DECIMAL:	return MKEY_KP_DECIMAL;
//		case GLFW_KEY_KP_EQUAL:		return MKEY_KP_EQUAL;
		case MKEY_UP:			return "UP";
		case MKEY_DOWN:			return "DOWN";
		case MKEY_RIGHT:		return "LEFT";
		case MKEY_LEFT:			return "RIGHT";
//		case GLFW_KEY_INSERT:		return MKEY_INSERT;
//		case GLFW_KEY_HOME:			return MKEY_HOME;
//		case GLFW_KEY_END:			return MKEY_END;
//		case GLFW_KEY_PAGE_UP:		return MKEY_PAGEUP;
//		case GLFW_KEY_PAGE_DOWN:	return MKEY_PAGEDOWN;
//		case GLFW_KEY_F1:			return MKEY_F1;
//		case GLFW_KEY_F2:			return MKEY_F2;
//		case GLFW_KEY_F3:			return MKEY_F3;
//		case GLFW_KEY_F4:			return MKEY_F4;
//		case GLFW_KEY_F5:			return MKEY_F5;
//		case GLFW_KEY_F6:			return MKEY_F6;
//		case GLFW_KEY_F7:			return MKEY_F7;
//		case GLFW_KEY_F8:			return MKEY_F8;
//		case GLFW_KEY_F9:			return MKEY_F9;
//		case GLFW_KEY_F10:			return MKEY_F10;
//		case GLFW_KEY_F11:			return MKEY_F11;
//		case GLFW_KEY_F12:			return MKEY_F12;
//		case GLFW_KEY_CAPS_LOCK:	return MKEY_CAPSLOCK;
//		case GLFW_KEY_NUM_LOCK:		return MKEY_NUMLOCK;
//		case GLFW_KEY_RIGHT_SHIFT:	return MKEY_RSHIFT;
//		case GLFW_KEY_LEFT_SHIFT:	return MKEY_LSHIFT;
//		case GLFW_KEY_RIGHT_CONTROL:return MKEY_RCONTROL;
//		case GLFW_KEY_LEFT_CONTROL:	return MKEY_LCONTROL;
//		case GLFW_KEY_RIGHT_ALT:	return MKEY_RALT;
//		case GLFW_KEY_LEFT_ALT:		return MKEY_LALT;
//		case GLFW_KEY_PRINT_SCREEN:	return MKEY_PRINT;
//		case GLFW_KEY_MENU:			return MKEY_MENU;
//		case GLFW_KEY_RIGHT_SUPER:	return MKEY_RSUPER;
//		case GLFW_KEY_LEFT_SUPER:	return MKEY_LSUPER;
		default:					return "ESCAPE";
	}
}

MInput::MInput(void)
{
	// ASCII keys
	char name[2] = {0, 0};
	for(int i=65; i<=90; i++)
    {
		name[0] = i;
		createKey(name);
	}
    
    // create touch data
    for(int i=0; i<10; i++)
    {
        m_touches[i] = TouchData();
    }

	// keyboard keys
	createKey("BACKSPACE");
	createKey("TAB");
	createKey("ESCAPE");
	createKey("SPACE");
	createKey("DELETE");
	createKey("0");
	createKey("1");
	createKey("2");
	createKey("3");
	createKey("4");
	createKey("5");
	createKey("6");
	createKey("7");
	createKey("8");
	createKey("9");
	createKey("ENTER");
	createKey("UP");
	createKey("DOWN");
	createKey("LEFT");
	createKey("RIGHT");
	createKey("F1");
	createKey("F2");
	createKey("F3");
	createKey("F4");
	createKey("F5");
	createKey("F6");
	createKey("F7");
	createKey("F8");
	createKey("F9");
	createKey("F10");
	createKey("F11");
	createKey("F12");
	createKey("RSHIFT");
	createKey("LSHIFT");
	createKey("RCONTROL");
	createKey("LCONTROL");
	createKey("RALT");
	createKey("LALT");

	// mouse keys
	createKey("MOUSE_BUTTON1");
	createKey("MOUSE_BUTTON2");
	createKey("MOUSE_BUTTON3");

	// joystick keys
	createKey("JOY1_BUTTON1");
	createKey("JOY1_BUTTON2");
	createKey("JOY1_BUTTON3");
	createKey("JOY1_BUTTON4");
	createKey("JOY1_BUTTON5");
	createKey("JOY1_BUTTON6");
	createKey("JOY1_BUTTON7");
	createKey("JOY1_BUTTON8");

	createKey("JOY2_BUTTON1");
	createKey("JOY2_BUTTON2");
	createKey("JOY2_BUTTON3");
	createKey("JOY2_BUTTON4");
	createKey("JOY2_BUTTON5");
	createKey("JOY2_BUTTON6");
	createKey("JOY2_BUTTON7");
	createKey("JOY2_BUTTON8");

	// axis
	createAxis("MOUSE_X");
	createAxis("MOUSE_Y");
	createAxis("MOUSE_WHEEL", 1);

	createAxis("JOY1_X");
	createAxis("JOY1_Y");
	createAxis("JOY1_Z");
	createAxis("JOY1_R");
	createAxis("JOY1_U");
	createAxis("JOY1_V");

	createAxis("JOY2_X");
	createAxis("JOY2_Y");
	createAxis("JOY2_Z");
	createAxis("JOY2_R");
	createAxis("JOY2_U");
	createAxis("JOY2_V");
}

MInput::~MInput(void)
{}

void MInput::createKey(const char * name)
{
	if(name)
		m_keys[name] = 0;
}

void MInput::createAxis(const char * name, bool flush)
{
	if(name)
	{
		m_axis[name] = 0;
		if(flush) m_axisToFlush.push_back(&m_axis[name]);
	}
}

void MInput::createProperty(const char * name)
{
	if(name)
		m_props[name] = 0;
}

void MInput::downKey(int key)
{
	downKey(getKeyMapping(key));
}

void MInput::upKey(int key)
{
	upKey(getKeyMapping(key));
}

void MInput::downKey(const char * name)
{
	map<string, int>::iterator iter = m_keys.find(name);
	if(iter != m_keys.end())
		iter->second = 1;
}

void MInput::upKey(const char * name)
{
	map<string, int>::iterator iter = m_keys.find(name);
	if(iter != m_keys.end())
		iter->second = 3;
}

void MInput::setAxis(const char * name, float axis)
{
	map<string, float>::iterator iter = m_axis.find(name);
	if(iter != m_axis.end())
		iter->second = axis;
}

void MInput::setProperty(const char * name, int prop)
{
	map<string, int>::iterator iter = m_props.find(name);
	if(iter != m_props.end())
		iter->second = prop;
}

bool MInput::isKeyPressed(const char * name)
{
	map<string, int>::iterator iter = m_keys.find(name);
	if(iter != m_keys.end())
		return (iter->second == 1 || iter->second == 2);

	return false;
}

bool MInput::onKeyDown(const char * name)
{
	map<string, int>::iterator iter = m_keys.find(name);
	if(iter != m_keys.end())
		return (iter->second == 1);

	return false;
}

bool MInput::onKeyUp(const char * name)
{
	map<string, int>::iterator iter = m_keys.find(name);
	if(iter != m_keys.end())
		return (iter->second == 3);

	return false;
}

float MInput::getAxis(const char * name)
{
	map<string, float>::iterator iter = m_axis.find(name);
	if(iter != m_axis.end())
		return iter->second;

	return 0;
}

int MInput::getProperty(const char * name)
{
	map<string, int>::iterator iter = m_props.find(name);
	if(iter != m_props.end())
		return iter->second;

	return 0;
}

void MInput::beginTouch(int touchID, MVector2 touchPoint)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        data->touchPoint = touchPoint;
        data->lastTouchPoint = touchPoint;
        data->phase = M_TOUCH_BEGIN;
    }
}

void MInput::updateTouch(int touchID, MVector2 touchPoint)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        data->lastTouchPoint = data->touchPoint;
        data->touchPoint = touchPoint;
        data->phase = M_TOUCH_UPDATE;
    }
}

void MInput::endTouch(int touchID, MVector2 touchPoint)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        data->lastTouchPoint = data->touchPoint;
        data->touchPoint = touchPoint;
        data->phase = M_TOUCH_END;
    }
}

void MInput::cancelTouch(int touchID, MVector2 touchPoint)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        data->lastTouchPoint = data->touchPoint;
        data->touchPoint = touchPoint;
        data->phase = M_TOUCH_CANCELLED;
    }
}

MVector2 MInput::getTouchPosition(int touchID)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        
        if (data->phase != M_TOUCH_NONE)
        {
            return data->touchPoint;
        }
    }
    
    return MVector2(0.0f);
}

MVector2 MInput::getLastTouchPosition(int touchID)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        if (data->phase != M_TOUCH_NONE)
        {
            return data->lastTouchPoint;
        }
    }
    
    return MVector2(0.0f);
}

M_TOUCH_PHASE MInput::getTouchPhase(int touchID)
{
    map<int, TouchData>::iterator iter = m_touches.find(touchID);
    
    if(iter != m_touches.end())
    {
        TouchData* data = &(iter->second);
        
        return data->phase;
    }
    
    return M_TOUCH_NONE;
}

void MInput::flush(void)
{
	// keys
	map<string, int>::iterator
		mit (m_keys.begin()),
		mend(m_keys.end());

	for(; mit!=mend; mit++)
	{
		if(mit->second == 1)
			mit->second = 2;
		else if(mit->second == 3)
			mit->second = 0;
	}
    
	// axis
	unsigned int a, aSize = m_axisToFlush.size();
	for(a=0; a<aSize; a++)
		(*m_axisToFlush[a]) = 0;
	
    // touches
    map<int, TouchData>::iterator
		t_it(m_touches.begin()),
		t_end(m_touches.end());
    
    for(; t_it!=t_end; t_it++)
    {
		TouchData* data = &(t_it->second);
        data->phase = M_TOUCH_NONE;
        data->touchPoint = MVector2(0.0f);
    }
}
