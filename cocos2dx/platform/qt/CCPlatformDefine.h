#ifndef __CCPLATFORMDEFINE_H__
#define __CCPLATFORMDEFINE_H__

#include <QtCore/qglobal.h>

#if defined(_USRDLL)
    #define CC_DLL     Q_DECL_EXPORT
#else         /* use a DLL library */
    #define CC_DLL
#endif

#include <assert.h>
#define CC_ASSERT(cond)    Q_ASSERT(cond)
#define CC_UNUSED_PARAM(unusedparam) (void)unusedparam

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif



#endif /* __CCPLATFORMDEFINE_H__*/