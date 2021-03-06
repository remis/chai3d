//===========================================================================
/*
    This file is part of the CHAI 3D visualization and haptics libraries.
    Copyright (C) 2003-2004 by CHAI 3D. All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License("GPL") version 2
    as published by the Free Software Foundation.

    For using the CHAI 3D libraries with software that can not be combined
    with the GNU GPL, and for taking advantage of the additional benefits
    of our support services, please contact CHAI 3D about acquiring a
    Professional Edition License.

    \author:    <http://www.chai3d.org>
    \author:    Chris Sewell
    \version    1.0
    \date       05/2006
*/
//===========================================================================

#if !defined(AFX_mesh_mesh_collisions_H__0F50D983_2916_4586_800E_8C934B7EEE55__INCLUDED_)
#define AFX_mesh_mesh_collisions_H__0F50D983_2916_4586_800E_8C934B7EEE55__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"
#include "CWorld.h"
#include "CViewport.h"
#include "CGenericObject.h"
#include "CPhantom3dofPointer.h"
#include "CMeshTool.h"
#include "CPrecisionTimer.h"
#include "CLight.h"


class Cmesh_mesh_collisionsApp : public CWinApp {
public:
	Cmesh_mesh_collisionsApp();
  
  // Call this in place of a destructor to clean up
  void uninitialize();

  virtual int render_loop();

  // An object of some kind, to be rendered in the scene
  cMesh* object;

	// A mesh for the tool
	cMesh* tool_object;

  // Sets the camera zoom level
  void zoom(int zoom_level);

	// Set whether to show all collisions
	void setShow(int a_show_all) { m_show_all = a_show_all; }

  // Handles mouse-scroll events (moves or rotates the selected object)
  void scroll(CPoint p, int left_button = 1);

  // Handles mouse clicks (marks the front-most clicked object as 'selected')
  void select(CPoint p);
  
  // The currently selected object (or zero when there's no selection)
  cGenericObject* selected_object;

  // The interface to the haptic device...
  cMeshTool *tool;

  // The high-precision timer that's used (optionally) to run
  // the haptic loop
  cPrecisionTimer timer;

  // A flag that indicates whether haptics are currently enabled
  int haptics_enabled;

  // A flag that indicates whether the haptics thread is currently running
  //
  // This flag does not get set when the haptic callback is driven from a 
  // multimedia timer 
  int haptics_thread_running;

#define TOGGLE_HAPTICS_TOGGLE  -1
#define TOGGLE_HAPTICS_DISABLE  0
#define TOGGLE_HAPTICS_ENABLE   1

  // If the parameter is -1, haptics are toggled on/off
  // If it's 0 haptics are turned off
  // If it's 1 haptics are turned on
  void toggle_haptics(int enable = TOGGLE_HAPTICS_TOGGLE);

  // virtual world
  cWorld* world;
  cCamera* camera;
  cViewport* viewport;
  cLight* light;
	int m_show_all;

  
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cmesh_mesh_collisionsApp)
	public:
	virtual BOOL InitInstance();
  virtual int Run();
  //}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(Cmesh_mesh_collisionsApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_mesh_mesh_collisions_H__0F50D983_2916_4586_800E_8C934B7EEE55__INCLUDED_)
