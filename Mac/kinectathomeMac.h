/*
 *  tutorialpluginMac.h
 *  FireBreath
 *
 *  Created by Roy Shilkrot on 11/30/11.
 *  Copyright 2011 MIT. All rights reserved.
 *
 */
#pragma once

#include "PluginEvents/MacEventCarbon.h"
#include "PluginEvents/MacEventCocoa.h"
#include "Mac/PluginWindowMac.h"

#include "../kinectathome.h"

class kinectathomeMac : public kinectathome {
public:
    kinectathomeMac();
	~kinectathomeMac();
	
    BEGIN_PLUGIN_EVENT_MAP()
	EVENTTYPE_CASE(FB::AttachedEvent, onWindowAttached, FB::PluginWindowMac)
	EVENTTYPE_CASE(FB::DetachedEvent, onWindowDetached, FB::PluginWindowMac)
	PLUGIN_EVENT_MAP_CASCADE(kinectathome)
    END_PLUGIN_EVENT_MAP()
	
    virtual bool onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindowMac*);
    virtual bool onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindowMac*);
protected:

private:
    void* m_layer;
	
};
