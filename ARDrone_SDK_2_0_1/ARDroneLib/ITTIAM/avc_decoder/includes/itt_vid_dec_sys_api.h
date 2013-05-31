/*****************************************************************************/
/*                                                                           */
/*                     ARM VIDDEC API HEADER                                 */
/*                  ITTIAM SYSTEMS PVT LTD, BANGALORE                        */
/*                           COPYRIGHT(C) 2005                               */
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
/*  File Name         : itt_vid_dec_sys_api.h                                */
/*                                                                           */
/*  Description       : This file details the Enums and Structures used by   */
/*                      the video decoder APIs                               */
/*                                                                           */
/*  List of Functions : None                                                 */
/*                                                                           */
/*  Issues / Problems : None                                                 */
/*                                                                           */
/*  Revision History  :                                                      */
/*                                                                           */
/*         DD MM YYYY   Author(s)       Changes (Describe the changes made)  */
/*         14 10 2008   100356(SKV)     Draft                                */
/*                                                                           */
/*****************************************************************************/
#ifndef __ITT_VID_DEC_SYS_API_H__
#define __ITT_VID_DEC_SYS_API_H__
#define ITT_VIDDEC_MAX_IO_BUFFERS 32

/*****************************************************************************/
/* Generic Enums and structures                                              */
/*****************************************************************************/


/*****************************************************************************/
/* VIDDEC_Status :Enumerates the status of the decoder                       */
/* Mainly Used by app to know whether the complete frame/pic has been decoded*/
/* in the last decode call                                                   */
/*****************************************************************************/
typedef enum{
  ITT_DECODING_IN_PROGRESS,
  ITT_FRAME_DECODED,
  ITT_END_OF_SEQ,

  ITT_PACKET_REJECTED
}VIDDEC_Status;

/*****************************************************************************/
/* VIDDEC_Error_Code :This is only to return the FAIL/PASS status to the app */
/* for the current API call                                                  */
/*****************************************************************************/
typedef enum{
	ITT_SUCCESS = 1,
    ITT_FAIL,
}VIDDEC_Error_Code;

/*****************************************************************************/
/* Memory records: Enumerates and structures used in the initilization/clear */
/*****************************************************************************/
typedef enum {
    ITT_INTERNAL_PERSISTENT_MEM = 0,
    ITT_INTERNAL_SCRATCH_MEM    = 1,
    ITT_EXTERNAL_PERSISTENT_MEM = 2,
    ITT_EXTERNAL_SCRATCH_MEM    = 3,
}MEM_TYPE_T ;

typedef enum {
    ITT_NO_ALIGNMENT     = 0,
    ITT_ALIGN_16_BIT     = 1,
    ITT_ALIGN_32_BIT     = 2,
    ITT_ALIGN_64_BIT     = 3,
    ITT_ALIGN_128_BIT    = 4,
} MEM_ALIGNMENT_T;



typedef struct {
    void            *pv_base;
    UWORD32         u4_mem_size;
    MEM_TYPE_T      e_mem_type;
    MEM_ALIGNMENT_T e_mem_alignment;
} MEM_REC_T;


/*****************************************************************************/
/* Color Format                                                                */
/*****************************************************************************/
typedef enum {
	ITT_CHROMA_NA  =0,
	ITT_YUV_420P ,
	ITT_YUV_422P ,
	ITT_YUV_422IBE,
	ITT_YUV_422ILE ,
	ITT_YUV_444P ,
	ITT_YUV_411P ,
	ITT_GRAY ,
	ITT_RGB
} VIDDEC_color_format;


/*****************************************************************************/
/* YUV Frame Buffer                                                          */
/*****************************************************************************/
typedef struct {
    UWORD8  *pu1_y_buf;
    UWORD8  *pu1_u_buf;
    UWORD8  *pu1_v_buf;
    UWORD16 u2_y_wd;
    UWORD16 u2_y_ht;
    UWORD16 u2_y_strd;
    UWORD16 u2_uv_wd;
    UWORD16 u2_uv_ht;
    UWORD16 u2_uv_strd;
} yuv_frm_buf_t;

/*****************************************************************************/
/* Handle:Video decoder object                                               */
/*****************************************************************************/
typedef struct{
   void      *fxns;           //poiter to the API of decoder
   void      *pv_dec_struct; //pointer to the persistence data of the decoder
} VIDDEC_Obj;


