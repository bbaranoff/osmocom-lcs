/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Rel_5_ProtocolError_Extension_H_
#define	_Rel_5_ProtocolError_Extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Extended_reference;

/* Rel-5-ProtocolError-Extension */
typedef struct Rel_5_ProtocolError_Extension {
	struct Extended_reference	*extended_reference	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Rel_5_ProtocolError_Extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Rel_5_ProtocolError_Extension;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Extended-reference.h"

#endif	/* _Rel_5_ProtocolError_Extension_H_ */
#include <asn_internal.h>
