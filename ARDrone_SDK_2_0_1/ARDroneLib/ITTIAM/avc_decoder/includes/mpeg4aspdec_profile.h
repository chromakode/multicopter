/*****************************************************************************/
/*                                                                           */
/*                               PROJECT NAME                                */
/*                     ITTIAM SYSTEMS PVT LTD, BANGALORE                     */
/*                             COPYRIGHT(C) 2005                             */
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
/*  File Name         : mpeg4aspdec_profile.h                                */
/*                                                                           */
/*  Description       : This file contains all the necessary examples to     */
/*                      establish a consistent use of Ittiam C coding        */
/*                      standards (based on Indian Hill C Standards)         */
/*                                                                           */
/*  List of Functions : <List the functions defined in this file>            */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         10 10 2005   Ittiam          Draft                                */
/*                                                                           */
/*****************************************************************************/

#ifndef MPEG4ASPDEC_PROFILE_H
#define MPEG4ASPDEC_PROFILE_H

/*****************************************************************************/
/* Constant Macros                                                           */
/*****************************************************************************/

/* This will enable or disable profiling support */
#ifdef WIN32

#define PROFILE_ENABLE      0

/* Do not Change this part */

#define PRINT_TIMER 

/* Timer start functions */

#define START_TIMER_DECODER 
#define START_TIMER_I_VOP 
#define START_TIMER_P_VOP 
#define START_TIMER_DEC_INTRA_MB 
#define START_TIMER_DEC_INTRA_BLOCK 
#define START_TIMER_INV_AC_DC_PRED 
#define START_TIMER_DC_COEFF 
#define START_TIMER_BUILD_BLOCK_MATRIX 
#define START_TIMER_IDCT_COLS 
#define START_TIMER_IDCT_ROWS 
#define START_TIMER_DO_AC_DC_PRED 
#define START_TIMER_DEQUANT 
#define START_TIMER_CPY_BLK_TO_FRAME 
#define START_TIMER_PUT_BLK_TO_BUFFER 
#define START_TIMER_PUT_BLK_TO_BUFFER_OPT 
#define START_TIMER_MV_DECODER_P 
#define START_TIMER_FULLXFULLY_NOT_CODED
#define START_TIMER_HALFXFULLY_NOT_CODED 
#define START_TIMER_FULLXHALFY_NOT_CODED
#define START_TIMER_HALFXHALFY_NOT_CODED 
#define START_TIMER_FULLXFULLY 
#define START_TIMER_HALFXFULLY 
#define START_TIMER_FULLXHALFY 
#define START_TIMER_HALFXHALFY
#define START_TIMER_FULLXFULLY_I
#define START_TIMER_FULLXHALFY_I
#define START_TIMER_HALFXFULLY_I
#define START_TIMER_HALFXHALFY_I
#define START_TIMER_VLD_MCBPC 
#define START_TIMER_VLD_CBPY 
#define START_TIMER_DECODEMBHEADER_IVOP 
#define START_TIMER_VLD_TCOEF 
#define START_TIMER_GET_PREDICTOR_INTER1V
#define START_TIMER_GET_PREDICTOR_INTER4V
#define START_TIMER_DECODE_MOTION_VECTOR
#define START_TIMER_GET_MV_CHROM
#define START_MC_FORW_OR_BACK
#define START_TIMER_DEC_INTER_BLOCK
#define START_TIMER_INTERPOLATEHALF_XHALF_Y
#define START_TIMER_INTERPOLATEHALF_XFULL_Y
#define START_TIMER_INTERPOLATEFULL_XHALF_Y
#define START_TIMER_INTERPOLATEHALF_XHALF_Y_I
#define START_TIMER_INTERPOLATEHALF_XFULL_Y_I
#define START_TIMER_INTERPOLATEFULL_XHALF_Y_I
#define START_TIMER_GETQUARTERPELVAL
#define START_TIMER_ADDBUFFERTOBLKMATRIX_I
#define START_TIMER_ADD_BUF_T_BLK_MAT
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P_I
#define START_TIMER_APPLYFILTER
#define START_TIMER_READTOBUFFER
#define START_TIMER_GETMV_CHROM_QPEL

/* Timer stop functions */
#define STOP_TIMER_DECODER 
#define STOP_TIMER_I_VOP 
#define STOP_TIMER_P_VOP
#define STOP_TIMER_DEC_INTRA_MB 
#define STOP_TIMER_DEC_INTRA_BLOCK 
#define STOP_TIMER_INV_AC_DC_PRED 
#define STOP_TIMER_DC_COEFF 
#define STOP_TIMER_BUILD_BLOCK_MATRIX 
#define STOP_TIMER_IDCT_COLS 
#define STOP_TIMER_IDCT_ROWS 
#define STOP_TIMER_DO_AC_DC_PRED 
#define STOP_TIMER_DEQUANT 
#define STOP_TIMER_CPY_BLK_TO_FRAME 
#define STOP_TIMER_PUT_BLK_TO_BUFFER 
#define STOP_TIMER_PUT_BLK_TO_BUFFER_OPT 
#define STOP_TIMER_MV_DECODER_P 
#define STOP_TIMER_FULLXFULLY_NOT_CODED 
#define STOP_TIMER_HALFXFULLY_NOT_CODED 
#define STOP_TIMER_FULLXHALFY_NOT_CODED 
#define STOP_TIMER_HALFXHALFY_NOT_CODED  
#define STOP_TIMER_FULLXFULLY 
#define STOP_TIMER_HALFXFULLY 
#define STOP_TIMER_FULLXHALFY 
#define STOP_TIMER_HALFXHALFY
#define STOP_TIMER_FULLXFULLY_I
#define STOP_TIMER_FULLXHALFY_I
#define STOP_TIMER_HALFXFULLY_I
#define STOP_TIMER_HALFXHALFY_I
#define STOP_TIMER_VLD_MCBPC 
#define STOP_TIMER_VLD_CBPY 
#define STOP_TIMER_DECODEMBHEADER_IVOP 
#define STOP_TIMER_VLD_TCOEF 
#define STOP_TIMER_GET_PREDICTOR_INTER1V
#define STOP_TIMER_GET_PREDICTOR_INTER4V
#define STOP_TIMER_DECODE_MOTION_VECTOR
#define STOP_TIMER_GET_MV_CHROM
#define STOP_MC_FORW_OR_BACK
#define STOP_TIMER_DEC_INTER_BLOCK
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y_I
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y_I
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y_I
#define STOP_TIMER_GETQUARTERPELVAL
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_I
#define STOP_TIMER_ADD_BUF_T_BLK_MAT
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P_I
#define STOP_TIMER_APPLYFILTER
#define STOP_TIMER_READTOBUFFER
#define STOP_TIMER_GETMV_CHROM_QPEL
#else

