/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingUtils_SteamNetworkingUtils001.h"

typedef struct __winISteamNetworkingUtils_SteamNetworkingUtils001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingUtils_SteamNetworkingUtils001;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils001_destructor, 4)

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation(_this->linux_side, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations(_this->linux_side, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost(_this->linux_side, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString(_this->linux_side, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString(_this->linux_side, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate(_this->linux_side, flMaxAgeSeconds);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress(_this->linux_side);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter(_this->linux_side, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP(_this->linux_side, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount(_this->linux_side);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList(_this->linux_side, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction(_this->linux_side, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo(_this->linux_side, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString(_this->linux_side, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString(_this->linux_side, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString(_this->linux_side, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString(_this->linux_side, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils001_destructor(winISteamNetworkingUtils_SteamNetworkingUtils001 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils001,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_IsPingMeasurementInProgress)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils001_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingUtils_SteamNetworkingUtils001 *create_winISteamNetworkingUtils_SteamNetworkingUtils001(void *linux_side)
{
    winISteamNetworkingUtils_SteamNetworkingUtils001 *r = alloc_mem_for_iface(sizeof(winISteamNetworkingUtils_SteamNetworkingUtils001), "SteamNetworkingUtils001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils001_vtable, 22, "SteamNetworkingUtils001");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils002.h"

typedef struct __winISteamNetworkingUtils_SteamNetworkingUtils002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingUtils_SteamNetworkingUtils002;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils002_destructor, 4)

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus(_this->linux_side, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation(_this->linux_side, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations(_this->linux_side, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost(_this->linux_side, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString(_this->linux_side, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString(_this->linux_side, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate(_this->linux_side, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter(_this->linux_side, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP(_this->linux_side, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount(_this->linux_side);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList(_this->linux_side, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction(_this->linux_side, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo(_this->linux_side, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString(_this->linux_side, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString(_this->linux_side, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString(_this->linux_side, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString(_this->linux_side, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils002_destructor(winISteamNetworkingUtils_SteamNetworkingUtils002 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils002,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils002_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingUtils_SteamNetworkingUtils002 *create_winISteamNetworkingUtils_SteamNetworkingUtils002(void *linux_side)
{
    winISteamNetworkingUtils_SteamNetworkingUtils002 *r = alloc_mem_for_iface(sizeof(winISteamNetworkingUtils_SteamNetworkingUtils002), "SteamNetworkingUtils002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils002_vtable, 22, "SteamNetworkingUtils002");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils003.h"

typedef struct __winISteamNetworkingUtils_SteamNetworkingUtils003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingUtils_SteamNetworkingUtils003;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils003_destructor, 4)

SteamNetworkingMessage_t * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, int cbAllocateBuffer)
{
    SteamNetworkingMessage_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage(_this->linux_side, cbAllocateBuffer);
    return _ret;
}

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus(_this->linux_side, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation(_this->linux_side, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations(_this->linux_side, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost(_this->linux_side, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString(_this->linux_side, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString(_this->linux_side, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate(_this->linux_side, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter(_this->linux_side, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP(_this->linux_side, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount(_this->linux_side);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList(_this->linux_side, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction(_this->linux_side, eDetailLevel, pfnFunc);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo(_this->linux_side, eValue, pOutName, pOutDataType, pOutScope, pOutNextValue);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString(_this->linux_side, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString(_this->linux_side, pAddr, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString(_this->linux_side, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString(_this->linux_side, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils003_destructor(winISteamNetworkingUtils_SteamNetworkingUtils003 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils003,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_AllocateMessage)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_GetFirstConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils003_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingUtils_SteamNetworkingUtils003 *create_winISteamNetworkingUtils_SteamNetworkingUtils003(void *linux_side)
{
    winISteamNetworkingUtils_SteamNetworkingUtils003 *r = alloc_mem_for_iface(sizeof(winISteamNetworkingUtils_SteamNetworkingUtils003), "SteamNetworkingUtils003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils003_vtable, 23, "SteamNetworkingUtils003");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamNetworkingUtils_SteamNetworkingUtils004.h"

typedef struct __winISteamNetworkingUtils_SteamNetworkingUtils004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamNetworkingUtils_SteamNetworkingUtils004;

DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue, 28)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString, 20)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType, 8)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingUtils_SteamNetworkingUtils004_destructor, 4)

SteamNetworkingMessage_t * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, int cbAllocateBuffer)
{
    SteamNetworkingMessage_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(_this->linux_side, cbAllocateBuffer);
    return _ret;
}

ESteamNetworkingAvailability __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamRelayNetworkStatus_t *pDetails)
{
    ESteamNetworkingAvailability _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(_this->linux_side, pDetails);
    return _ret;
}

float __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkPingLocation_t *result)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(_this->linux_side, result);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(_this->linux_side, location1, location2);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkPingLocation_t *remoteLocation)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(_this->linux_side, remoteLocation);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(_this->linux_side, location, pszBuf, cchBufSize);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const char *pszString, SteamNetworkPingLocation_t *result)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(_this->linux_side, pszString, result);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, float flMaxAgeSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(_this->linux_side, flMaxAgeSeconds);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(_this->linux_side, popID, pViaRelayPoP);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkingPOPID popID)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(_this->linux_side, popID);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(_this->linux_side);
    return _ret;
}

int __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkingPOPID *list, int nListSz)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(_this->linux_side, list, nListSz);
    return _ret;
}

SteamNetworkingMicroseconds __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this)
{
    SteamNetworkingMicroseconds _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(_this->linux_side);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(_this->linux_side, eDetailLevel, pfnFunc);
}

ESteamNetworkingFakeIPType __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, uint32 nIPv4)
{
    ESteamNetworkingFakeIPType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(_this->linux_side, nIPv4);
    return _ret;
}

EResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity *pOutRealIdentity)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(_this->linux_side, fakeIP, pOutRealIdentity);
    return _ret;
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType eDataType, const void *pArg)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, eDataType, pArg);
    return _ret;
}

ESteamNetworkingGetConfigValueResult __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj, ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult)
{
    ESteamNetworkingGetConfigValueResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(_this->linux_side, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
    return _ret;
}

const char * __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(_this->linux_side, eValue, pOutDataType, pOutScope);
    return _ret;
}

ESteamNetworkingConfigValue __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, ESteamNetworkingConfigValue eCurrent, bool bEnumerateDevVars)
{
    ESteamNetworkingConfigValue _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(_this->linux_side, eCurrent, bEnumerateDevVars);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(_this->linux_side, addr, buf, cbBuf, bWithPort);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkingIPAddr *pAddr, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(_this->linux_side, pAddr, pszStr);
    return _ret;
}

ESteamNetworkingFakeIPType __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkingIPAddr *addr)
{
    ESteamNetworkingFakeIPType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(_this->linux_side, addr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf)
{
    TRACE("%p\n", _this);
    cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(_this->linux_side, identity, buf, cbBuf);
}

bool __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this, SteamNetworkingIdentity *pIdentity, const char *pszStr)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(_this->linux_side, pIdentity, pszStr);
    return _ret;
}

void __thiscall winISteamNetworkingUtils_SteamNetworkingUtils004_destructor(winISteamNetworkingUtils_SteamNetworkingUtils004 *_this)
{/* never called */}

extern vtable_ptr winISteamNetworkingUtils_SteamNetworkingUtils004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingUtils_SteamNetworkingUtils004,
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString)
        VTABLE_ADD_FUNC(winISteamNetworkingUtils_SteamNetworkingUtils004_destructor)
    );
#ifndef __GNUC__
}
#endif

winISteamNetworkingUtils_SteamNetworkingUtils004 *create_winISteamNetworkingUtils_SteamNetworkingUtils004(void *linux_side)
{
    winISteamNetworkingUtils_SteamNetworkingUtils004 *r = alloc_mem_for_iface(sizeof(winISteamNetworkingUtils_SteamNetworkingUtils004), "SteamNetworkingUtils004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingUtils_SteamNetworkingUtils004_vtable, 26, "SteamNetworkingUtils004");
    r->linux_side = linux_side;
    return r;
}

