/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_SpeedLimitType_H_
#define	_SpeedLimitType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedLimitType {
	SpeedLimitType_unknown	= 0,
	SpeedLimitType_maxSpeedInSchoolZone	= 1,
	SpeedLimitType_maxSpeedInSchoolZoneWhenChildrenArePresent	= 2,
	SpeedLimitType_maxSpeedInConstructionZone	= 3,
	SpeedLimitType_vehicleMinSpeed	= 4,
	SpeedLimitType_vehicleMaxSpeed	= 5,
	SpeedLimitType_vehicleNightMaxSpeed	= 6,
	SpeedLimitType_truckMinSpeed	= 7,
	SpeedLimitType_truckMaxSpeed	= 8,
	SpeedLimitType_truckNightMaxSpeed	= 9,
	SpeedLimitType_vehiclesWithTrailersMinSpeed	= 10,
	SpeedLimitType_vehiclesWithTrailersMaxSpeed	= 11,
	SpeedLimitType_vehiclesWithTrailersNightMaxSpeed	= 12
	/*
	 * Enumeration is extensible
	 */
} e_SpeedLimitType;

/* SpeedLimitType */
typedef long	 SpeedLimitType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedLimitType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedLimitType;
extern const asn_INTEGER_specifics_t asn_SPC_SpeedLimitType_specs_1;
asn_struct_free_f SpeedLimitType_free;
asn_struct_print_f SpeedLimitType_print;
asn_constr_check_f SpeedLimitType_constraint;
ber_type_decoder_f SpeedLimitType_decode_ber;
der_type_encoder_f SpeedLimitType_encode_der;
xer_type_decoder_f SpeedLimitType_decode_xer;
xer_type_encoder_f SpeedLimitType_encode_xer;
oer_type_decoder_f SpeedLimitType_decode_oer;
oer_type_encoder_f SpeedLimitType_encode_oer;
per_type_decoder_f SpeedLimitType_decode_uper;
per_type_encoder_f SpeedLimitType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedLimitType_H_ */
#include <asn_internal.h>
