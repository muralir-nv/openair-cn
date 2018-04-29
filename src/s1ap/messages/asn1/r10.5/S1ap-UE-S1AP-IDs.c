/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-UE-S1AP-IDs.h"

static asn_TYPE_member_t asn_MBR_S1ap_UE_S1AP_IDs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UE_S1AP_IDs, choice.uE_S1AP_ID_pair),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_UE_S1AP_ID_pair,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uE-S1AP-ID-pair"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UE_S1AP_IDs, choice.mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_MME_UE_S1AP_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mME-UE-S1AP-ID"
		},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_UE_S1AP_IDs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uE-S1AP-ID-pair at 1337 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mME-UE-S1AP-ID at 1338 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_UE_S1AP_IDs_specs_1 = {
	sizeof(struct S1ap_UE_S1AP_IDs),
	offsetof(struct S1ap_UE_S1AP_IDs, _asn_ctx),
	offsetof(struct S1ap_UE_S1AP_IDs, present),
	sizeof(((struct S1ap_UE_S1AP_IDs *)0)->present),
	asn_MAP_S1ap_UE_S1AP_IDs_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UE_S1AP_IDs = {
	"S1ap-UE-S1AP-IDs",
	"S1ap-UE-S1AP-IDs",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No UPER support, use "-gen-PER" to enable */
	0, 0,	/* No APER support, use "-gen-PER" to enable */
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_UE_S1AP_IDs_1,
	2,	/* Elements count */
	&asn_SPC_S1ap_UE_S1AP_IDs_specs_1	/* Additional specs */
};

