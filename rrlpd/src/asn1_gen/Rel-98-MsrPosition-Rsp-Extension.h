/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Rel_98_MsrPosition_Rsp_Extension_H_
#define	_Rel_98_MsrPosition_Rsp_Extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GPSTimeAssistanceMeasurements;
struct OTD_MeasureInfo_R98_Ext;

/* Rel-98-MsrPosition-Rsp-Extension */
typedef struct Rel_98_MsrPosition_Rsp_Extension {
	struct rel_98_Ext_MeasureInfo {
		struct OTD_MeasureInfo_R98_Ext	*otd_MeasureInfo_R98_Ext	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rel_98_Ext_MeasureInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GPSTimeAssistanceMeasurements	*timeAssistanceMeasurements	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Rel_98_MsrPosition_Rsp_Extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Rel_98_MsrPosition_Rsp_Extension;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GPSTimeAssistanceMeasurements.h"
#include "OTD-MeasureInfo-R98-Ext.h"

#endif	/* _Rel_98_MsrPosition_Rsp_Extension_H_ */
#include <asn_internal.h>