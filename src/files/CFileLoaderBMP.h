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
    \author:    Francois Conti
    \version    1.1
    \date       01/2004
*/
//===========================================================================

//---------------------------------------------------------------------------
#ifndef CFileLoaderBMPH
#define CFileLoaderBMPH
//---------------------------------------------------------------------------
#include "windows.h"
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string>
//---------------------------------------------------------------------------
using std::string;
//---------------------------------------------------------------------------

const short BITMAP_MAGIC_NUMBER = 19778;
const int   RGB_BYTE_SIZE       = 3;

//===========================================================================
/*!
      \class    cFileLoaderBMP
      \brief    cFileLoaderBMP provides a class to load BMp bitmap
                images into memory.
*/
//===========================================================================
class cFileLoaderBMP
{
  public:
      // CONSTRUCTOR & DESTRUCTOR:
      //! Constructor of cFileLoaderBMP.
      cFileLoaderBMP();
      //! Constructor of cFileLoaderBMP. Load a bitmap file.
      cFileLoaderBMP(char* a_fileName);
      //! Destructor of cFileLoaderBMP.
      ~cFileLoaderBMP();

      // METHODS:
      //! Load bitmap image file.
      bool loadBMP(char* iFileName);
      //! Get pinter to bitmap
      char* pBitmap() const { return (m_pBitmap); }
      //! Get width of image.
      unsigned int getWidth() { return (m_width); }
      //! Get height of image.
      unsigned int getHeight() { return (m_height); }
      //! Get the number of bits per pixels
      unsigned short getBpp() { return (m_bpp); }
      //! Read last error message.
      string getLastErrorMesg(void) { return (m_errorMsg); }
      //! Has any image been loaded?
      bool isLoaded() { return (m_loaded); }

  private:
      //variables
      //! Header file information
      BITMAPFILEHEADER m_bmfh;
      //! Header file information
      BITMAPINFOHEADER m_bmih;
      /// The width in bytes of the image
      unsigned int m_byteWidth;
      // The width in bytes of the added image
      unsigned int m_padWidth;
      // Size of the data in the file
      unsigned int m_dataSize;

      // MEMBERS:
      //! color data
      RGBQUAD *m_colors;
      //! Has image been loaded correctly?
      bool m_loaded;
      //! Width of image.
      unsigned int m_width;
      //! Height of image.
      unsigned int m_height;
      //! Bits per pixel.
      unsigned short m_bpp;
      //! Last error message.
      string m_errorMsg;
      //! pixel data
      char* m_pBitmap;

      // METHODS:
      //! Reset internal variables. This function is called by the constructor.
      void reset(void);
      //! convert bitmap from GBR to RGB. 24 bits images.
      bool convert24(char *);
      //! convert bitmap from GBR to RGB. 8 bits images.
      bool convert8(char *);
};

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------