/* Change according to requirements */
#define PROFILE_ENABLE      0

#endif



#if PROFILE_ENABLE  

/*****************************************************************************/
/* Enums                                                                     */
/*****************************************************************************/

/* VOP Level Definitions */
typedef enum 
{
	/* Decoder */
    MPEG4_PROF_DEC_DECODER,
    /* VOP Level Functions */
    MPEG4_PROF_DEC_IVOP,
    MPEG4_PROF_DEC_PVOP,

    /* MB Level Functions */
    MPEG4_PROF_DECODE_INTRA_MB,	
    
    /* Block Level Functions */
    MPEG4_PROF_DECODE_INTRA_BLOCK,	
    MPEG4_PROF_DECODE_INTER_BLOCK,

    /* Leaf level functions */
       
    /* IVOP */
    MPEG4_PROF_INV_AC_DC_PRED,
    MPEG4_PROF_DC_COEFF,
    MPEG4_PROF_BUILD_BLOCK_MATRIX,			
    MPEG4_PROF_IDCT_COLS,	
    MPEG4_PROF_IDCT_ROWS,	
    MPEG4_PROF_DO_AC_DC_PRED,		
    MPEG4_PROF_DEQUANT,				
    MPEG4_PROF_COPY_BLK_TO_FRAME,
	MPEG4_PROF_PUT_BLK_TO_BUFFER,
	MPEG4_PROF_PUT_BLK_TO_BUFFER_OPT,
    MPEG4_PROF_VLD_MCBPC,
    MPEG4_PROF_VLD_CBPY,
    MPEG4_PROF_DECODEMBHEADER_IVOP,
    MPEG4_PROF_VLD_TCOEF,
    	
    /* PVOP */
    MPEG4_PROF_FULLXFULLY_NOTCODED,    
	MPEG4_PROF_HALFXFULLY_NOTCODED,
    MPEG4_PROF_FULLXHALFY_NOTCODED,
    MPEG4_PROF_HALFXHALFY_NOTCODED,
    MPEG4_PROF_FULLXFULLY,    
	MPEG4_PROF_HALFXFULLY,
    MPEG4_PROF_FULLXHALFY,
    MPEG4_PROF_HALFXHALFY,
    MPEG4_PROF_FULLXFULLY_I,
    MPEG4_PROF_FULLXHALFY_I,
    MPEG4_PROF_HALFXFULLY_I,
    MPEG4_PROF_HALFXHALFY_I,
	MPEG4_PROF_MV_DECODER_P, 
	MPEG4_PROF_GET_PREDICTOR_INTER1V,   
	MPEG4_PROF_GET_PREDICTOR_INTER4V,
	MPEG4_PROF_DECODE_MOTION_VECTOR,
    MPEG4_PROF_GET_MV_CHROM,
    MPEG4_PROF_MC_FORW_OR_BACK,
    MPEG4_PROF_INTERPOLATEHALF_XHALF_Y,
    MPEG4_PROF_INTERPOLATEHALF_XFULL_Y,
    MPEG4_PROF_INTERPOLATEFULL_XHALF_Y,
    MPEG4_PROF_INTERPOLATEHALF_XHALF_Y_I,
    MPEG4_PROF_INTERPOLATEHALF_XFULL_Y_I,
    MPEG4_PROF_INTERPOLATEFULL_XHALF_Y_I ,    
    MPEG4_PROF_GETQUARTERPELVAL,
    MPEG4_PROF_ADDBUFFERTOBLKMATRIX_I, 
    MPEG4_PROF_ADD_BUF_T_BLK_MAT,
    MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P,
    MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P_I,
    MPEG4_PROF_APPLYFILTER,
    MPEG4_PROF_READTOBUFFER,
    MPEG4_PROF_GETMV_CHROM_QPEL    

}prof_id_t;

/*****************************************************************************/
/* Structure                                                                 */
/*****************************************************************************/
typedef struct
{
    prof_id_t e_field;                   /* field identifier */
    unsigned long int curr_cycles;       /* cycles taken by the current call */
    unsigned long int min;               /* min cycles taken */
    unsigned long int max;               /* max cycles taken */
    double avg;                          /* avg cycles taken */
    UWORD32 u4_ct;                       /* no of times called */
    unsigned long int start;             /* start time */
    unsigned long int stop;              /* stop time  */
}prof_var_t;

/*****************************************************************************/
/* Function Declarations                                                     */
/*****************************************************************************/
void start_timer(prof_id_t e_field);
void stop_timer(prof_id_t e_field);

void pause_timer(prof_id_t e_field);
void resume_timer(prof_id_t e_field);
void print_timer(void);

#define PRINT_TIMER print_timer()
/* Switches for enabling/disabling the profiling option for a function. This */
/* is done so that whenever a parent function is profiled, the child function*/
/* is disabled for profiling. The stages of profiling are: VOP level,        */
/* MB level and Block level.                                                 */

#define PROF_DECODER               	1

#define PROF_I_VOP                  0
#define PROF_P_VOP                  0


/* VOP Level */ 


/********* IVOP **********/

#if PROF_I_VOP                          
/* Do not change this part */
#define PROF_DEC_INTRA_MB           0
#else
/* Change according to requirements */
#define PROF_DEC_INTRA_MB           0
#endif

/* MB Level */
#if (PROF_I_VOP || PROF_DEC_INTRA_MB)
/* Do not change this part */
#define PROF_DEC_INTRA_BLK          0
#else
/* Change according to requirements */
#define PROF_DEC_INTRA_BLK          0
#endif



/* Leaf level */
#if (PROF_I_VOP || PROF_DEC_INTRA_MB || PROF_DEC_INTRA_BLK)

/* Do not change this part */
#define PROF_INV_AC_DC_PRED         0
#define PROF_BUILD_BLOCK_MATRIX     0
#define PROF_IDCT_COLS              0
#define PROF_IDCT_ROWS              0
#define PROF_DO_AC_DC_PRED          0
#define PROF_DEQUANT                0
#define PROF_CPY_BLK_TO_FRAME       0
#define PROF_PUT_BLK_TO_BUFFER      0
#define PROF_VLD_MCBPC				0
#define PROF_VLD_CBPY				0
#define PROF_DECODEMBHEADER_IVOP	0
#define PROF_VLD_TCOEF				0

#else  /* blk level */

