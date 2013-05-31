/*****************************************************************************/
/*                                                                           */
/*                        OMX CORE IMPLEMENTATION                            */
/*                     ITTIAM SYSTEMS PVT LTD, BANGALORE                     */
/*                             COPYRIGHT(C) 2006                             */
/*                                                                           */
/*  This program  is  proprietary to  Ittiam  Systems  Private  Limited  and */
/*  is protected under Indian  Copyright Law as an unpublished work. Its use */
/*  and  disclosure  is  limited by  the terms  and  conditions of a license */
/*  agreement. It may not be copied or otherwise  reproduced or disclosed to */
/*  persons outside the licensee's organization except in accordance with the*/
/*  terms  and  conditions   of  such  an  agreement.  All  copies  and      */
/*  reproductions shall be the property of Ittiam Systems Private Limited and*/
/*  must bear this notice in its entirety.                                   */
/*                                                                           */
/*****************************************************************************/

/*****************************************************************************/
/*                                                                           */
/*  File Name         : vid_dec_interface.h                                  */
/*                                                                           */
/*  Description       : This file contains the video decoder interface       */
/*                                                                           */
/*  List of Functions :                                                      */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         02 11 2006   Ittiam          Creation                             */
/*                                                                           */
/*****************************************************************************/

#ifndef __VID_DEC_INTERFACE_H__
#define __VID_DEC_INTERFACE_H__

typedef struct
{
    size_t  frm_width;
    size_t  frm_height;
    size_t  buf_width;
    size_t  buf_height;
    size_t  stride;
    UWORD32 frame_rate;
    size_t  x_pos;
    size_t  y_pos;
}vid_dec_config_t;


#endif /* __VID_DEC_INTERFACE_H__ */
