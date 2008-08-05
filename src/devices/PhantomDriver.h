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
    \author:    Federico Barbagli
    \version    1.2
    \date       01/2004
*/
//===========================================================================


// MS Visual C++ import flag
#ifdef _cplusplus
extern "C" {
#endif

// Borland import flag
#ifdef __cplusplus
extern "C" {
#endif

#define FUNCTION __declspec(dllexport)

const int PH_ERR = -1;
const int PH_INIT_ERR = -2;
const int PH_RES_ENC_ERR = -3;
const int PH_ENABLE_FORCES = -4;
const int PH_FORCES_ALREADY_ON = -5;
const int PH_UPDATE_ERR_0 = -6;
const int PH_UPDATE_ERR_1 = -7;
const int PH_SET_FORCE_ERR	= -8;
const int PH_OF = -9;
const int PH_ERR_LOOP = -10;
const int PH_MAT_ERR = -11;
const int PH_DLL_PROBLEM = -100;


//! int OpenPhantom(int num),	creates and initializes phantom number num in the control panel (i.e. from top
//! to bottom of the phantoms registered in the control panel).
//! The function returns the phantom handle if everything went ok, a negative value otherwise (check list of errors)
FUNCTION int __stdcall   OpenPhantom(int num);

//! int PhantomAccess(int access_type), if i = 1 the system tries to load the deviceIO based phantom access. This will
//! only take place, however, if ghost4 is installed. This function does not need to be called. If not called
//! the system loads the gstEffect phantom access by default.
FUNCTION void __stdcall   PhantomAcces(int access_type);

//! ClosePhantoms(), closes all Phantoms in the system.
//! the function should be called as a last operation and no other phantom operation should follow.
FUNCTION void __stdcall   ClosePhantoms();
 
//! ResetPhantomEncoders(int num),		resets encoders for phantom num.
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
FUNCTION int __stdcall   ResetPhantomEncoders(int num);

//! StartCommunicationPhantom(int i), Starts the servoloop for phantom number i, basically enabling forces and position
//! reading for such phantom. 
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
FUNCTION int __stdcall   StartCommunicationPhantom(int i);

//! StopCommunicationPhantom(int i), Stops phantom i, basically disabling forces and position
//! reading for such phantom. Note that the overall servoloop will still be running since the other phantom
//! may be not disabled.
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
FUNCTION int __stdcall   StopCommunicationPhantom(int i);

//! ReadPositionPhantom(int num,double &iPosX,double &iPosY,double &iPosZ); reads tip position for phantom num
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
//! Note that positions are expressed in mm with respect to the Ghost reference frame (x towards the right, 
//! y vertically pointing up, z vertical pointing towards the user).
FUNCTION int __stdcall   ReadPositionPhantom(int num, 
									  double &iPosX,
									  double &iPosY,
									  double &iPosZ);

//! ReadVelocityPhantom(int num,double &iVelX,double &iVelY,double &iVelZ); reads tip velocity for phantom num
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
//! Note that velocity is expressed in mm/sec with respect to a Ghost reference frame (x towards the right, 
//! y vertically pointing up, z vertical pointing towards the user).
FUNCTION int __stdcall   ReadVelocityPhantom(int num, 
									  double &iVelX,
									  double &iVelY,
									  double &iVelZ);

//! ReadNormalizedPositionPhantom(int num,double &iPosX,double &iPosY,double &iPosZ); reads tip position for phantom num
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
//! Note that positions are expressed with a value included in the interval [-1,1] for a cube centered in the device's workspace center with
//! respect to a Ghost reference frame (x towards the right, y vertically pointing up, z vertical pointing towards the user).
//! This is to ensure that a same demo may be used using different devices without having to change any of the code.


FUNCTION int __stdcall   ReadNormalizedPositionPhantom(int num, 
									  double &iPosX,
									  double &iPosY,
									  double &iPosZ);

//! SetForcePhantom(int num,const double &iForceX,const double &iForceY,const double &iForceZ); writes force to phantom num
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
//! Note that forces are expressed in Newtons with respect to Ghost reference frame (x towards the right, 
//! y vertically pointing up, z vertical pointing towards the user). Note: no safety features are implemented other than the 
//! Ghost ones, i.e. if you start the servoloop and your phantom is inside an object you will probably
//! get very large forces and undesirable effects.
FUNCTION int __stdcall   SetForcePhantom(int num, 
								  const double &iForceX,
				                  const double &iForceY,
								  const double &iForceZ);

//! SetForceTorquePhantom(int num, const double &iForceX, const double &iForceY, const double &iForceZ, const double &iTorqueX, const double &iTorqueY, const double &iTorqueZ);
//! writes Forces and Torques to phantom num.
//! the function returns 1 if everything went ok, a negative value otherwise (check list of errors)
//! Note that torques are expressed in Newtons Meter with respect to a Ghost reference frame (x towards the right, 
//! y vertically pointing up, z vertical pointing towards the user).
FUNCTION int __stdcall   SetForceTorquePhantom(int num, 
								  const double &iForceX,
				                  const double &iForceY,
								  const double &iForceZ,
								  const double &iTorqueX,
				                  const double &iTorqueY,
								  const double &iTorqueZ);

//! ReadOrientMat3DOFPhantom(int num, double *m);, reads the orientation matrix of the stylus for a 3dof wristed
//! phantom device and returns it in a Ghost reference frame (x towards the right, y vertically pointing up, z vertical pointing towards the user), 
//! as		m[0][0]  m[0][1] m[0][2]
//!			m[1][0]  m[1][1] m[1][2]
//!			m[2][0]  m[2][1] m[2][2]

FUNCTION int __stdcall   ReadOrientMat3DOFPhantom(int num, 
 									  double *m);

//! ReadSwitchPhantom(int num);, reads the switch from phantom num
FUNCTION int __stdcall   ReadSwitchPhantom(int num);

//! double GetMaxForcePhantom(int num),	reads what the max force is for Phantom num
FUNCTION double __stdcall   GetMaxForcePhantom(int num);

#ifdef _cplusplus
}
#endif

#ifdef __cplusplus
}
#endif
