/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_PreemptPriorityList_H_
#define	_PreemptPriorityList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignalControlZone;

/* PreemptPriorityList */
typedef struct PreemptPriorityList {
	A_SEQUENCE_OF(struct SignalControlZone) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreemptPriorityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreemptPriorityList;
extern asn_SET_OF_specifics_t asn_SPC_PreemptPriorityList_specs_1;
extern asn_TYPE_member_t asn_MBR_PreemptPriorityList_1[1];
extern asn_per_constraints_t asn_PER_type_PreemptPriorityList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignalControlZone.h"

#endif	/* _PreemptPriorityList_H_ */
#include <asn_internal.h>
