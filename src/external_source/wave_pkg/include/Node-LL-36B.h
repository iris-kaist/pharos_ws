/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_Node_LL_36B_H_
#define	_Node_LL_36B_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OffsetLL-B18.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Node-LL-36B */
typedef struct Node_LL_36B {
	OffsetLL_B18_t	 lon;
	OffsetLL_B18_t	 lat;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_LL_36B_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node_LL_36B;
extern asn_SEQUENCE_specifics_t asn_SPC_Node_LL_36B_specs_1;
extern asn_TYPE_member_t asn_MBR_Node_LL_36B_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Node_LL_36B_H_ */
#include <asn_internal.h>
