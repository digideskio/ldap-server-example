/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Control.h"

static asn_TYPE_member_t asn_MBR_Control_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Control, controlType),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_LDAPOID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"controlType"
		},
	{ ATF_POINTER, 2, offsetof(struct Control, criticality),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"criticality"
		},
	{ ATF_POINTER, 1, offsetof(struct Control, controlValue),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"controlValue"
		},
};
static ber_tlv_tag_t asn_DEF_Control_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Control_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 1, 0, 0 }, /* criticality at 153 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* controlType at 152 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, -1, 0 } /* controlValue at 154 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Control_specs_1 = {
	sizeof(struct Control),
	offsetof(struct Control, _asn_ctx),
	asn_MAP_Control_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Control = {
	"Control",
	"Control",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Control_tags_1,
	sizeof(asn_DEF_Control_tags_1)
		/sizeof(asn_DEF_Control_tags_1[0]), /* 1 */
	asn_DEF_Control_tags_1,	/* Same as above */
	sizeof(asn_DEF_Control_tags_1)
		/sizeof(asn_DEF_Control_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Control_1,
	3,	/* Elements count */
	&asn_SPC_Control_specs_1	/* Additional specs */
};