/* Change according to requirements */
#define PROF_INV_AC_DC_PRED         0
#define PROF_DC_COEFF	            0
#define PROF_BUILD_BLOCK_MATRIX     0
#define PROF_IDCT_COLS              0
#define PROF_IDCT_ROWS              0
#define PROF_DO_AC_DC_PRED          0
#define PROF_DEQUANT                0
#define PROF_CPY_BLK_TO_FRAME       0
#define PROF_PUT_BLK_TO_BUFFER      0
#define PROF_PUT_BLK_TO_BUFFER_OPT	0
#define PROF_VLD_MCBPC				0
#define PROF_VLD_CBPY				0
#define PROF_DECODEMBHEADER_IVOP	0
#define PROF_VLD_TCOEF				0

#endif /* blk level */


/********* PVOP **********/

#if PROF_P_VOP                 
/* Do not change this part */
#else
/* Change according to requirements */
#endif

/* MB Level */
#if (PROF_P_VOP)
#define PROF_DEC_INTER_BLK          0
/* Do not change this part */
#else
/* Change according to requirements */
#define PROF_DEC_INTER_BLK          0
#endif

/* Leaf level */
#if (PROF_P_VOP)

/* Do not change this part */
#define PROF_MV_DECODER_P			0
#else  /* blk level */

/* Change according to requirements */
#define PROF_MV_DECODER_P			0
#endif /* blk level */

#if (PROF_P_VOP || PROF_MV_DECODER_P)
/* Do not change this part */
#define PROF_FULLXFULLY_NOT_CODED	0
#define PROF_HALFXFULLY_NOT_CODED	0
#define PROF_FULLXHALFY_NOT_CODED	0
#define PROF_HALFXHALFY_NOT_CODED	0
#define PROF_FULLXFULLY				0
#define PROF_HALFXFULLY				0
#define PROF_FULLXHALFY				0
#define PROF_HALFXHALFY				0
#define PROF_FULLXFULLY_I           0
#define PROF_FULLXHALFY_I           0
#define PROF_HALFXFULLY_I			0
#define PROF_HALFXHALFY_I			0
#define PROF_GET_PREDICTOR_INTER1V     0
#define PROF_GET_PREDICTOR_INTER4V     0
#define PROF_DECODE_MOTION_VECTOR      0
#define PROF_GET_MV_CHROM              0 
#define PROF_MC_FORW_OR_BACK           0
#define PROF_INTERPOLATEHALF_XHALF_Y   0
#define PROF_INTERPOLATEHALF_XFULL_Y   0
#define PROF_INTERPOLATEFULL_XHALF_Y   0
#define PROF_INTERPOLATEHALF_XHALF_Y_I 0
#define PROF_INTERPOLATEHALF_XFULL_Y_I 0
#define PROF_INTERPOLATEFULL_XHALF_Y_I 0
#define PROF_GETQUARTERPELVAL          0
#define PROF_ADDBUFFERTOBLKMATRIX_I    0
#define PROF_ADD_BUF_T_BLK_MAT         0
#define PROF_ADDBUFFERTOBLKMATRIX_P    0
#define PROF_ADDBUFFERTOBLKMATRIX_P_I  0
#define PROF_APPLYFILTER               0
#define PROF_READTOBUFFER			0
#define PROF_GETMV_CHROM_QPEL		0
#else
/* Change according to requirements */
#define PROF_FULLXFULLY_NOT_CODED	0
#define PROF_HALFXFULLY_NOT_CODED	0
#define PROF_FULLXHALFY_NOT_CODED	0
#define PROF_HALFXHALFY_NOT_CODED	0
#define PROF_FULLXFULLY				0
#define PROF_HALFXFULLY				0
#define PROF_FULLXHALFY				0
#define PROF_HALFXHALFY				0
#define PROF_FULLXFULLY_I           0
#define PROF_FULLXHALFY_I           0
#define PROF_HALFXFULLY_I			0
#define PROF_HALFXHALFY_I  			0
#define PROF_GET_PREDICTOR_INTER1V  0
#define PROF_GET_PREDICTOR_INTER4V  0
#define PROF_DECODE_MOTION_VECTOR   0
#define PROF_GET_MV_CHROM           0
#define PROF_MC_FORW_OR_BACK        0

#define PROF_INTERPOLATEHALF_XHALF_Y 0
#define PROF_INTERPOLATEHALF_XFULL_Y 0
#define PROF_INTERPOLATEFULL_XHALF_Y 0
#define PROF_INTERPOLATEHALF_XHALF_Y_I 0
#define PROF_INTERPOLATEHALF_XFULL_Y_I 0
#define PROF_INTERPOLATEFULL_XHALF_Y_I 0

#define PROF_GETQUARTERPELVAL         0
#define PROF_ADDBUFFERTOBLKMATRIX_I   0
#define PROF_ADD_BUF_T_BLK_MAT        0
#define PROF_ADDBUFFERTOBLKMATRIX_P   0
#define PROF_ADDBUFFERTOBLKMATRIX_P_I 0 
#define PROF_APPLYFILTER              0
#define PROF_READTOBUFFER			0
#define PROF_GETMV_CHROM_QPEL		0
#endif
                


/******************************************************************************/
/* Function Macros                                                           */
/*****************************************************************************/
/***************************/
/* for VOP level Functions */
/***************************/	
/* DecodeR */

#if PROF_DECODER
#define START_TIMER_DECODER start_timer(MPEG4_PROF_DEC_DECODER)
#else
#define START_TIMER_DECODER 
#endif


#if PROF_DECODER
#define STOP_TIMER_DECODER stop_timer(MPEG4_PROF_DEC_DECODER)
#else
#define STOP_TIMER_DECODER  
#endif
/***************************/
/* for VOP level Functions */
/***************************/

/* Decode I VOP */

#if PROF_I_VOP
#define START_TIMER_I_VOP start_timer(MPEG4_PROF_DEC_IVOP)
#else
#define START_TIMER_I_VOP
#endif


#if PROF_I_VOP
#define STOP_TIMER_I_VOP stop_timer(MPEG4_PROF_DEC_IVOP)
#else
#define STOP_TIMER_I_VOP 
#endif

/* Decode P VOP */

#if PROF_P_VOP
#define START_TIMER_P_VOP start_timer(MPEG4_PROF_DEC_PVOP)
#else
#define START_TIMER_P_VOP
#endif


#if PROF_P_VOP
#define STOP_TIMER_P_VOP stop_timer(MPEG4_PROF_DEC_PVOP)
#else
#define STOP_TIMER_P_VOP 
#endif


/***********************************/
/* for Macro Block level functions */
/***********************************/

/* Decode Intra MB */

#if PROF_DEC_INTRA_MB
#define START_TIMER_DEC_INTRA_MB start_timer(MPEG4_PROF_DECODE_INTRA_MB)
#else 
#define START_TIMER_DEC_INTRA_MB
#endif

