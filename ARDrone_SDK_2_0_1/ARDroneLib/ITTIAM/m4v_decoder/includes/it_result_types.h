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
/*  File Name         : it_result_types.h                                    */
/*                                                                           */
/*  Description       : Common return types for functions                    */
/*                                                                           */
/*  List of Functions : None                                                 */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         25 09 2006   Ittiam          Creation                             */
/*                                                                           */
/*****************************************************************************/
#ifndef __IT_RESULT_TYPES_H__
#define __IT_RESULT_TYPES_H__

typedef WORD32 it_result_t;

enum
{
    IT_S_OK = 0,
    IT_E_FAILED,                        /* General error */
    IT_E_ARG_INVALID,                   /* Arguments passed to a function
                                           are invalid */
    IT_E_ARG_OUT_OF_RANGE,              /* Argument is not in the expected range */
    IT_E_MEM_ALLOC_FAILED,              /* Memory allocation failed */
    IT_E_NOT_INITIALIZED,               /* Component has not been initialized */
    IT_E_ALREADY_INITIALIZED,           /* Component has already been inited */

	IT_E_MAX_FRAMES_REACHED,

    IT_DECODE_END_OF_FILE ,              /* Decoder has reached end of file */
    IT_NO_DISPLAY_FRAME
};



#endif /* __IT_RESULT_TYPES_H__ */

