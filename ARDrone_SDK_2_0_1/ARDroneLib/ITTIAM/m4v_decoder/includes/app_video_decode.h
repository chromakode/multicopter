#ifndef __VIDEO_APPLICATION_MAIN__
#define __VIDEO_APPLICATION_MAIN__
/*******************************************************************************
*
*						   MPEG-4 Video Decoder
*                    ITTIAM SYSTEMS PVT LTD, BANGALORE
*                            COPYRIGHT(C) 2001
*
*  This program is proprietary to Ittiam Systems Pvt. Ltd. and is protected
*  under Indian Copyright Act as an unpublished work. Its use and disclosure is
*  limited by the terms and conditions of a license agreement. It may not be
*  copied or otherwise reproduced or disclosed to persons outside the licensee's
*  organization except in accordance with the terms and conditions of such an
*  agreement. All copies and reproductions shall be the property of Ittiam
*  under the  Indian Copyright Act as an unpublished work. Its use and
*  disclosure is limited by the terms and conditions of the licensing agreement
*  between Ittiam and Sony UK dated October 30, 2001 . It may not be copied or
*  otherwise reproduced or disclosed to persons outside the licensee's
*  organization except in accordance with the terms and conditions of the said
*  agreement.
*  Systems India Pvt. Ltd. and must bear this notice in its  entirety.
*
*  File Name      : app_video_decode.h
*
*  Description    : This file contains defination of various functions used by
*		application	and context structure used by decoder
*
*  Revision History:
*
*         29 05 2007   Rajneesh   First version of the code
*
******************************************************************************/

/*****************************************************************************/
/* Constant Macros                                                           */
/*****************************************************************************/









#define APP_NUMBER_FRAME_BUFFER		 1

#define MAX_WD_SUPPORTED			 1920
#define MAX_HT_SUPPORTED			 1088
#define MAX_BITRATE_SUPPORTED        (5*1024*1024)



#define MAX_BYTES_TO_SRCH_FRM_START  100






typedef enum {

    DECODER_ERROR       = -1,
    DECODER_SUCCESS     = 1

}DEC_CALL_STATUS_T;


typedef struct {

    it_mem_t    *ps_it_mem;
    it_file_t   *ps_ip_file;
    it_file_t   *ps_op_file;
    void        *pv_bs_buf;
    void        *pv_op_buf;
    void        *pv_dec_handel;
    UWORD16     u2_file_save_flag;
    UWORD16     e_file_save_type;   // since enum size depends on processor type
    UWORD32     u4_op_buf_len;
    UWORD32     u4_max_frm_ts;
	UWORD32		u4_bitstream_bufsize;
	WORD32 		chroma_format;
}vid_dec_ctx_t;



void read_cfg_file(vid_dec_ctx_t *ps_app_ctx,FILE *fp_cfg_file,
                   WORD8 *pu1_ip_file,
				   WORD8 *pu1_op_file,WORD8 *temp_folder);

void read_cfg_file_multi_inst(vid_dec_ctx_t *ps_app_ctx,FILE *fp_cfg_file,
                   WORD8 **pu1_ip_file,
				   WORD8 **pu1_op_file,
				   UWORD16 NUM_MULTI_INST);

UWORD32 fill_bs_buffer(it_file_t *ps_in_file,
                           UWORD32 u4_tot_bytes_decoded,
                           void *pv_bs_buf,UWORD32 u4_bs_buf_size);

void write_op_frm_to_file(void *pv_op_buf,
                            UWORD32 u4_op_buf_len
                            ,it_file_t *ps_op_file);


it_result_t mpeg4_dec_create(vid_dec_ctx_t *ps_app_ctx,
							 it_mem_t *ps_mem,
							 vid_dec_config_t *ps_config,
							 void** ppv_handle);

it_result_t mpeg4_dec_process(void   *pv_handle,
                              void    *pv_inp_buf,
                              size_t  u4_inp_len,
                              UWORD32  u4_inp_timestamp,
                              UWORD32 inp_flag,
                              void    *out_buf,
                              size_t  out_buf_len,
                              UWORD32 *inp_len_consumed,
                              IT_BOOL *out_present,
                              UWORD32  *out_len_produced,
                              UWORD32  *out_timestamp,
                              UWORD32 *out_flag);

it_result_t mpeg4_dec_destroy(void *pv_handle);




/*****************************************************************************/
/* Typedefs                                                                  */
/*****************************************************************************/


#define RETURN_ON_NOT_SUPPORTED_START_CODES  0
#define DECODE_FRM_AFTER_HDR                1


#define     MPEG4_DEC_ERROR             	  -1
#define     VERSION_NO                        5
#define		VERSION_CHAR_SIZE				  1







#define VERSION_NUMBER						"v1_0"
#define NUMBER_FRAME_BUFFER				      3
#define MAX_FRAME_BUFFERS                     7
#define MAX_WD_SUPPORTED					1920
#define MAX_HT_SUPPORTED					1088
#define MAX_BUFFER_SIZE						(5*1024*1024)

/* Output Write DMA Hooks */
#define ENABLE_WRITE_DMA_HOOKS                0

/* Reference Read DMA Hooks */
#define ENABLE_READ_DMA_HOOKS                 0



#define NO_OF_MEM_REC_CTX					  21
#define NO_OF_MEM_REC_ERROR					  1

#if ENABLE_WRITE_DMA_HOOKS
#define NO_OF_MEM_REC_OP_INT_BUF              1
#else
#define NO_OF_MEM_REC_OP_INT_BUF              0
#endif

#if ENABLE_READ_DMA_HOOKS
#define NO_OF_MEM_REC_REF_BLK_BUF             1
#else
#define NO_OF_MEM_REC_REF_BLK_BUF             0
#endif


#define NUMBER_OF_MEM_REC                     NO_OF_MEM_REC_CTX + NO_OF_MEM_REC_ERROR + NO_OF_MEM_REC_OP_INT_BUF + NO_OF_MEM_REC_REF_BLK_BUF

#define VERIFY_SCRATCH_USAGE				  0
#define DISP_ORDER							  1
#define CHAR_SIZE							  10


#endif