#if PROF_DEC_INTRA_MB
#define STOP_TIMER_DEC_INTRA_MB stop_timer(MPEG4_PROF_DECODE_INTRA_MB)
#else 
#define STOP_TIMER_DEC_INTRA_MB 
#endif

/*****************************/
/* for block level functions */
/*****************************/

/* Decode Intra Block */

#if PROF_DEC_INTRA_BLK
#define START_TIMER_DEC_INTRA_BLOCK start_timer(MPEG4_PROF_DECODE_INTRA_BLOCK)
#else 
#define START_TIMER_DEC_INTRA_BLOCK
#endif

#if PROF_DEC_INTRA_BLK
#define STOP_TIMER_DEC_INTRA_BLOCK stop_timer(MPEG4_PROF_DECODE_INTRA_BLOCK)
#else 
#define STOP_TIMER_DEC_INTRA_BLOCK 
#endif


/* Decode Inter Block */

#if PROF_DEC_INTER_BLK
#define START_TIMER_DEC_INTER_BLOCK start_timer(MPEG4_PROF_DECODE_INTER_BLOCK)
#else 
#define START_TIMER_DEC_INTER_BLOCK
#endif

#if PROF_DEC_INTER_BLK
#define STOP_TIMER_DEC_INTER_BLOCK stop_timer(MPEG4_PROF_DECODE_INTER_BLOCK)
#else 
#define STOP_TIMER_DEC_INTER_BLOCK 
#endif

/****************************/
/* for leaf level functions */
/****************************/

/* Inverse AC DC Prediction */

#if PROF_INV_AC_DC_PRED
#define START_TIMER_INV_AC_DC_PRED start_timer(MPEG4_PROF_INV_AC_DC_PRED)
#else 
#define START_TIMER_INV_AC_DC_PRED 
#endif

#if PROF_INV_AC_DC_PRED
#define STOP_TIMER_INV_AC_DC_PRED stop_timer(MPEG4_PROF_INV_AC_DC_PRED)
#else 
#define STOP_TIMER_INV_AC_DC_PRED 
#endif

#if PROF_DC_COEFF
#define START_TIMER_DC_COEFF start_timer(MPEG4_PROF_DC_COEFF)
#else 
#define START_TIMER_DC_COEFF 
#endif

#if PROF_DC_COEFF
#define STOP_TIMER_DC_COEFF stop_timer(MPEG4_PROF_DC_COEFF)
#else 
#define STOP_TIMER_DC_COEFF 
#endif

/* BUILD_BLOCK_MATRIX */

#if PROF_BUILD_BLOCK_MATRIX
#define START_TIMER_BUILD_BLOCK_MATRIX start_timer(MPEG4_PROF_BUILD_BLOCK_MATRIX)
#else 
#define START_TIMER_BUILD_BLOCK_MATRIX 
#endif

#if PROF_BUILD_BLOCK_MATRIX
#define STOP_TIMER_BUILD_BLOCK_MATRIX stop_timer(MPEG4_PROF_BUILD_BLOCK_MATRIX)
#else 
#define STOP_TIMER_BUILD_BLOCK_MATRIX 
#endif

#if PROF_BUILD_BLOCK_MATRIX
#define PAUSE_TIMER_BUILD_BLOCK_MATRIX pause_timer(MPEG4_PROF_BUILD_BLOCK_MATRIX)
#else 
#define PAUSE_TIMER_BUILD_BLOCK_MATRIX 
#endif

#if PROF_BUILD_BLOCK_MATRIX
#define RESUME_TIMER_BUILD_BLOCK_MATRIX resume_timer(MPEG4_PROF_BUILD_BLOCK_MATRIX)
#else 
#define RESUME_TIMER_BUILD_BLOCK_MATRIX 
#endif

/* Idct Compute Cols */

#if PROF_IDCT_COLS
#define START_TIMER_IDCT_COLS start_timer(MPEG4_PROF_IDCT_COLS)
#else 
#define START_TIMER_IDCT_COLS 
#endif

#if PROF_IDCT_COLS
#define STOP_TIMER_IDCT_COLS stop_timer(MPEG4_PROF_IDCT_COLS)
#else 
#define STOP_TIMER_IDCT_COLS 
#endif

/* Idct Compute Rows */

#if PROF_IDCT_ROWS
#define START_TIMER_IDCT_ROWS start_timer(MPEG4_PROF_IDCT_ROWS)
#else 
#define START_TIMER_IDCT_ROWS 
#endif

#if PROF_IDCT_ROWS
#define STOP_TIMER_IDCT_ROWS stop_timer(MPEG4_PROF_IDCT_ROWS)
#else 
#define STOP_TIMER_IDCT_ROWS 
#endif

/* Do AC DC Prediction */

#if PROF_DO_AC_DC_PRED
#define START_TIMER_DO_AC_DC_PRED start_timer(MPEG4_PROF_DO_AC_DC_PRED)
#else 
#define START_TIMER_DO_AC_DC_PRED 
#endif

#if PROF_DO_AC_DC_PRED
#define STOP_TIMER_DO_AC_DC_PRED stop_timer(MPEG4_PROF_DO_AC_DC_PRED)
#else 
#define STOP_TIMER_DO_AC_DC_PRED 
#endif

/* Dequant */

#if PROF_DEQUANT
#define START_TIMER_DEQUANT start_timer(MPEG4_PROF_DEQUANT)
#else 
#define START_TIMER_DEQUANT 
#endif

#if PROF_DEQUANT
#define STOP_TIMER_DEQUANT stop_timer(MPEG4_PROF_DEQUANT)
#else 
#define STOP_TIMER_DEQUANT 
#endif

/* Copy Block to frame */

#if PROF_CPY_BLK_TO_FRAME
#define START_TIMER_CPY_BLK_TO_FRAME start_timer(MPEG4_PROF_COPY_BLK_TO_FRAME)
#else 
#define START_TIMER_CPY_BLK_TO_FRAME 
#endif

#if PROF_CPY_BLK_TO_FRAME
#define STOP_TIMER_CPY_BLK_TO_FRAME stop_timer(MPEG4_PROF_COPY_BLK_TO_FRAME)
#else 
#define STOP_TIMER_CPY_BLK_TO_FRAME 
#endif

/* Add buffer to block matrix for P .*/

#if PROF_ADDBUFFERTOBLKMATRIX_P
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P start_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P)
#else 
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P 
#endif

#if PROF_ADDBUFFERTOBLKMATRIX_P
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P   stop_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P)
#else 
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P 
#endif


