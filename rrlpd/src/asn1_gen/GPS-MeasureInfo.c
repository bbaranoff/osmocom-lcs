/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#include "GPS-MeasureInfo.h"

static asn_TYPE_member_t asn_MBR_GPS_MeasureInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GPS_MeasureInfo, gpsMsrSetList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SeqOfGPS_MsrSetElement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsMsrSetList"
		},
};
static const ber_tlv_tag_t asn_DEF_GPS_MeasureInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GPS_MeasureInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gpsMsrSetList */
};
static asn_SEQUENCE_specifics_t asn_SPC_GPS_MeasureInfo_specs_1 = {
	sizeof(struct GPS_MeasureInfo),
	offsetof(struct GPS_MeasureInfo, _asn_ctx),
	asn_MAP_GPS_MeasureInfo_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GPS_MeasureInfo = {
	"GPS-MeasureInfo",
	"GPS-MeasureInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GPS_MeasureInfo_tags_1,
	sizeof(asn_DEF_GPS_MeasureInfo_tags_1)
		/sizeof(asn_DEF_GPS_MeasureInfo_tags_1[0]), /* 1 */
	asn_DEF_GPS_MeasureInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_GPS_MeasureInfo_tags_1)
		/sizeof(asn_DEF_GPS_MeasureInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GPS_MeasureInfo_1,
	1,	/* Elements count */
	&asn_SPC_GPS_MeasureInfo_specs_1	/* Additional specs */
};
