/*****************************************************************************/
/*                                                                           */
/*                  ITTIAM SYSTEMS PVT LTD, BANGALORE                        */
/*                           COPYRIGHT(C) 2006                               */
/*                                                                           */
/*  This program  is  proprietary to  Ittiam  Systems  Private  Limited  and */
/*  is protected under Indian  Copyright Law as an unpublished work. Its use */
/*  and  disclosure  is  limited by  the terms  and  conditions of a license */
/*  agreement. It may not be copied or otherwise  reproduced or disclosed to */
/*  persons outside the licensee's organization except in accordance with the*/
/*  the  terms  and  conditions   of  such  an  agreement.  All  copies  and */
/*  reproductions shall be the property of Ittiam Systems Private Limited and*/
/*  must bear this notice in its entirety.                                   */
/*                                                                           */
/*****************************************************************************/

/*****************************************************************************/
/*  File Name         : it_mem.h                                             */
/*                                                                           */
/*  Description       : Contains interface definition of memory manager. All */
/*                      memory managers have to implement this interface.    */
/*                                                                           */
/*  List of Functions : None                                                 */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         26 11 2004   Ittiam          Creation                             */
/*                                                                           */
/*****************************************************************************/
#ifndef __IT_MEM_H__
#define __IT_MEM_H__

typedef struct _it_mem_t it_mem_t;

struct _it_mem_t
{
    void* (*alloc)      (it_mem_t *, size_t size);
    void* (*align_alloc)(it_mem_t *, size_t size, size_t align);
    void  (*free)       (it_mem_t *, void *);
    void* (*realloc)    (it_mem_t *, void *, size_t size);
};

void* it_sdram_malloc_aligned_cached(size_t size, size_t align);
void it_sdram_free(void *ptr);
#endif /* __IT_MEM_H__ */