/*****************************************************************************/
/* VOP/Frame coding type Enumeration                                         */
/*****************************************************************************/
typedef enum {
ITT_NA_FRAME = -1,
ITT_I_FRAME = 0,
ITT_P_FRAME = 1,
ITT_B_FRAME = 2,
ITT_IDR_FRAME = 3,
ITT_II_FRAME = 4,
ITT_IP_FRAME = 5,
ITT_IB_FRAME = 6,
ITT_PI_FRAME = 7,
ITT_PP_FRAME = 8,
ITT_PB_FRAME = 9,
ITT_BI_FRAME = 10,
ITT_BP_FRAME = 11,
ITT_BB_FRAME = 12,
ITT_MBAFF_I_FRAME = 13,
ITT_MBAFF_P_FRAME = 14,
ITT_MBAFF_B_FRAME = 15,
ITT_MBAFF_IDR_FRAME = 16,
ITT_FRAMETYPE_DEFAULT = ITT_I_FRAME
} VIDDEC_pic_coding_type;

/*****************************************************************************/
/* Frame Ready for Display                                                   */
/*****************************************************************************/
typedef enum {
ITT_FRAME_NOT_READY = -1,
ITT_FRAME_READY=0
} VIDDEC_frm_status;


/*****************************************************************************/
/* Skip mode Enumeration                                                     */
/*****************************************************************************/

typedef enum {
ITT_NO_SKIP  =0,
ITT_SKIP_P,
ITT_SKIP_B,
ITT_SKIP_I,
ITT_SKIP_IP,
ITT_SKIP_IB,
ITT_SKIP_PB,
ITT_SKIP_IPB,
ITT_SKIP_IDR,
ITT_SKIP_DEFAULT = ITT_NO_SKIP
}VIDDEC_frm_skip_mode;

/*****************************************************************************/
/*  Error code bits                                                       */
/*****************************************************************************/
typedef enum {
    ITT_APPLIEDCONCEALMENT = 9,  /**< Bit 9 - Applied concealment. */
    ITT_INSUFFICIENTDATA = 10,   /**< Bit 10 - Insufficient input data. */
    ITT_CORRUPTEDDATA = 11,      /**< Bit 11 - Data problem/corruption. */
    ITT_CORRUPTEDHEADER = 12,    /**< Bit 12 - Header problem/corruption. */
    ITT_UNSUPPORTEDINPUT = 13,   /**< Bit 13 - Unsupported feature/parameter
                                  *   in input.
                                  */
    ITT_UNSUPPORTEDPARAM = 14,   /**< Bit 14 - Unsupported input parameter or
                                  *   configuration.
                                  */
    ITT_FATALERROR = 15          /**< Bit 15 - Fatal error (stop the codec).
                                  *   If there is an error and this
                                  *   bit is not set, the error is a
                                  *   recoverable one.
                                  */
} ITT_ErrorBit;

/*****************************************************************************/
/* Video content type                                                        */
/*****************************************************************************/
typedef enum {
ITT_CONTENTTYPE_NA  =-1,
ITT_PROGRESSIVE ,
ITT_INTERLACED ,
ITT_PROGRESSIVE_FRAME ,
ITT_INTERLACED_FRAME ,
ITT_INTERLACED_TOPFIELD ,
ITT_INTERLACED_BOTTOMFIELD ,
ITT_CONTENTTYPE_DEFAULT ,
}VIDDEC_content_type;


/*****************************************************************************/
/* API command type                                                          */
/*****************************************************************************/
typedef enum {
ITT_CMD_VIDDEC_GET_NUM_MEM_REC =0,
ITT_CMD_VIDDEC_FILL_NUM_MEM_REC,
ITT_CMD_VIDDEC_INIT,
ITT_CMD_VIDDEC_VIDEO_CTL,
ITT_CMD_VIDDEC_VIDEO_DECODE,
ITT_CMD_VIDDEC_GET_DISPLAY_FRAME,
ITT_CMD_VIDDEC_REL_DISP_BUFF,
ITT_CMD_VIDDEC_CLR
}VIDDEC_api_command;

/*****************************************************************************/
/* Video Control API command type                                                          */
/*****************************************************************************/

typedef enum {
ITT_CMD_VIDDEC_ctl_GETPARAMS =0,
ITT_CMD_VIDDEC_ctl_SETPARAMS,
ITT_CMD_VIDDEC_ctl_RESET,
ITT_CMD_VIDDEC_ctl_SETDEFAULT,
ITT_CMD_VIDDEC_ctl_FLUSH,
ITT_CMD_VIDDEC_ctl_GETBUFINFO,
}VIDDEC_control_command;


/*****************************************************************************/
/* //Input Buffer status                                                     */
/*****************************************************************************/

typedef enum {
ITT_END_OF_STREAM_BUFFER,
ITT_DATA_PRESENT_IN_STREAM_BUFFER,
ITT_END_OF_STREAM

} VIDDEC_buffer_status;


/*****************************************************************************/
/* Display out related                                                       */
/*****************************************************************************/


