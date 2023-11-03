/*
auhtor : Asser Tanatwy
date : 30/10/2023
		Platfome Types

*/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#ifndef _Bool
#define _Bool unsigned char
#endif




#define CPU_TYPE            CPU_TYPE_32 
#define CPU_BIT_ORDER       MSB_FIRST 
#define CPU_BYTE_ORDER      HIGH_BYTE_FIRST


typedef _Bool                       boolean;

typedef unsigned char               uint8_t;
typedef unsigned short              uint16_t;
typedef unsigned int                uint32_t;
typedef unsigned long long int      uint64_t;
typedef signed char                 sint8_t;
typedef signed short                sint16_t;
typedef signed int                  sint32_t;
typedef signed long long int        sint64_t;
typedef char                        char_t;

typedef unsigned char       uint8_least;
typedef unsigned short      uint16_least;
typedef unsigned int        uint32_least;
typedef signed char         sint8_least;
typedef signed short        sint16_least;
typedef signed int          sint32_least;

typedef volatile unsigned char              vuint8_t;
typedef volatile unsigned short             vuint16_t;
typedef volatile unsigned int               vuint32_t;
typedef volatile unsigned long long int     vuint64_t;
typedef volatile signed char                vsint8_t;
typedef volatile signed short               vsint16_t;
typedef volatile signed int                 vsint32_t;
typedef volatile signed long long int       vsint64_t;
typedef volatile char                       vchar_t;

typedef void*  			  VoidPtr
typedef const void*       ConstVoidPtr


typedef float       float32;
typedef double      float64;















#ifndef FALSE
#define FALSE		((boolean)false)
#endif

#ifndef TRUE
#define TRUE		((boolean)true)
#endif


#ifndef false
#define false		0
#endif

#ifndef true
#define true		1
#endif


#define CPU_TYPE_8 8
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32
#define CPU_TYPE_64 64
#define MSB_FIRST 0
#define LSB_FIRST 1
#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST 1

#endif