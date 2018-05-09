#ifndef _HAL_INTERFACE_HPP_INCLUDED_
#define _HAL_INTERFACE_HPP_INCLUDED_

#define CV_HAL_ERROR_OK					0
#define CV_HAL_ERROR_NOT_IMPLEMENTD		1
#define	CV_HAL_ERROR_UNKNOWN			-1

#define CV_HAL_CMP_EQ					0
#define CV_HAL_CMP_GT					0
#define CV_HAL_CMP_GE					0
#define CV_HAL_CMP_LT					0
#define CV_HAL_CMP_LE					0
#define CV_HAL_CMP_NE					0

#ifndef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif

#if !defined _MSC_VER && !defined __BORLANDC__
#if defined __cplusplus && _cplusplus >= 201103L && !defined __APPLE__
#include <cstdint>
typedef std::uint32_t	uint;
#else
#	include <stdint.h>
	typedef uint32_t uint;
#	endif
#else
typedef unsigned uint;
#endif

typedef signed char schar;

#ifndef __IPL_H__
typedef unsigned char uchar;
typedef unsigned short ushort;
#endif

#if defined _MSC_VER || defined __BORLANDC__
	typedef __int64 int64;
	typedef unsigned __int64 uint64;
#define CV_BIG_INT(n)	n##I64
#define CV_BIG_UINT(n)	n##UI64
#else
typedef int64_t int64;
typedef uint64_t uint64;
#define CV_BIG_INT(n) n##LL
#define CV_BIG_UINT(n) n##ULL
#endif

#endif
	