/*****************************************************************************/
/* structure for interlaced frame display                                    */
/*****************************************************************************/
typedef struct interlace_disp_out_info
{
                UWORD32 u4_num_top_fields;         /* No. of top fields to be displayed     */
                UWORD32 u4_num_bot_fields;         /* No. of bottom fields to be displayed  */
                UWORD32 u4_top_field_first;        /* Which field to be displayed first     */

                /* To signal the presence of time stamps decoded while parsing           */
                UWORD8  u1_clk_timestamp_flags[3];
                UWORD32 u4_clk_timestamp[3];
} int_disp_out_info;


/*****************************************************************************/
/* structure for progressive frame display                                   */
/*****************************************************************************/
typedef struct progressive_disp_out_info
{
                /* Number of progressive frames to be repeated. Values in range 1 - 3    */
                UWORD32 u4_num_prog_frames;

                /* Time Stamps Flags for each frame if set indicates that frame has Clk  */
                /* TS decoded as part of VDE bitstream. If 0 indicates no presence of TS */
                /* Note: This is useful in H264 picture timing SEI and MPEG2 streams     */
                UWORD8 u1_clk_timestamp_flags[3];

                /* Time Stamps for each frame if u4_clk_timestamp_flags for that frame   */
                /* is set otherwise unused                                               */
                /* Note: This is useful in H264 picture timing SEI and MPEG2 streams     */
                UWORD32 u4_clk_timestamp[3];
} prog_disp_out_info;


typedef union display_out_info_union
{
                int_disp_out_info           s_int_disp_info;
                prog_disp_out_info       s_prog_disp_info;
}display_out_info_union_t;

/*****************************************************************************/
/*  Get Number of Memory Records                                             */
/*****************************************************************************/


//Input Structure
typedef struct {
    UWORD16     e_cmd;
} ittiam_video_dec_num_mem_rec_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code    e_dec_status;
    UWORD16          u2_num_mem_rec;
} ittiam_video_dec_num_mem_rec_op_t;


/*****************************************************************************/
/*  Fill Memory Records                                                      */
/*****************************************************************************/

//Input Structure
typedef struct {
    UWORD16     e_cmd;
    MEM_REC_T *pv_mem_rec_location;
    UWORD16    u2_num_mem_rec;
    UWORD16     u2_max_frm_wd;
    UWORD16     u2_max_frm_ht;
    void *pv_decoder_fill_mem_rec;
    } ittiam_video_dec_fill_mem_rec_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
    UWORD16           u2_num_mem_rec_filled;
} ittiam_video_dec_fill_mem_rec_op_t;


/*****************************************************************************/
/*   Initialize decoder                                                      */
/*****************************************************************************/

//Input Structure
typedef struct {
    UWORD16     e_cmd;
    UWORD16     u2_num_mem_rec;
    UWORD16     u2_frm_max_wd;
    UWORD16     u2_frm_max_ht;
    VIDDEC_color_format  u4_output_format;
    MEM_REC_T *pv_mem_rec_location;
    void *pv_decoder_init_decoder;
} ittiam_video_dec_init_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
} ittiam_video_dec_init_op_t;


/*****************************************************************************/
/*   Video Decode                                                            */
/*****************************************************************************/

//Input Structure
typedef struct {
    UWORD16       e_cmd;
    UWORD32       u4_system_ts;
    void          *pv_stream_buffer;
    UWORD32       num_Bytes;
/* ! */
    UWORD32       u4_xdmBufId;

} ittiam_video_dec_video_decode_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
	VIDDEC_buffer_status     e_inbuff_status;
	VIDDEC_Error_Code e_Error; //This is only for returning fail/pass
	WORD32 e_Error_code; //Detailed error code
    UWORD32 u4_num_bytes_consumed;
    UWORD32 u4_pic_wt;
    UWORD32 u4_pic_ht;
	VIDDEC_pic_coding_type  u4_FrameType;
	UWORD8  u1_new_seq;
    void    *pv_codec_specific_output;
} ittiam_video_dec_video_decode_op_t;


/*****************************************************************************/
/*   Get Display Frame                                                       */
/*****************************************************************************/

//Input Structure
typedef struct
{
    UWORD32 e_cmd;
} ittiam_video_dec_get_display_frame_ip_t;

//Output Structure
typedef struct
{
    VIDDEC_Error_Code     e_dec_status;
    UWORD32                   u4_progressive_frame_flag;
    display_out_info_union_t  s_display_info_union;
    VIDDEC_frm_status         u4_frm_not_ready;
    VIDDEC_pic_coding_type    e_pic_type;
    UWORD32                   u4_is_ref_flag;
    UWORD32                   u4_data_corrupt_flag;
	VIDDEC_color_format       e_output_format;
    yuv_frm_buf_t             *pv_disp_frm_buf;
	WORD32                    fld_type;
	UWORD32                   u1_buf_id;
	void *					  pv_codec_specific_output;
    /* ! */
    UWORD32       u4_xdmBufId;

} ittiam_video_dec_get_display_frame_op_t;


