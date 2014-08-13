// *****************************************************************************
//
//     Copyright (c) 2009, Pleora Technologies Inc., All rights reserved.
//
// *****************************************************************************

#ifndef __OS_MAPMEMORY_H__
#define __OS_MAPMEMORY_H__

#if defined(_WIN32)
#if defined(_PT_KERNEL_)
#ifdef _PT_NDIS_
#include "OS_KMNMemoryMap.h" 
#else
#endif // _PT_NDIS_
#else
#endif // _PT_KERNEL_
#endif // _WIN32


#if defined(_UNIX_)
#if defined(_PT_KERNEL_)
#include "OS_KMLMemoryMap.h" 
#else
#endif // _PT_KERNEL_
#endif // _UNIX_

#endif // __OS_MAPMEMORY_H__
