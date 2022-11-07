/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#ifndef	_ConfidenceSet_H_
#define	_ConfidenceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeConfidence.h"
#include "SteeringWheelAngleConfidence.h"
#include "HeadingConfidence.h"
#include "ThrottleConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccelSteerYawRateConfidence;
struct SpeedandHeadingandThrottleConfidence;
struct PositionConfidenceSet;

/* ConfidenceSet */
typedef struct ConfidenceSet {
	struct AccelSteerYawRateConfidence	*accelConfidence	/* OPTIONAL */;
	struct SpeedandHeadingandThrottleConfidence	*speedConfidence	/* OPTIONAL */;
	TimeConfidence_t	*timeConfidence	/* OPTIONAL */;
	struct PositionConfidenceSet	*posConfidence	/* OPTIONAL */;
	SteeringWheelAngleConfidence_t	*steerConfidence	/* OPTIONAL */;
	HeadingConfidence_t	*headingConfidence	/* OPTIONAL */;
	ThrottleConfidence_t	*throttleConfidence	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfidenceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfidenceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_ConfidenceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_ConfidenceSet_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccelSteerYawRateConfidence.h"
#include "SpeedandHeadingandThrottleConfidence.h"
#include "PositionConfidenceSet.h"

#endif	/* _ConfidenceSet_H_ */
#include <asn_internal.h>
