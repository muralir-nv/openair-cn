/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#ifndef	_S1ap_DL_Forwarding_H_
#define	_S1ap_DL_Forwarding_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_DL_Forwarding {
	S1ap_DL_Forwarding_dL_Forwarding_proposed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_DL_Forwarding;

/* S1ap-DL-Forwarding */
typedef long	 S1ap_DL_Forwarding_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_DL_Forwarding;
asn_struct_free_f S1ap_DL_Forwarding_free;
asn_struct_print_f S1ap_DL_Forwarding_print;
asn_constr_check_f S1ap_DL_Forwarding_constraint;
ber_type_decoder_f S1ap_DL_Forwarding_decode_ber;
der_type_encoder_f S1ap_DL_Forwarding_encode_der;
xer_type_decoder_f S1ap_DL_Forwarding_decode_xer;
xer_type_encoder_f S1ap_DL_Forwarding_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_DL_Forwarding_H_ */
#include <asn_internal.h>
