/* $FreeBSD$ */
/*
 *  Copyright (c) 2000-2001 LSI Logic Corporation.
 *
 *
 *           Name:  MPI_TYPE.H
 *          Title:  MPI Basic type definitions
 *  Creation Date:  June 6, 2000
 *
 *    MPI Version:  01.02.01
 *
 *  Version History
 *  ---------------
 *
 *  Date      Version   Description
 *  --------  --------  ------------------------------------------------------
 *  05-08-00  00.10.01  Original release for 0.10 spec dated 4/26/2000.
 *  06-06-00  01.00.01  Update version number for 1.0 release.
 *  11-02-00  01.01.01  Original release for post 1.0 work
 *  02-20-01  01.01.02  Added define and ifdef for MPI_POINTER.
 *  08-08-01  01.02.01  Original release for v1.2 work.
 *  --------------------------------------------------------------------------
 */

#ifndef MPI_TYPE_H
#define MPI_TYPE_H


/*******************************************************************************
 * Define MPI_POINTER if it hasn't already been defined. By default MPI_POINTER
 * is defined to be a near pointer. MPI_POINTER can be defined as a far pointer
 * by defining MPI_POINTER as "far *" before this header file is included.
 */
#ifndef MPI_POINTER
#define MPI_POINTER     *
#endif


/*****************************************************************************
*
*               B a s i c    T y p e s
*
*****************************************************************************/

typedef signed   char   S8;
typedef unsigned char   U8;
typedef signed   short  S16;
typedef unsigned short  U16;

#if defined(unix) || defined(__arm) || defined(ALPHA) || defined(__GNUC__)

    typedef signed   int   S32;
    typedef unsigned int   U32;

#else

    typedef signed   long  S32;
    typedef unsigned long  U32;

#endif


typedef struct _S64
{
    U32          Low;
    S32          High;
} S64;

typedef struct _U64
{
    U32          Low;
    U32          High;
} U64;


/****************************************************************************/
/*  Pointers                                                                */
/****************************************************************************/

typedef S8      *PS8;
typedef U8      *PU8;
typedef S16     *PS16;
typedef U16     *PU16;
typedef S32     *PS32;
typedef U32     *PU32;
typedef S64     *PS64;
typedef U64     *PU64;


#endif

