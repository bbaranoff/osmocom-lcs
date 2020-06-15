/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ErrorCodes_H_
#define	_ErrorCodes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ErrorCodes {
	ErrorCodes_unDefined	= 0,
	ErrorCodes_missingComponet	= 1,
	ErrorCodes_incorrectData	= 2,
	ErrorCodes_missingIEorComponentElement	= 3,
	ErrorCodes_messageTooShort	= 4,
	ErrorCodes_unknowReferenceNumber	= 5
	/*
	 * Enumeration is extensible
	 */
} e_ErrorCodes;

/* ErrorCodes */
typedef long	 ErrorCodes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ErrorCodes;
asn_struct_free_f ErrorCodes_free;
asn_struct_print_f ErrorCodes_print;
asn_constr_check_f ErrorCodes_constraint;
ber_type_decoder_f ErrorCodes_decode_ber;
der_type_encoder_f ErrorCodes_encode_der;
xer_type_decoder_f ErrorCodes_decode_xer;
xer_type_encoder_f ErrorCodes_encode_xer;
per_type_decoder_f ErrorCodes_decode_uper;
per_type_encoder_f ErrorCodes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ErrorCodes_H_ */
#include <asn_internal.h>
