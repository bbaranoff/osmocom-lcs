/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SatStatus_H_
#define	_SatStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UncompressedEphemeris.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SatStatus_PR {
	SatStatus_PR_NOTHING,	/* No components present */
	SatStatus_PR_newSatelliteAndModelUC,
	SatStatus_PR_oldSatelliteAndModel,
	SatStatus_PR_newNaviModelUC,
	/* Extensions may appear below */
	
} SatStatus_PR;

/* SatStatus */
typedef struct SatStatus {
	SatStatus_PR present;
	union SatStatus_u {
		UncompressedEphemeris_t	 newSatelliteAndModelUC;
		NULL_t	 oldSatelliteAndModel;
		UncompressedEphemeris_t	 newNaviModelUC;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatStatus;

#ifdef __cplusplus
}
#endif

#endif	/* _SatStatus_H_ */
#include <asn_internal.h>