/* Add buffer to block matrix.     */
#if PROF_ADD_BUF_T_BLK_MAT
#define START_TIMER_ADD_BUF_T_BLK_MAT start_timer(MPEG4_PROF_ADD_BUF_T_BLK_MAT)
#else 
#define START_TIMER_ADD_BUF_T_BLK_MAT 
#endif

#if PROF_ADD_BUF_T_BLK_MAT
#define STOP_TIMER_ADD_BUF_T_BLK_MAT   stop_timer(MPEG4_PROF_ADD_BUF_T_BLK_MAT)
#else 
#define STOP_TIMER_ADD_BUF_T_BLK_MAT 
#endif

/* Add buffer to block matrix. interlaced */
#if PROF_ADDBUFFERTOBLKMATRIX_I
#define START_TIMER_ADDBUFFERTOBLKMATRIX_I start_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_I)
#else 
#define START_TIMER_ADDBUFFERTOBLKMATRIX_I 
#endif


#if PROF_ADDBUFFERTOBLKMATRIX_I
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_I stop_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_I)
#else 
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_I 
#endif

/* Add buffer to block matrix. interlaced in case quarter pels are available. */

#if PROF_ADDBUFFERTOBLKMATRIX_P_I
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P_I start_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P_I)
#else 
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P_I 
#endif


#if PROF_ADDBUFFERTOBLKMATRIX_P_I
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P_I   stop_timer(MPEG4_PROF_ADDBUFFERTOBLKMATRIX_P_I)
#else 
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P_I 
#endif


/* Apply filter taps for convolution.                             */
#if PROF_APPLYFILTER
#define START_TIMER_APPLYFILTER start_timer(MPEG4_PROF_APPLYFILTER)
#else 
#define START_TIMER_APPLYFILTER 
#endif


#if PROF_APPLYFILTER
#define STOP_TIMER_APPLYFILTER   stop_timer(MPEG4_PROF_APPLYFILTER)
#else 
#define STOP_TIMER_APPLYFILTER 
#endif






/* Put Block to buffer */

#if PROF_PUT_BLK_TO_BUFFER
#define START_TIMER_PUT_BLK_TO_BUFFER start_timer(MPEG4_PROF_PUT_BLK_TO_BUFFER)
#else 
#define START_TIMER_PUT_BLK_TO_BUFFER 
#endif

#if PROF_PUT_BLK_TO_BUFFER
#define STOP_TIMER_PUT_BLK_TO_BUFFER stop_timer(MPEG4_PROF_PUT_BLK_TO_BUFFER)
#else 
#define STOP_TIMER_PUT_BLK_TO_BUFFER 
#endif


/*Put block to buffer opt*/
#if PROF_PUT_BLK_TO_BUFFER_OPT
#define START_TIMER_PUT_BLK_TO_BUFFER_OPT start_timer(MPEG4_PROF_PUT_BLK_TO_BUFFER_OPT)
#else
#define START_TIMER_PUT_BLK_TO_BUFFER_OPT
#endif

#if PROF_PUT_BLK_TO_BUFFER_OPT
#define STOP_TIMER_PUT_BLK_TO_BUFFER_OPT stop_timer(MPEG4_PROF_PUT_BLK_TO_BUFFER_OPT)
#else
#define STOP_TIMER_PUT_BLK_TO_BUFFER_OPT
#endif



/* fullxfully_notcoded */

#if PROF_FULLXFULLY_NOT_CODED
#define START_TIMER_FULLXFULLY_NOT_CODED start_timer(MPEG4_PROF_FULLXFULLY_NOTCODED)
#else 
#define START_TIMER_FULLXFULLY_NOT_CODED 
#endif

#if PROF_FULLXFULLY_NOT_CODED
#define STOP_TIMER_FULLXFULLY_NOT_CODED stop_timer(MPEG4_PROF_FULLXFULLY_NOTCODED)
#else 
#define STOP_TIMER_FULLXFULLY_NOT_CODED 
#endif

/* halfxfully_notcoded */

#if PROF_HALFXFULLY_NOT_CODED
#define START_TIMER_HALFXFULLY_NOT_CODED start_timer(MPEG4_PROF_HALFXFULLY_NOTCODED)
#else 
#define START_TIMER_HALFXFULLY_NOT_CODED 
#endif

#if PROF_HALFXFULLY_NOT_CODED
#define STOP_TIMER_HALFXFULLY_NOT_CODED stop_timer(MPEG4_PROF_HALFXFULLY_NOTCODED)
#else 
#define STOP_TIMER_HALFXFULLY_NOT_CODED 
#endif

/*fullxhalfy_notcoded */

#if PROF_FULLXHALFY_NOT_CODED
#define START_TIMER_FULLXHALFY_NOT_CODED start_timer(MPEG4_PROF_FULLXHALFY_NOTCODED)
#else 
#define START_TIMER_FULLXHALFY_NOT_CODED 
#endif

#if PROF_FULLXHALFY_NOT_CODED
#define STOP_TIMER_FULLXHALFY_NOT_CODED stop_timer(MPEG4_PROF_FULLXHALFY_NOTCODED)
#else 
#define STOP_TIMER_FULLXHALFY_NOT_CODED 
#endif

/* halfxhalfy_notcoded */

#if PROF_HALFXHALFY_NOT_CODED
#define START_TIMER_HALFXHALFY_NOT_CODED start_timer(MPEG4_PROF_HALFXHALFY_NOTCODED)
#else 
#define START_TIMER_HALFXHALFY_NOT_CODED 
#endif

#if PROF_HALFXHALFY_NOT_CODED
#define STOP_TIMER_HALFXHALFY_NOT_CODED stop_timer(MPEG4_PROF_HALFXHALFY_NOTCODED)
#else 
#define STOP_TIMER_HALFXHALFY_NOT_CODED 
#endif

/* fullxfully */

#if PROF_FULLXFULLY
#define START_TIMER_FULLXFULLY start_timer(MPEG4_PROF_FULLXFULLY)
#else 
#define START_TIMER_FULLXFULLY
#endif

#if PROF_FULLXFULLY
#define STOP_TIMER_FULLXFULLY stop_timer(MPEG4_PROF_FULLXFULLY)
#else 
#define STOP_TIMER_FULLXFULLY
#endif

/* halfxfully_notcoded */

#if PROF_HALFXFULLY
#define START_TIMER_HALFXFULLY start_timer(MPEG4_PROF_HALFXFULLY)
#else 
#define START_TIMER_HALFXFULLY
#endif

#if PROF_HALFXFULLY
#define STOP_TIMER_HALFXFULLY stop_timer(MPEG4_PROF_HALFXFULLY)
#else 
#define STOP_TIMER_HALFXFULLY
#endif

/*fullxhalfy_notcoded */

