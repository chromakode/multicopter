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
/*  File Name         : it_assert.h                                          */
/*                                                                           */
/*  Description       : Contains macros used for assert and return on error  */
/*                                                                           */
/*                                                                           */
/*  List of Functions : None                                                 */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         09 09 2004   Ittiam          Creation                             */
/*                                                                           */
/*****************************************************************************/
#ifndef __IT_ASSERT_H__
#define __IT_ASSERT_H__

#define ENABLE_ALARM                     1
#define IT_ERROR_OCCURRED                1

/*****************************************************************************/
/* Usage  : ALARMIF(condition) - Raises alarm if condition is true           */
/*****************************************************************************/
#if ENABLE_ALARM
void it_assert(UWORD32 value, char *statement, char* file, size_t line);
#define ALARMIF(value)  it_assert(value, #value, __FILE__, __LINE__)
#else
#define ALARMIF(value)
#endif

/*****************************************************************************/
/* Macros to be used to return if an condition is true (usually on error)    */
/*****************************************************************************/
#define RETURNIF(value, retVal)             \
{                                           \
    if(value == 1)                          \
        return (retVal);                    \
}

#define RET_WITH_ALARM_IF(value, retVal)    \
{                                           \
    ALARMIF(value);                         \
    RETURNIF(value, retVal);                \
}


void itrace(char *str);

#define ITRACE(a) itrace(a)

#endif /* __IT_ASSERT_H__ */
