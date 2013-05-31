LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ittiam_avc_decoder
LOCAL_SRC_FILES := h264_dec_lib.a

include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE := ittiam_m4v_decoder
LOCAL_SRC_FILES := mpeg4_asp_dec_lib.a

include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE := ittiam_decoder_utils
LOCAL_SRC_FILES := sys_utils.a

include $(PREBUILT_STATIC_LIBRARY)


