#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_129a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_129a
#include "struct_converters.h"
#include "cppISteamClient_SteamClient014.h"

struct cppISteamClient_SteamClient014
{
#ifdef __cplusplus
    virtual int32_t CreateSteamPipe(  ) = 0;
    virtual bool BReleaseSteamPipe( int32_t ) = 0;
    virtual int32_t ConnectToGlobalUser( int32_t ) = 0;
    virtual int32_t CreateLocalUser( int32_t *, uint32_t ) = 0;
    virtual void ReleaseUser( int32_t, int32_t ) = 0;
    virtual void /*ISteamUser*/ * GetISteamUser( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServer*/ * GetISteamGameServer( int32_t, int32_t, const char * ) = 0;
    virtual void SetLocalIPBinding( uint32_t, uint16_t ) = 0;
    virtual void /*ISteamFriends*/ * GetISteamFriends( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUtils*/ * GetISteamUtils( int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmaking*/ * GetISteamMatchmaking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMatchmakingServers*/ * GetISteamMatchmakingServers( int32_t, int32_t, const char * ) = 0;
    virtual void * GetISteamGenericInterface( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUserStats*/ * GetISteamUserStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamGameServerStats*/ * GetISteamGameServerStats( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamApps*/ * GetISteamApps( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamNetworking*/ * GetISteamNetworking( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamRemoteStorage*/ * GetISteamRemoteStorage( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamScreenshots*/ * GetISteamScreenshots( int32_t, int32_t, const char * ) = 0;
    virtual void RunFrame(  ) = 0;
    virtual uint32_t GetIPCCallCount(  ) = 0;
    virtual void SetWarningMessageHook( void (*)(int32_t, const char *) ) = 0;
    virtual bool BShutdownIfAllPipesClosed(  ) = 0;
    virtual void /*ISteamHTTP*/ * GetISteamHTTP( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUnifiedMessages*/ * GetISteamUnifiedMessages( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamController*/ * GetISteamController( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamUGC*/ * GetISteamUGC( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamAppList*/ * GetISteamAppList( int32_t, int32_t, const char * ) = 0;
    virtual void /*ISteamMusic*/ * GetISteamMusic( int32_t, int32_t, const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamClient_SteamClient014_CreateSteamPipe( struct cppISteamClient_SteamClient014_CreateSteamPipe_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateSteamPipe(  );
    params->_ret = after_steam_pipe_create( params->_ret );
}

void cppISteamClient_SteamClient014_BReleaseSteamPipe( struct cppISteamClient_SteamClient014_BReleaseSteamPipe_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
}

void cppISteamClient_SteamClient014_ConnectToGlobalUser( struct cppISteamClient_SteamClient014_ConnectToGlobalUser_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
}

void cppISteamClient_SteamClient014_CreateLocalUser( struct cppISteamClient_SteamClient014_CreateLocalUser_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
}

void cppISteamClient_SteamClient014_ReleaseUser( struct cppISteamClient_SteamClient014_ReleaseUser_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
}

void cppISteamClient_SteamClient014_GetISteamUser( struct cppISteamClient_SteamClient014_GetISteamUser_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGameServer( struct cppISteamClient_SteamClient014_GetISteamGameServer_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_SetLocalIPBinding( struct cppISteamClient_SteamClient014_SetLocalIPBinding_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
}

void cppISteamClient_SteamClient014_GetISteamFriends( struct cppISteamClient_SteamClient014_GetISteamFriends_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUtils( struct cppISteamClient_SteamClient014_GetISteamUtils_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMatchmaking( struct cppISteamClient_SteamClient014_GetISteamMatchmaking_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient014_GetISteamMatchmakingServers_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGenericInterface( struct cppISteamClient_SteamClient014_GetISteamGenericInterface_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUserStats( struct cppISteamClient_SteamClient014_GetISteamUserStats_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamGameServerStats( struct cppISteamClient_SteamClient014_GetISteamGameServerStats_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamApps( struct cppISteamClient_SteamClient014_GetISteamApps_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamNetworking( struct cppISteamClient_SteamClient014_GetISteamNetworking_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamRemoteStorage( struct cppISteamClient_SteamClient014_GetISteamRemoteStorage_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamScreenshots( struct cppISteamClient_SteamClient014_GetISteamScreenshots_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_RunFrame( struct cppISteamClient_SteamClient014_RunFrame_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamClient_SteamClient014_GetIPCCallCount( struct cppISteamClient_SteamClient014_GetIPCCallCount_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamClient_SteamClient014_SetWarningMessageHook( struct cppISteamClient_SteamClient014_SetWarningMessageHook_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    void (*lin_pFunction)(int32_t, const char *) = (void (*)(int32_t, const char *))manual_convert_SteamAPIWarningMessageHook_t( (void *)params->pFunction );
    iface->SetWarningMessageHook( lin_pFunction );
}

void cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed( struct cppISteamClient_SteamClient014_BShutdownIfAllPipesClosed_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    params->_ret = after_shutdown( params->_ret );
}

void cppISteamClient_SteamClient014_GetISteamHTTP( struct cppISteamClient_SteamClient014_GetISteamHTTP_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUnifiedMessages( struct cppISteamClient_SteamClient014_GetISteamUnifiedMessages_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamController( struct cppISteamClient_SteamClient014_GetISteamController_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamUGC( struct cppISteamClient_SteamClient014_GetISteamUGC_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamAppList( struct cppISteamClient_SteamClient014_GetISteamAppList_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
}

void cppISteamClient_SteamClient014_GetISteamMusic( struct cppISteamClient_SteamClient014_GetISteamMusic_params *params )
{
    struct cppISteamClient_SteamClient014 *iface = (struct cppISteamClient_SteamClient014 *)params->linux_side;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
}

#ifdef __cplusplus
}
#endif
