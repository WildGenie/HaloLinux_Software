// *****************************************************************************
//
//     Copyright (c) 2009, Pleora Technologies Inc., All rights reserved.
//
// *****************************************************************************

#ifndef __OS_MEMORY_POOL_H__
#define __OS_MEMORY_POOL_H__

#if defined(WIN32)
#if defined(_PT_KERNEL_)
#ifdef _PT_NDIS_
#include "OS_GENMemoryPool.h" 
#else
#endif // _PT_NDIS_
#else
#include "OS_GENMemoryPool.h"
#endif // _PT_KERNEL_
#endif // _WIN32

#if defined(_UNIX_)
#if defined(_PT_KERNEL_)
#include "OS_GENMemoryPool.h"
#else
#include "OS_GENMemoryPool.h"
#endif //_PT_KERNEL_
#endif //_UNIX

#endif // __OS_MEMORY_POOL_H__
