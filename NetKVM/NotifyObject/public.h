/*
 * Copyright (c) 1990-2000    Microsoft Corporation All Rights Reserved
 * Copyright (c) 2020 Oracle and/or its affiliates.
 */

#ifndef __PUBLIC_H
#define __PUBLIC_H

//
// To support ioctls from user-mode:
//

#define LINKNAME_STRING     L"\\DosDevices\\Mux"
#define NTDEVICE_STRING     L"\\Device\\Mux"

#define  MUX_CUSTOM_EVENT      1

#define NOTIFY_SIGNATURE       0xAFCDABAB

typedef struct _NOTIFY_CUSTOM_EVENT {
  ULONG           uSignature;
  ULONG           uEvent;
  WCHAR           szMiniport[1];
} NOTIFY_CUSTOM_EVENT, *PNOTIFY_CUSTOM_EVENT;
#endif


