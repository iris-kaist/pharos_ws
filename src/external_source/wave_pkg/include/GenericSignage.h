/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_GenericSignage_H_
#define	_GenericSignage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ITIScodes.h"
#include "ITIStextPhrase.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GenericSignage__Member__item_PR {
	GenericSignage__Member__item_PR_NOTHING,	/* No components present */
	GenericSignage__Member__item_PR_itis,
	GenericSignage__Member__item_PR_text
} GenericSignage__Member__item_PR;

/* Forward definitions */
typedef struct GenericSignage__Member {
	struct GenericSignage__Member__item {
		GenericSignage__Member__item_PR present;
		union {
			ITIScodes_t	 itis;
			ITIStextPhrase_t	 text;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} item;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GenericSignage__Member;

/* GenericSignage */
typedef struct GenericSignage {
	A_SEQUENCE_OF(GenericSignage__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GenericSignage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GenericSignage;
extern asn_SET_OF_specifics_t asn_SPC_GenericSignage_specs_1;
extern asn_TYPE_member_t asn_MBR_GenericSignage_1[1];
extern asn_per_constraints_t asn_PER_type_GenericSignage_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GenericSignage_H_ */
#include <asn_internal.h>
