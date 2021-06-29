#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

/* 2016.08.30 */

static inline int get_hbm_index(int idx)
{
	int i = 0;
	int idx_list[] = {
		20000	/* idx < 20000: HBM_OFF */
				/* idx >= 20000: HBM_ON */
	};

	while (i < ARRAY_SIZE(idx_list)) {
		if (idx < idx_list[i])
			break;
		i++;
	}

	return i;
}

static unsigned char UI_1[] = {
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static unsigned char UI_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static unsigned char UI_3[] = {
	0x55,
	0x00,
};

static unsigned char VIDEO_1[] = {
	0xC7,
	0x00,
	0x0A,
	0x0F,
	0x1A,
	0x28,
	0x35,
	0x53,
	0x6A,
	0x7E,
	0x8E,
	0x43,
	0x53,
	0x62,
	0x79,
	0x80,
	0x8F,
	0x96,
	0x9F,
	0xA0,
	0x00,
	0x0A,
	0x0F,
	0x1A,
	0x28,
	0x36,
	0x54,
	0x69,
	0x7E,
	0x8F,
	0x44,
	0x52,
	0x62,
	0x79,
	0x80,
	0x8F,
	0x96,
	0x9F,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static unsigned char VIDEO_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static unsigned char VIDEO_3[] = {
	0x55,
	0x03,
};

static unsigned char CAMERA_1[] = {
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static unsigned char CAMERA_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static unsigned char CAMERA_3[] = {
	0x55,
	0x03,
};

static unsigned char EBOOK_1[] = {
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static unsigned char EBOOK_2[] = {
	0xC8,
	0x01,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFE,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xCF,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x50,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x81,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x2E,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xAC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x65,
	0x00,
};

static unsigned char EBOOK_3[] = {
	0x55,
	0x00,
};

static unsigned char HBM_CE_1[] = {
	0xC7,
	0x00,
	0x0A,
	0x12,
	0x1F,
	0x2B,
	0x36,
	0x50,
	0x63,
	0x73,
	0x81,
	0x35,
	0x41,
	0x4E,
	0x5C,
	0x63,
	0x6E,
	0x7C,
	0x89,
	0xA0,
	0x00,
	0x0A,
	0x12,
	0x1F,
	0x2B,
	0x36,
	0x50,
	0x63,
	0x73,
	0x81,
	0x35,
	0x41,
	0x4E,
	0x5C,
	0x63,
	0x6E,
	0x7C,
	0x89,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static unsigned char HBM_CE_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static unsigned char HBM_CE_3[] = {
	0x55,
	0x00,
};

static unsigned char CE_SLOPE_LONG[] = {
	0xCE,
	0x7d, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x04, 0x00, 0x04,
	0x04, 0x45, 0x00, 0x00,
};


#define MDNIE_SET(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {1, 2, 3},			\
	.seq		= {				\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = id##_3,		.len = ARRAY_SIZE(id##_3),		.sleep = 0,},	\
	}	\
}

#define MDNIE_SET_CABC_ON(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {1, 2, 0, 3},			\
	.seq		= {				\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = CE_SLOPE_LONG,		.len = ARRAY_SIZE(CE_SLOPE_LONG),		.sleep = 0,},	\
		{	.cmd = id##_3,		.len = ARRAY_SIZE(id##_3),		.sleep = 0,},	\
	}	\
}

static struct mdnie_table bypass_table[BYPASS_MAX] = {
	[BYPASS_ON] = MDNIE_SET(UI)
};

static struct mdnie_table accessibility_table[ACCESSIBILITY_MAX] = {
	[NEGATIVE] = MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI),
	MDNIE_SET(UI)
};

static struct mdnie_table hbm_table[HBM_MAX] = {
	[HBM_ON] = MDNIE_SET(HBM_CE)
};

static struct mdnie_table main_table[SCENARIO_MAX][MODE_MAX] = {
	{
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET_CABC_ON(VIDEO),
		MDNIE_SET_CABC_ON(VIDEO),
		MDNIE_SET_CABC_ON(VIDEO),
		MDNIE_SET_CABC_ON(VIDEO),
		MDNIE_SET_CABC_ON(VIDEO),
		MDNIE_SET(EBOOK),
	},
	[CAMERA_MODE] = {
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET(EBOOK),
	},
	[GALLERY_MODE] = {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(UI),
		MDNIE_SET(EBOOK),
	}, {
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
	}, {
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
	}, {
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
		MDNIE_SET_CABC_ON(CAMERA),
	}
};

#undef MDNIE_SET

static struct mdnie_tune tune_info = {
	.bypass_table = bypass_table,
	.accessibility_table = accessibility_table,
	.hbm_table = hbm_table,
	.main_table = main_table,

	.get_hbm_index = get_hbm_index,
};

#endif