#ifndef CREATEPROCESSASYNC_H
#define CREATEPROCESSASYNC_H

typedef void* HANDLE;
typedef struct _TP_WORK TP_WORK, *PTP_WORK;
typedef struct _TP_CALLBACK_INSTANCE TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE;

void CreateProcessAsync(
    PTP_CALLBACK_INSTANCE Instance,
    HANDLE ClientHandle,
    PTP_WORK Work);

#endif //CREATEPROCESSASYNC_H