#if PROF_FULLXHALFY
#define START_TIMER_FULLXHALFY start_timer(MPEG4_PROF_FULLXHALFY)
#else 
#define START_TIMER_FULLXHALFY
#endif

#if PROF_FULLXHALFY
#define STOP_TIMER_FULLXHALFY stop_timer(MPEG4_PROF_FULLXHALFY)
#else 
#define STOP_TIMER_FULLXHALFY
#endif

/* halfxhalfy_notcoded */

#if PROF_HALFXHALFY
#define START_TIMER_HALFXHALFY start_timer(MPEG4_PROF_HALFXHALFY)
#else 
#define START_TIMER_HALFXHALFY 
#endif

#if PROF_HALFXHALFY
#define STOP_TIMER_HALFXHALFY stop_timer(MPEG4_PROF_HALFXHALFY)
#else 
#define STOP_TIMER_HALFXHALFY 
#endif

/* fullxfully_i */

#if PROF_FULLXFULLY_I
#define START_TIMER_FULLXFULLY_I start_timer(MPEG4_PROF_FULLXFULLY_I)
#else 
#define START_TIMER_FULLXFULLY_I
#endif

#if PROF_FULLXFULLY_I
#define STOP_TIMER_FULLXFULLY_I stop_timer(MPEG4_PROF_FULLXFULLY_I)
#else 
#define STOP_TIMER_FULLXFULLY_I
#endif

/* fullxhalfy_i */

#if PROF_FULLXHALFY_I
#define START_TIMER_FULLXHALFY_I start_timer(MPEG4_PROF_FULLXHALFY_I)
#else 
#define START_TIMER_FULLXHALFY_I
#endif

#if PROF_FULLXHALFY_I
#define STOP_TIMER_FULLXHALFY_I stop_timer(MPEG4_PROF_FULLXHALFY_I)
#else 
#define STOP_TIMER_FULLXHALFY_I
#endif

/* halfxfully_i*/
#if PROF_HALFXFULLY_I
#define START_TIMER_HALFXFULLY_I start_timer(MPEG4_PROF_HALFXFULLY_I)
#else
#define START_TIMER_HALFXFULLY_I
#endif

#if PROF_HALFXFULLY_I
#define STOP_TIMER_HALFXFULLY_I stop_timer(MPEG4_PROF_HALFXFULLY_I)
#else
#define STOP_TIMER_HALFXFULLY_I
#endif


/*halfxhalfy_i*/
#if PROF_HALFXHALFY_I
#define START_TIMER_HALFXHALFY_I start_timer(MPEG4_PROF_HALFXHALFY_I)
#else
#define START_TIMER_HALFXHALFY_I
#endif



#if PROF_HALFXHALFY_I
#define STOP_TIMER_HALFXHALFY_I stop_timer(MPEG4_PROF_HALFXHALFY_I)
#else
#define STOP_TIMER_HALFXHALFY_I
#endif


/*interpolate halfxhalfy*/
#if PROF_INTERPOLATEHALF_XHALF_Y
#define START_TIMER_INTERPOLATEHALF_XHALF_Y start_timer(MPEG4_PROF_INTERPOLATEHALF_XHALF_Y)
#else 
#define START_TIMER_INTERPOLATEHALF_XHALF_Y
#endif

#if PROF_INTERPOLATEHALF_XHALF_Y
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y stop_timer(MPEG4_PROF_INTERPOLATEHALF_XHALF_Y)
#else 
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y
#endif


/*interpolate halfxfully*/
#if PROF_INTERPOLATEHALF_XFULL_Y
#define START_TIMER_INTERPOLATEHALF_XFULL_Y start_timer(MPEG4_PROF_INTERPOLATEHALF_XFULL_Y)
#else 
#define START_TIMER_INTERPOLATEHALF_XFULL_Y
#endif

#if PROF_INTERPOLATEHALF_XFULL_Y
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y stop_timer(MPEG4_PROF_INTERPOLATEHALF_XFULL_Y)
#else 
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y
#endif


/*interpolate fullxhalfy*/
#if PROF_INTERPOLATEFULL_XHALF_Y
#define START_TIMER_INTERPOLATEFULL_XHALF_Y start_timer(MPEG4_PROF_INTERPOLATEFULL_XHALF_Y)
#else 
#define START_TIMER_INTERPOLATEFULL_XHALF_Y
#endif

#if PROF_INTERPOLATEFULL_XHALF_Y
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y stop_timer(MPEG4_PROF_INTERPOLATEFULL_XHALF_Y)
#else 
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y
#endif


/*interpolate halfxhalfy_i*/
#if PROF_INTERPOLATEHALF_XHALF_Y_I
#define START_TIMER_INTERPOLATEHALF_XHALF_Y_I start_timer(MPEG4_PROF_INTERPOLATEHALF_XHALF_Y_I)
#else 
#define START_TIMER_INTERPOLATEHALF_XHALF_Y_I
#endif

#if PROF_INTERPOLATEHALF_XHALF_Y_I
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y_I stop_timer(MPEG4_PROF_INTERPOLATEHALF_XHALF_Y_I)
#else 
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y_I
#endif


/*interpolate halfxfully_i*/
#if PROF_INTERPOLATEHALF_XFULL_Y_I
#define START_TIMER_INTERPOLATEHALF_XFULL_Y_I start_timer(MPEG4_PROF_INTERPOLATEHALF_XFULL_Y_I)
#else 
#define START_TIMER_INTERPOLATEHALF_XFULL_Y_I
#endif

#if PROF_INTERPOLATEHALF_XFULL_Y_I
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y_I stop_timer(MPEG4_PROF_INTERPOLATEHALF_XFULL_Y_I)
#else 
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y_I
#endif

/*interpolate fullxhalfy_i*/
#if PROF_INTERPOLATEFULL_XHALF_Y_I
#define START_TIMER_INTERPOLATEFULL_XHALF_Y_I start_timer(MPEG4_PROF_INTERPOLATEFULL_XHALF_Y_I)
#else 
#define START_TIMER_INTERPOLATEFULL_XHALF_Y_I
#endif

#if PROF_INTERPOLATEFULL_XHALF_Y_I
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y_I stop_timer(MPEG4_PROF_INTERPOLATEFULL_XHALF_Y_I)
#else 
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y_I
#endif




/* vld_mcbpc */

#if PROF_VLD_MCBPC
#define START_TIMER_VLD_MCBPC start_timer(MPEG4_PROF_VLD_MCBPC)
#else 
#define START_TIMER_VLD_MCBPC 
#endif

#if PROF_VLD_MCBPC
#define STOP_TIMER_VLD_MCBPC stop_timer(MPEG4_PROF_VLD_MCBPC)
#else 
#define STOP_TIMER_VLD_MCBPC 
#endif

