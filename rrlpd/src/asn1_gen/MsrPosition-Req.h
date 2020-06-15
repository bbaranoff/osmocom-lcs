/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MsrPosition_Req_H_
#define	_MsrPosition_Req_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PositionInstruct.h"
#include "ExtensionContainer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferenceAssistData;
struct MsrAssistData;
struct SystemInfoAssistData;
struct GPS_AssistData;
struct Rel98_MsrPosition_Req_Extension;
struct Rel5_MsrPosition_Req_Extension;

/* MsrPosition-Req */
typedef struct MsrPosition_Req {
	PositionInstruct_t	 positionInstruct;
	struct ReferenceAssistData	*referenceAssistData	/* OPTIONAL */;
	struct MsrAssistData	*msrAssistData	/* OPTIONAL */;
	struct SystemInfoAssistData	*systemInfoAssistData	/* OPTIONAL */;
	struct GPS_AssistData	*gps_AssistData	/* OPTIONAL */;
	ExtensionContainer_t	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Rel98_MsrPosition_Req_Extension	*rel98_MsrPosition_Req_extension	/* OPTIONAL */;
	struct Rel5_MsrPosition_Req_Extension	*rel5_MsrPosition_Req_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MsrPosition_Req_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MsrPosition_Req;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferenceAssistData.h"
#include "MsrAssistData.h"
#include "SystemInfoAssistData.h"
#include "GPS-AssistData.h"
#include "Rel98-MsrPosition-Req-Extension.h"
#include "Rel5-MsrPosition-Req-Extension.h"

#endif	/* _MsrPosition_Req_H_ */
#include <asn_internal.h>