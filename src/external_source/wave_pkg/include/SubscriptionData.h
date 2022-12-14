/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO14827-2"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_SubscriptionData_H_
#define	_SubscriptionData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include "SubscriptionMode.h"
#include <NativeInteger.h>
#include "MessageFrame.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubscriptionData__datexSubscribe_Status_cd {
	SubscriptionData__datexSubscribe_Status_cd_new	= 0,
	SubscriptionData__datexSubscribe_Status_cd_update	= 1
} e_SubscriptionData__datexSubscribe_Status_cd;
typedef enum SubscriptionData__datexSubscribe_PublishFormat_cd {
	SubscriptionData__datexSubscribe_PublishFormat_cd_other	= 0,
	SubscriptionData__datexSubscribe_PublishFormat_cd_ftp	= 1,
	SubscriptionData__datexSubscribe_PublishFormat_cd_tftp	= 2,
	SubscriptionData__datexSubscribe_PublishFormat_cd_dataPacket	= 3
	/*
	 * Enumeration is extensible
	 */
} e_SubscriptionData__datexSubscribe_PublishFormat_cd;

/* SubscriptionData */
typedef struct SubscriptionData {
	BOOLEAN_t	 datexSubscribe_Persistent_bool;
	long	 datexSubscribe_Status_cd;
	SubscriptionMode_t	 datexSubscribe_Mode;
	long	 datexSubscribe_PublishFormat_cd;
	long	 datexSubscription_Priority_nbr;
	BOOLEAN_t	 datexSubscribe_Guarantee_bool;
	MessageFrame_t	 datexSubscribe_Pdu;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubscriptionData_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_datexSubscribe_Status_cd_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_datexSubscribe_PublishFormat_cd_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SubscriptionData;
extern asn_SEQUENCE_specifics_t asn_SPC_SubscriptionData_specs_1;
extern asn_TYPE_member_t asn_MBR_SubscriptionData_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SubscriptionData_H_ */
#include <asn_internal.h>