/* vld_mcbpc */

#if PROF_VLD_CBPY
#define START_TIMER_VLD_CBPY start_timer(MPEG4_PROF_VLD_CBPY)
#else 
#define START_TIMER_VLD_CBPY 
#endif

#if PROF_VLD_CBPY
#define STOP_TIMER_VLD_CBPY stop_timer(MPEG4_PROF_VLD_CBPY)
#else 
#define STOP_TIMER_VLD_CBPY 
#endif

/* vld_mcbpc */

#if PROF_DECODEMBHEADER_IVOP
#define START_TIMER_DECODEMBHEADER_IVOP start_timer(MPEG4_PROF_DECODEMBHEADER_IVOP)
#else 
#define START_TIMER_DECODEMBHEADER_IVOP
#endif

#if PROF_DECODEMBHEADER_IVOP
#define STOP_TIMER_DECODEMBHEADER_IVOP stop_timer(MPEG4_PROF_DECODEMBHEADER_IVOP)
#else 
#define STOP_TIMER_DECODEMBHEADER_IVOP 
#endif

/* vld_tcoef */

#if PROF_VLD_TCOEF
#define START_TIMER_VLD_TCOEF start_timer(MPEG4_PROF_VLD_TCOEF)
#else 
#define START_TIMER_VLD_TCOEF
#endif

#if PROF_VLD_TCOEF
#define STOP_TIMER_VLD_TCOEF stop_timer(MPEG4_PROF_VLD_TCOEF)
#else 
#define STOP_TIMER_VLD_TCOEF 
#endif

/* mv_decode_p */

#if PROF_MV_DECODER_P
#define START_TIMER_MV_DECODER_P start_timer(MPEG4_PROF_MV_DECODER_P)
#else 
#define START_TIMER_MV_DECODER_P 
#endif

#if PROF_MV_DECODER_P
#define STOP_TIMER_MV_DECODER_P stop_timer(MPEG4_PROF_MV_DECODER_P)
#else 
#define STOP_TIMER_MV_DECODER_P 
#endif


/* Get MV Chrom */

#if PROF_GET_MV_CHROM
#define START_TIMER_GET_MV_CHROM start_timer(MPEG4_PROF_GET_MV_CHROM)
#else 
#define START_TIMER_GET_MV_CHROM 
#endif

#if PROF_GET_MV_CHROM
#define STOP_TIMER_GET_MV_CHROM stop_timer(MPEG4_PROF_GET_MV_CHROM)
#else 
#define STOP_TIMER_GET_MV_CHROM
#endif

/* MC Forw or Back */

#if PROF_MC_FORW_OR_BACK
#define START_TIMER_MC_FORW_OR_BACK start_timer(MPEG4_PROF_MC_FORW_OR_BACK)
#else 
#define START_TIMER_MC_FORW_OR_BACK 
#endif

#if PROF_MC_FORW_OR_BACK
#define STOP_TIMER_MC_FORW_OR_BACK stop_timer(MPEG4_PROF_MC_FORW_OR_BACK)
#else 
#define STOP_TIMER_MC_FORW_OR_BACK
#endif

#if 1
/* GetPredcitorInter1V */
#if PROF_GET_PREDICTOR_INTER1V
#define START_TIMER_GET_PREDICTOR_INTER1V start_timer(MPEG4_PROF_GET_PREDICTOR_INTER1V)
#else 
#define START_TIMER_GET_PREDICTOR_INTER1V 
#endif

#if PROF_GET_PREDICTOR_INTER4V
#define STOP_TIMER_GET_PREDICTOR_INTER1V stop_timer(MPEG4_PROF_GET_PREDICTOR_INTER1V)
#else 
#define STOP_TIMER_GET_PREDICTOR_INTER1V 
#endif

#else

extern prof_var_t gs_prof_get_predictor_inter1v;


#if PROF_GET_PREDICTOR_INTER1V
#define START_TIMER_GET_PREDICTOR_INTER1V { \
    arm9e_timer_start_timer(); \
    gs_prof_get_predictor_inter1v.start = arm9e_timer_get_timer();\
    }
#else 
#define START_TIMER_GET_PREDICTOR_INTER1V 
#endif


#if PROF_GET_PREDICTOR_INTER4V
#define STOP_TIMER_GET_PREDICTOR_INTER1V { \
    gs_prof_get_predictor_inter1v.stop = arm9e_timer_get_timer(); \
    func_timer_stop(&gs_prof_get_predictor_inter1v); \
    }
#else 
#define STOP_TIMER_GET_PREDICTOR_INTER1V 
#endif

#endif

/* GetPredcitorInter4V */
#if PROF_GET_PREDICTOR_INTER4V
#define START_TIMER_GET_PREDICTOR_INTER4V start_timer(MPEG4_PROF_GET_PREDICTOR_INTER4V)
#else 
#define START_TIMER_GET_PREDICTOR_INTER4V 
#endif

#if PROF_GET_PREDICTOR_INTER4V
#define STOP_TIMER_GET_PREDICTOR_INTER4V stop_timer(MPEG4_PROF_GET_PREDICTOR_INTER4V)
#else 
#define STOP_TIMER_GET_PREDICTOR_INTER4V 
#endif

/* DecodeMotionVector */
#if PROF_DECODE_MOTION_VECTOR
#define START_TIMER_DECODE_MOTION_VECTOR start_timer(MPEG4_PROF_DECODE_MOTION_VECTOR)
#else 
#define START_TIMER_DECODE_MOTION_VECTOR 
#endif

#if PROF_DECODE_MOTION_VECTOR
#define STOP_TIMER_DECODE_MOTION_VECTOR stop_timer(MPEG4_PROF_DECODE_MOTION_VECTOR)
#else 
#define STOP_TIMER_DECODE_MOTION_VECTOR 
#endif

#if PROF_GETQUARTERPELVAL
#define START_TIMER_GETQUARTERPELVAL start_timer(MPEG4_PROF_GETQUARTERPELVAL)
#define STOP_TIMER_GETQUARTERPELVAL stop_timer(MPEG4_PROF_GETQUARTERPELVAL)
#else
#define START_TIMER_GETQUARTERPELVAL
#define STOP_TIMER_GETQUARTERPELVAL
#endif 

/*readtobuffer*/
#if PROF_READTOBUFFER
#define START_TIMER_READTOBUFFER start_timer(MPEG4_PROF_READTOBUFFER)
#else
#define START_TIMER_READTOBUFFER
#endif

#if  PROF_READTOBUFFER
#define STOP_TIMER_READTOBUFFER stop_timer(MPEG4_PROF_READTOBUFFER)
#else
#define STOP_TIMER_READTOBUFFER
#endif

