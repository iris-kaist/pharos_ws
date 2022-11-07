/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO14827-2"
 * 	found in "../asn1c/J2735_201603DA+ITSK4-0.4_fix.update"
 * 	`asn1c -no-gen-example -fcompound-names -funnamed-unions -pdu=MessageFrame`
 */

#include "Subscription.h"

static int
datexSubscribe_Serial_nbr_2_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_datexSubscribe_Serial_nbr_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static asn_oer_constraints_t asn_OER_type_datexSubscribe_Serial_nbr_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_type_datexSubscribe_Serial_nbr_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_datexSubscribe_Serial_nbr_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_memb_datexSubscribe_Serial_nbr_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_datexSubscribe_Serial_nbr_specs_2 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_datexSubscribe_Serial_nbr_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_datexSubscribe_Serial_nbr_2 = {
	"datexSubscribe-Serial-nbr",
	"datexSubscribe-Serial-nbr",
	&asn_OP_NativeInteger,
	asn_DEF_datexSubscribe_Serial_nbr_tags_2,
	sizeof(asn_DEF_datexSubscribe_Serial_nbr_tags_2)
		/sizeof(asn_DEF_datexSubscribe_Serial_nbr_tags_2[0]) - 1, /* 1 */
	asn_DEF_datexSubscribe_Serial_nbr_tags_2,	/* Same as above */
	sizeof(asn_DEF_datexSubscribe_Serial_nbr_tags_2)
		/sizeof(asn_DEF_datexSubscribe_Serial_nbr_tags_2[0]), /* 2 */
	{ &asn_OER_type_datexSubscribe_Serial_nbr_constr_2, &asn_PER_type_datexSubscribe_Serial_nbr_constr_2, datexSubscribe_Serial_nbr_2_constraint },
	0, 0,	/* No members */
	&asn_SPC_datexSubscribe_Serial_nbr_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Subscription_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Subscription, datexSubscribe_Serial_nbr),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_datexSubscribe_Serial_nbr_2,
		0,
		{ &asn_OER_memb_datexSubscribe_Serial_nbr_constr_2, &asn_PER_memb_datexSubscribe_Serial_nbr_constr_2,  memb_datexSubscribe_Serial_nbr_constraint_1 },
		0, 0, /* No default value */
		"datexSubscribe-Serial-nbr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Subscription, datexSubscribe_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SubscriptionType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"datexSubscribe-Type"
		},
};
static const ber_tlv_tag_t asn_DEF_Subscription_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Subscription_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* datexSubscribe-Serial-nbr */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* datexSubscribe-Type */
};
asn_SEQUENCE_specifics_t asn_SPC_Subscription_specs_1 = {
	sizeof(struct Subscription),
	offsetof(struct Subscription, _asn_ctx),
	asn_MAP_Subscription_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Subscription = {
	"Subscription",
	"Subscription",
	&asn_OP_SEQUENCE,
	asn_DEF_Subscription_tags_1,
	sizeof(asn_DEF_Subscription_tags_1)
		/sizeof(asn_DEF_Subscription_tags_1[0]), /* 1 */
	asn_DEF_Subscription_tags_1,	/* Same as above */
	sizeof(asn_DEF_Subscription_tags_1)
		/sizeof(asn_DEF_Subscription_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Subscription_1,
	2,	/* Elements count */
	&asn_SPC_Subscription_specs_1	/* Additional specs */
};

