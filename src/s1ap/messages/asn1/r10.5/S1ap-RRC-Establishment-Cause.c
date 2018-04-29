/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-RRC-Establishment-Cause.h"

int
S1ap_RRC_Establishment_Cause_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
S1ap_RRC_Establishment_Cause_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
S1ap_RRC_Establishment_Cause_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
S1ap_RRC_Establishment_Cause_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
S1ap_RRC_Establishment_Cause_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
S1ap_RRC_Establishment_Cause_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
S1ap_RRC_Establishment_Cause_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_RRC_Establishment_Cause_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_S1ap_RRC_Establishment_Cause_value2enum_1[] = {
	{ 0,	9,	"emergency" },
	{ 1,	18,	"highPriorityAccess" },
	{ 2,	9,	"mt-Access" },
	{ 3,	13,	"mo-Signalling" },
	{ 4,	7,	"mo-Data" },
	{ 5,	20,	"delay-TolerantAccess" }
	/* This list is extensible */
};
static unsigned int asn_MAP_S1ap_RRC_Establishment_Cause_enum2value_1[] = {
	5,	/* delay-TolerantAccess(5) */
	0,	/* emergency(0) */
	1,	/* highPriorityAccess(1) */
	4,	/* mo-Data(4) */
	3,	/* mo-Signalling(3) */
	2	/* mt-Access(2) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_S1ap_RRC_Establishment_Cause_specs_1 = {
	asn_MAP_S1ap_RRC_Establishment_Cause_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1ap_RRC_Establishment_Cause_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_S1ap_RRC_Establishment_Cause_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1ap_RRC_Establishment_Cause = {
	"S1ap-RRC-Establishment-Cause",
	"S1ap-RRC-Establishment-Cause",
	S1ap_RRC_Establishment_Cause_free,
	S1ap_RRC_Establishment_Cause_print,
	S1ap_RRC_Establishment_Cause_constraint,
	S1ap_RRC_Establishment_Cause_decode_ber,
	S1ap_RRC_Establishment_Cause_encode_der,
	S1ap_RRC_Establishment_Cause_decode_xer,
	S1ap_RRC_Establishment_Cause_encode_xer,
	0, 0,	/* No UPER support, use "-gen-PER" to enable */
	0, 0,	/* No APER support, use "-gen-PER" to enable */
	S1ap_RRC_Establishment_Cause_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_RRC_Establishment_Cause_tags_1,
	sizeof(asn_DEF_S1ap_RRC_Establishment_Cause_tags_1)
		/sizeof(asn_DEF_S1ap_RRC_Establishment_Cause_tags_1[0]), /* 1 */
	asn_DEF_S1ap_RRC_Establishment_Cause_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_RRC_Establishment_Cause_tags_1)
		/sizeof(asn_DEF_S1ap_RRC_Establishment_Cause_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1ap_RRC_Establishment_Cause_specs_1	/* Additional specs */
};

