/**
*  @defgroup kernel_api
*
*
*  @{
*/
/** @} */

/**
	@defgroup SrvManager
	@ingroup kernel_api
	
	�ں˱�̽ӿ� ϵͳ����

	@{
*/
#ifndef KE_SRV_H
#define KE_SRV_H

#define KE_SRV_MAX 16
#define KE_SRV_GET_FID(ID)				((ID) & 0xffffff)
#define KE_SRV_MAKE_REQ_NUM(BASE, ID)	((((BASE) & (KE_SRV_MAX - 1)) << 24) | KE_SRV_GET_FID(ID))

typedef unsigned long ke_handle;
typedef unsigned long KERNEL_STATUS;
#define KE_INVALID_HANDLE (-1UL)
#define KE_SUCCESS			0

/**
	@brief Common request package
*/
struct sysreq_common
{
	unsigned long req_id;
};
#endif
/** @} */