/*getmv_chrom_qpel*/
#if PROF_GETMV_CHROM_QPEL
#define START_TIMER_GETMV_CHROM_QPEL start_timer(MPEG4_PROF_GETMV_CHROM_QPEL)
#else 
#define START_TIMER_GETMV_CHROM_QPEL 
#endif


#if PROF_GETMV_CHROM_QPEL
#define STOP_TIMER_GETMV_CHROM_QPEL stop_timer(MPEG4_PROF_GETMV_CHROM_QPEL)
#else 
#define STOP_TIMER_GETMV_CHROM_QPEL 
#endif


#else

/* Do not Change this part */

#define PRINT_TIMER 

/* Timer start functions */
#define START_TIMER_DECODER 
#define START_TIMER_I_VOP 
#define START_TIMER_P_VOP 
#define START_TIMER_DEC_INTRA_MB 
#define START_TIMER_DEC_INTRA_BLOCK 
#define START_TIMER_DEC_INTER_BLOCK 
#define START_TIMER_INV_AC_DC_PRED 
#define START_TIMER_DC_COEFF 
#define START_TIMER_BUILD_BLOCK_MATRIX 
#define START_TIMER_IDCT_COLS 
#define START_TIMER_IDCT_ROWS 
#define START_TIMER_DO_AC_DC_PRED 
#define START_TIMER_DEQUANT 
#define START_TIMER_CPY_BLK_TO_FRAME 
#define START_TIMER_MV_DECODER_P 
#define START_TIMER_FULLXFULLY_NOT_CODED
#define START_TIMER_HALFXFULLY_NOT_CODED 
#define START_TIMER_FULLXHALFY_NOT_CODED
#define START_TIMER_HALFXHALFY_NOT_CODED 
#define START_TIMER_FULLXFULLY 
#define START_TIMER_HALFXFULLY 
#define START_TIMER_FULLXHALFY 
#define START_TIMER_HALFXHALFY
#define START_TIMER_FULLXFULLY_I
#define START_TIMER_FULLXHALFY_I
#define START_TIMER_HALFXFULLY_I
#define START_TIMER_HALFXHALFY_I
#define START_TIMER_VLD_MCBPC 
#define START_TIMER_VLD_CBPY 
#define START_TIMER_DECODEMBHEADER_IVOP 
#define START_TIMER_VLD_TCOEF 
#define START_TIMER_GET_PREDICTOR_INTER1V
#define START_TIMER_GET_PREDICTOR_INTER4V
#define START_TIMER_DECODE_MOTION_VECTOR
#define START_TIMER_PUT_BLK_TO_BUFFER_OPT 
#define START_TIMER_GET_MV_CHROM
#define START_TIMER_MC_FORW_OR_BACK

#define START_TIMER_INTERPOLATEHALF_XHALF_Y
#define START_TIMER_INTERPOLATEHALF_XFULL_Y
#define START_TIMER_INTERPOLATEFULL_XHALF_Y
#define START_TIMER_INTERPOLATEHALF_XHALF_Y_I
#define START_TIMER_INTERPOLATEHALF_XFULL_Y_I
#define START_TIMER_INTERPOLATEFULL_XHALF_Y_I

#define START_TIMER_GETQUARTERPELVAL
#define START_TIMER_ADD_BUF_T_BLK_MAT
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P
#define START_TIMER_ADDBUFFERTOBLKMATRIX_I
#define START_TIMER_ADDBUFFERTOBLKMATRIX_P_I
#define START_TIMER_APPLYFILTER
#define START_TIMER_READTOBUFFER
#define START_TIMER_GETMV_CHROM_QPEL

/* Timer stop functions */
#define STOP_TIMER_DECODER 
#define STOP_TIMER_I_VOP 
#define STOP_TIMER_P_VOP
#define STOP_TIMER_DEC_INTRA_MB 
#define STOP_TIMER_DEC_INTRA_BLOCK 
#define STOP_TIMER_DEC_INTER_BLOCK 
#define STOP_TIMER_INV_AC_DC_PRED 
#define STOP_TIMER_DC_COEFF 
#define STOP_TIMER_BUILD_BLOCK_MATRIX 
#define STOP_TIMER_IDCT_COLS 
#define STOP_TIMER_IDCT_ROWS 
#define STOP_TIMER_DO_AC_DC_PRED 
#define STOP_TIMER_DEQUANT 
#define STOP_TIMER_CPY_BLK_TO_FRAME 
#define STOP_TIMER_MV_DECODER_P 
#define STOP_TIMER_FULLXFULLY_NOT_CODED 
#define STOP_TIMER_HALFXFULLY_NOT_CODED 
#define STOP_TIMER_FULLXHALFY_NOT_CODED 
#define STOP_TIMER_HALFXHALFY_NOT_CODED  
#define STOP_TIMER_FULLXFULLY
#define STOP_TIMER_HALFXFULLY
#define STOP_TIMER_FULLXHALFY
#define STOP_TIMER_HALFXHALFY
#define STOP_TIMER_FULLXFULLY_I
#define STOP_TIMER_FULLXHALFY_I
#define STOP_TIMER_HALFXFULLY_I
#define STOP_TIMER_HALFXHALFY_I
#define STOP_TIMER_VLD_MCBPC 
#define STOP_TIMER_VLD_CBPY 
#define STOP_TIMER_DECODEMBHEADER_IVOP 
#define STOP_TIMER_VLD_TCOEF 
#define STOP_TIMER_GET_PREDICTOR_INTER1V
#define STOP_TIMER_GET_PREDICTOR_INTER4V
#define STOP_TIMER_DECODE_MOTION_VECTOR
#define STOP_TIMER_PUT_BLK_TO_BUFFER_OPT 
#define STOP_TIMER_GET_MV_CHROM
#define STOP_TIMER_MC_FORW_OR_BACK
#define STOP_TIMER_FULLXFULLY_I
#define STOP_TIMER_GETQUARTERPELVAL
#define STOP_TIMER_ADD_BUF_T_BLK_MAT
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_I
#define STOP_TIMER_ADDBUFFERTOBLKMATRIX_P_I

#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y
#define STOP_TIMER_INTERPOLATEHALF_XHALF_Y_I
#define STOP_TIMER_INTERPOLATEHALF_XFULL_Y_I
#define STOP_TIMER_INTERPOLATEFULL_XHALF_Y_I
#define STOP_TIMER_APPLYFILTER
#define  STOP_TIMER_READTOBUFFER
#define  STOP_TIMER_GETMV_CHROM_QPEL
#endif

#endif /* MPEG4ASPDEC_PROFILE_H */

