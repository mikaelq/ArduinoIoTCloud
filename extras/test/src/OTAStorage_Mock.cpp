/*
 * Copyright (c) 2020 Arduino.  All rights reserved.
 */

/**************************************************************************************
   INCLUDE
 **************************************************************************************/

#include <OTAStorage_Mock.h>

/**************************************************************************************
   CTOR/DTOR
 **************************************************************************************/

OTAStorage_Mock::OTAStorage_Mock()
: _init_return_val{false}
, _open_return_val{false}
{

}

/**************************************************************************************
   PUBLIC MEMBER FUNCTIONS
 **************************************************************************************/

bool OTAStorage_Mock::init()
{
  return _init_return_val;
}

bool OTAStorage_Mock::open()
{
  return _open_return_val;
}

size_t OTAStorage_Mock::write(uint8_t const * const /* buf */, size_t const num_bytes)
{
  return num_bytes;
}

void OTAStorage_Mock::close()
{
  /* Do nothing */
}

void OTAStorage_Mock::deinit()
{
  /* Do nothing */
}
