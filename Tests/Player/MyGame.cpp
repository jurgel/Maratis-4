/////////////////////////////////////////////////////////////////////////////////////////////////////////
// ManualUse example
// MyGame.cpp
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

// This game example is showing how to manually create a scene and load objects
// it can also be used in Maratis as game plugin (like WaterGameDemo)


#include "MyGame.h"
#include <MLog.h>

MyGame::MyGame(void):
MGame()
{
    MLOG(6, "new MyGame...");
}

MyGame::~MyGame(void)
{
}

void MyGame::onBegin(void)
{
	MEngine * engine = MEngine::getInstance();
	MSystemContext * system = engine->getSystemContext();

	// get level
	MLevel * level = engine->getLevel();
	if(! level)
	{
	    MLOG(4, "Cannot get level from engine");
	    return;
	}

	engine->getLevelLoader()->loadData("data/levels/Sponza.level", level);
}

void MyGame::update(void)
{
	MEngine * engine = MEngine::getInstance();
	MInputContext * input = engine->getInputContext();

	MGame::update(); // call standard update, or replace it with cutom code

	// get level
	MLevel * level = engine->getLevel();
	if(! level)
	{
	    return;
	}

	// get current scene
	MScene * scene = level->getCurrentScene();
	if(! scene)
	{
	    return;
	}
}

/*
// custom draw, if not defined, draw is MGame::draw()
void MyGame::draw(void)
{
	MEngine * engine = MEngine::getInstance();
	MRenderingContext * render = engine->getRenderingContext();

	// get level
	MLevel * level = engine->getLevel();
	if(! level)
		return;

	// get current scene
	MScene * scene = level->getCurrentScene();
	if(! scene)
		return;

	render->enableDepthTest();

	MOCamera * camera = scene->getCameraByIndex(0);

	render->setClearColor(*camera->getClearColor());
	render->clear(M_BUFFER_COLOR | M_BUFFER_DEPTH);

	camera->enable();
	camera->updateListener();
	scene->draw(camera);
}
*/
