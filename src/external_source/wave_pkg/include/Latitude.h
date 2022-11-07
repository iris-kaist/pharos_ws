/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_Latitude_H_
#define	_Latitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Latitude */
typedef long	 Latitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Latitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Latitude;
asn_struct_free_f Latitude_free;
asn_struct_print_f Latitude_print;
asn_constr_check_f Latitude_constraint;
ber_type_decoder_f Latitude_decode_ber;
der_type_encoder_f Latitude_encode_der;
xer_type_decoder_f Latitude_decode_xer;
xer_type_encoder_f Latitude_encode_xer;
oer_type_decoder_f Latitude_decode_oer;
oer_type_encoder_f Latitude_encode_oer;
per_type_decoder_f Latitude_decode_uper;
per_type_encoder_f Latitude_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Latitude_H_ */
#include <asn_internal.h>
