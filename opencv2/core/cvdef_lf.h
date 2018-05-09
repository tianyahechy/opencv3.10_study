#ifndef __OPENCV_CORE_CVDEF_H__
#define __OPENCV_CORE_CVDEF_H__

#if !defined _CRT_SECURE_NO_DEPRECATE && defined _MSC_VER && _MSC_VER > 1300
#define _CRT_SECURE_NO_DEPRECATE
#endif

#undef small
#undef min
#undef max
#undef abs
#undef Complex

#if !defined _CRT_SECURE_NO_DEPRECATE && defined _MSC_VER && _MSC_VER > 1300
#define _CRT_SECURE_NO_DEPRECATE
#endif

#include <limits.h>
#include "opencv2/core/hal/interface.h"

#if defined __ICL
#define CV_ICC	__ICL
#elif defined __ICC
#define CV_ICC	_ICC
#elif defined __ECL
#define CV_ICC	__ECL
#elif defined __ECC
#define CV_ICC	__ECC
#elif defined __INTEL_COMPILER
#define CV_ICC __INTEL_COMPILER
#endif

#ifndef CV_INLINE
#	if defined __cplusplus
#		define CV_INLINE static 