/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Messages"
 * 	found in "../asn1/rrlp.asn"
 * 	`asn1c -gen-PER`
 */

#include "Rel-98-MsrPosition-Rsp-Extension.h"

static asn_TYPE_member_t asn_MBR_rel_98_Ext_MeasureInfo_2[] = {
	{ ATF_POINTER, 1, offsetof(struct rel_98_Ext_MeasureInfo, otd_MeasureInfo_R98_Ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTD_MeasureInfo_R98_Ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"otd-MeasureInfo-R98-Ext"
		},
};
static const int asn_MAP_rel_98_Ext_MeasureInfo_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_rel_98_Ext_MeasureInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rel_98_Ext_MeasureInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* otd-MeasureInfo-R98-Ext */
};
static asn_SEQUENCE_specifics_t asn_SPC_rel_98_Ext_MeasureInfo_specs_2 = {
	sizeof(struct rel_98_Ext_MeasureInfo),
	offsetof(struct rel_98_Ext_MeasureInfo, _asn_ctx),
	asn_MAP_rel_98_Ext_MeasureInfo_tag2el_2,
	1,	/* Count of tags in the map */
	asn_MAP_rel_98_Ext_MeasureInfo_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rel_98_Ext_MeasureInfo_2 = {
	"rel-98-Ext-MeasureInfo",
	"rel-98-Ext-MeasureInfo",
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
	asn_DEF_rel_98_Ext_MeasureInfo_tags_2,
	sizeof(asn_DEF_rel_98_Ext_MeasureInfo_tags_2)
		/sizeof(asn_DEF_rel_98_Ext_MeasureInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_rel_98_Ext_MeasureInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_rel_98_Ext_MeasureInfo_tags_2)
		/sizeof(asn_DEF_rel_98_Ext_MeasureInfo_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_rel_98_Ext_MeasureInfo_2,
	1,	/* Elements count */
	&asn_SPC_rel_98_Ext_MeasureInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Rel_98_MsrPosition_Rsp_Extension_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Rel_98_MsrPosition_Rsp_Extension, rel_98_Ext_MeasureInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_rel_98_Ext_MeasureInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rel-98-Ext-MeasureInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct Rel_98_MsrPosition_Rsp_Extension, timeAssistanceMeasurements),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSTimeAssistanceMeasurements,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeAssistanceMeasurements"
		},
};
static const int asn_MAP_Rel_98_MsrPosition_Rsp_Extension_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Rel_98_MsrPosition_Rsp_Extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rel-98-Ext-MeasureInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeAssistanceMeasurements */
};
static asn_SEQUENCE_specifics_t asn_SPC_Rel_98_MsrPosition_Rsp_Extension_specs_1 = {
	sizeof(struct Rel_98_MsrPosition_Rsp_Extension),
	offsetof(struct Rel_98_MsrPosition_Rsp_Extension, _asn_ctx),
	asn_MAP_Rel_98_MsrPosition_Rsp_Extension_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Rel_98_MsrPosition_Rsp_Extension_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	0,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Rel_98_MsrPosition_Rsp_Extension = {
	"Rel-98-MsrPosition-Rsp-Extension",
	"Rel-98-MsrPosition-Rsp-Extension",
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
	asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1,
	sizeof(asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1)
		/sizeof(asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1[0]), /* 1 */
	asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1)
		/sizeof(asn_DEF_Rel_98_MsrPosition_Rsp_Extension_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Rel_98_MsrPosition_Rsp_Extension_1,
	2,	/* Elements count */
	&asn_SPC_Rel_98_MsrPosition_Rsp_Extension_specs_1	/* Additional specs */
};

