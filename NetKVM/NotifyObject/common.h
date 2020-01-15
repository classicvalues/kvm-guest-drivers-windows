/*
 * Copyright (C) Microsoft Corporation, 1992-2001.
 * Copyright (c) 2020 Oracle and/or its affiliates.
 *
 * Author:     Alok Sinha
 *             Annie Li     Reworked for 2-netdev SRIOV live migration
 */

#ifndef COMMON_H_INCLUDED

#define COMMON_H_INCLUDED

#include <devguid.h>
#include <strsafe.h>

#define celems(_x)          (sizeof(_x) / sizeof(_x[0]))

#define     MAX_VIRTUAL_MP_PER_ADAPTER      64

enum ConfigAction {

    eActUnknown, 
    eActInstall, 
    eActAdd, 
    eActRemove,
    eActUpdate,
    eActPropertyUIAdd,
    eActPropertyUIRemove
};       

//
// PnP ID, also referred to as Hardware ID, of the protocol interface.
//

const WCHAR c_szMuxProtocol[] = L"ms_muxp";

//
// PnP ID, also referred to as Hardware ID, of the Miniport interface.
//

const WCHAR c_szMuxMiniport[] = L"ms_muxmp";

//
// Name of the service as specified in the inf file in AddService directive.
//

const WCHAR c_szMuxService[] = L"muxp";

//
// Path to the config string where the virtual miniport instance names
// are stored.
//

const WCHAR c_szAdapterList[] =
                  L"System\\CurrentControlSet\\Services\\muxp\\Parameters\\Adapters";

//
// Value name in the registry where miniport device id is stored.
//

const WCHAR c_szUpperBindings[] = L"UpperBindings";


const WCHAR c_szDevicePrefix[] = L"\\Device\\";

#define ReleaseObj( x )  if ( x ) \
                            ((IUnknown*)(x))->Release();


#if DBG
void TraceMsg ( _In_ LPWSTR szFormat, ...);
#else
#define TraceMsg
#endif

#endif // COMMON_H_INCLUDED
