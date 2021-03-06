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
    \author:    Stephen Sinclair
    \version    1.0
    \date       05/2005
*/
//===========================================================================

//---------------------------------------------------------------------------
#ifndef CLibNIFalconDeviceH
#define CLibNIFalconDeviceH
/*!
    \file CLibNIFalconDevice.h
*/
// Allow libnifalcon support to be compiled out
#ifndef _DISABLE_LIBNIFALCON_DEVICE_SUPPORT
//---------------------------------------------------------------------------
#include "CGenericDevice.h"
//---------------------------------------------------------------------------

//===========================================================================
/*!
    \file   CLibNIFalconDevice.h
    \class  cLibNIFalconDevice
    \brief  cLibNIFalconDevice describes an interface to the LibNIFalcon haptic
			device from MPB Technologies Inc.
*/
//===========================================================================
class cLibNIFalconDevice : public cGenericDevice
{
  public:
    // CONSTRUCTOR & DESTRUCTOR:
    //! Constructor of cLibNIFalconDevice.
    cLibNIFalconDevice();
    //! Destructor of cLibNIFalconDevice.
    virtual ~cLibNIFalconDevice();

    // METHODS:
    //! Open connection to MPB device.
    virtual int open();
    //! Close connection to MPB device.
    virtual int close();
    //! Initialize MPB device.
    virtual int initialize(const bool a_resetEncoders=false);
    //! Set a command to the MPB device.
    virtual int command(int a_command, void* a_data);

  protected:

    //! Reference count used to control access to the dhd dll
    static int m_activeLibNIFalconDevices;

    void* m_device;
};

#endif // #ifndef _DISABLE_LIBNIFALCON_DEVICE_SUPPORT

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
