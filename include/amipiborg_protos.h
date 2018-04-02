
#ifndef __APB_PROTOS_H__
#define __APB_PROTOS_H__


#define APB_LibName "amipiborg.library"
#define APB_LibVersion 1
#define APB_LibRevision 0
#define APB_VersionStr "1.0 (18/03/2017)"


APTR __asm __saveds APB_AllocConnection(
	register __a0 struct MsgPort *port,
    register __d0 UWORD handlerId, 
	register __a1 APTR memoryPool);

VOID __asm __saveds APB_FreeConnection(
	register __a0 APTR connection);

BOOL __asm __saveds APB_OpenConnection(
	register __a0 APTR connection);

VOID __asm __saveds APB_CloseConnection(
	register __a0 APTR connection);

UWORD __asm __saveds APB_ConnectionState(
	register __a0 APTR connection);


struct APBRequest * __asm __saveds APB_AllocRequest(
	register __a0 APTR connection);

VOID __asm __saveds APB_FreeRequest(
	register __a0 struct APBRequest *request);


VOID __asm __saveds APB_Read(
	register __a0 struct APBRequest *request);

VOID __asm __saveds APB_Write(
	register __a0 struct APBRequest *request);

VOID __asm __saveds APB_Abort(
	register __a0 struct APBRequest *request);

#endif // __APB_PROTOS_H__
