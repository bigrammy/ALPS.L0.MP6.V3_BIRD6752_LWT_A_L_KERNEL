#ifndef __GED_ERROR_H__
#define __GED_ERROR_H__

typedef enum GED_ERROR_TAG
{
	GED_OK,
    GED_ERROR_FAIL,
    GED_ERROR_OOM,
    GED_ERROR_OUT_OF_FD,
    GED_ERROR_FAIL_WITH_LIMIT,
    GED_ERROR_TIMEOUT,
    GED_ERROR_CMD_NOT_PROCESSED,
    GED_ERROR_INVALID_PARAMS
} GED_ERROR;


#endif