/*****************************************************************************/
/*   Release Display Buffers                                                 */
/*****************************************************************************/

//Input Structure
typedef struct
{
    UWORD32 e_cmd;
    //UWORD32 fld_type;
	UWORD32 buf_id;
} ittiam_video_dec_rel_disp_buff_ip_t;

//Output Structure
typedef struct
{
    VIDDEC_Error_Code     e_dec_status;

} ittiam_video_dec_rel_disp_buff_op_t;
/*****************************************************************************/
/*   Clear Decoder                                                           */
/*****************************************************************************/

//Input Structure
typedef struct {
    UWORD16  e_cmd;
} ittiam_video_dec_clear_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
    MEM_REC_T *pv_mem_rec_location;
    UWORD16    u2_num_mem_rec;
} ittiam_video_dec_clear_op_t;
/*****************************************************************************/
/*   Video control  Flush                                                    */
/*****************************************************************************/
//Input Structure
typedef struct{
   VIDDEC_api_command     e_cmd;
   VIDDEC_control_command e_sub_cmd;
} ittiam_video_ctl_flush_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
} ittiam_video_ctl_flush_op_t;

/*****************************************************************************/
/*   Video control reset                                                    */
/*****************************************************************************/
//Input Structure
typedef struct{
   VIDDEC_api_command     e_cmd;
   VIDDEC_control_command e_sub_cmd;
} ittiam_video_ctl_reset_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
} ittiam_video_ctl_reset_op_t;


/*****************************************************************************/
/*   Video control  Set Params                                               */
/*****************************************************************************/

//Input Structure
typedef struct {
   VIDDEC_api_command     e_cmd;
   VIDDEC_control_command e_sub_cmd;
   UWORD32 decodeHeader;   //if 1 then decode complete header in the next process call else do normal deocode
   UWORD32 displayWidth;
   VIDDEC_frm_skip_mode frameSkipMode;
   void *pv_decoder_set_config_params;//Extended params

} ittiam_video_dec_set_config_ip_t;

//Output Structure
typedef struct{
    VIDDEC_Error_Code     e_dec_status;
    void        *pv_decoder_set_config_params;//Extended params

} ittiam_video_dec_set_config_op_t;

/*****************************************************************************/
/*   Video control:Get Buf Info                                                          */
/*****************************************************************************/

//Input Structure
typedef struct{
   VIDDEC_api_command     e_cmd;
   VIDDEC_control_command e_sub_cmd;
} ittiam_video_ctl_getbufinfo_ip_t;

//Output Structure

typedef struct{
    VIDDEC_Error_Code     e_dec_status;
    UWORD32 minNumInBufs;
    UWORD32 minNumOutBufs;
    UWORD32  minInBufSize[ITT_VIDDEC_MAX_IO_BUFFERS];
    UWORD32  minOutBufSize[ITT_VIDDEC_MAX_IO_BUFFERS];
} ittiam_video_ctl_getbufinfo_op_t;


/*****************************************************************************/
/*   Video control:Getstatus Call                                            */
/*****************************************************************************/

//Input Structure
typedef struct{
/*No Input parameters are needed*/
   VIDDEC_api_command     e_cmd;
   VIDDEC_control_command e_sub_cmd;
} ittiam_video_ctl_getstatus_ip_t;

//Output Structure

typedef struct{

	UWORD32 maxNumDisplayBufs;
	UWORD32 outputHeight;
	UWORD32 outputWidth;
	UWORD32 frameRate;
	UWORD32 bitRate;
	VIDDEC_content_type contentType;
	UWORD32 outputChromaFormat;
    UWORD32 minNumInBufs;
    UWORD32 minNumOutBufs;
	ITT_ErrorBit Error_code;
    UWORD32  minInBufSize[ITT_VIDDEC_MAX_IO_BUFFERS];
    UWORD32  minOutBufSize[ITT_VIDDEC_MAX_IO_BUFFERS];
} ittiam_video_ctl_getstatus_op_t;


/*****************************************************************************/
/* API Function Prototype  //Fill in the proper decoder name here            */
/*****************************************************************************/
void ittiam_api_viddec_h264_lib (VIDDEC_Obj *DECHDL, void *pv_api_ip,void *pv_api_op);
#endif //#ifndef __ITT_VID_DEC_SYS_API_H__

