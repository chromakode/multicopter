/*****************************************************************************/
/*																			 */
/*                               VC1 ENCODER                                 */
/*                  ITTIAM SYSTEMS PVT LTD, BANGALORE						 */
/*                  		COPYRIGHT(C) 2006								 */
/*																			 */
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
/*																			 */
/* File Name		  : appl_error_handler.h								 */
/*																			 */
/*  Description       : Error handling APIs for the application              */
/*																			 */
/*  List of Functions : <List the functions defined in this file>            */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*																			 */
/* Revision History	:														 */
/*																			 */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         27 05 2006   Sankar          Creation                             */
/*                                                                           */
/*****************************************************************************/
#ifndef _APPL_ERROR_HANDLER_H_
#define _APPL_ERROR_HANDLER_H_

/*****************************************************************************/
/*File Includes				                                                 */
/*****************************************************************************/

/*****************************************************************************/
/* Constant Macros                                                           */
/*****************************************************************************/

/*****************************************************************************/
/* Function Macros                                                           */
/*****************************************************************************/

/*****************************************************************************/
/* Typedefs                                                                  */
/*****************************************************************************/

/*****************************************************************************/
/* Enums                                                                     */
/*****************************************************************************/

/*****************************************************************************/
/* Structure																 */
/*****************************************************************************/

/*****************************************************************************/
/* Extern Variable Declarations                                              */
/*****************************************************************************/

/*****************************************************************************/
/* Extern Function Declarations                                              */
/*****************************************************************************/
void appl_issue_error(WORD8 *pi1_err_message);
void appl_issue_warning(WORD8 *pi1_warning_message);
void appl_exit_with_error(WORD8 *pi1_warning_message);
#endif /* _APPL_ERROR_HANDLER_H_ */
