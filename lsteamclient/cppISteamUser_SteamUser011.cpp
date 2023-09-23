#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamUser_SteamUser011.h"
HSteamUser cppISteamUser_SteamUser011_GetHSteamUser(void *linux_side)
{
    HSteamUser _ret;
    _ret = ((ISteamUser*)linux_side)->GetHSteamUser();
    return (_ret);
}

bool cppISteamUser_SteamUser011_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BLoggedOn();
    return (_ret);
}

CSteamID cppISteamUser_SteamUser011_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamUser*)linux_side)->GetSteamID();
    return (_ret);
}

int cppISteamUser_SteamUser011_InitiateGameConnection(void *linux_side, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
    return (_ret);
}

void cppISteamUser_SteamUser011_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser011_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

bool cppISteamUser_SteamUser011_GetUserDataFolder(void *linux_side, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetUserDataFolder((char *)pchBuffer, (int)cubBuffer);
    return (_ret);
}

void cppISteamUser_SteamUser011_StartVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StartVoiceRecording();
}

void cppISteamUser_SteamUser011_StopVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StopVoiceRecording();
}

EVoiceResult cppISteamUser_SteamUser011_GetCompressedVoice(void *linux_side, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->GetCompressedVoice((void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten);
    return (_ret);
}

EVoiceResult cppISteamUser_SteamUser011_DecompressVoice(void *linux_side, void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->DecompressVoice((void *)pCompressed, (uint32)cbCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
