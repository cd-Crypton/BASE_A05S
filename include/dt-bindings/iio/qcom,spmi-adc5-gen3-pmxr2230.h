/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_QCOM_SPMI_VADC_PMXR2230_H
#define _DT_BINDINGS_QCOM_SPMI_VADC_PMXR2230_H

#ifndef PMXR2230_SID
#define PMXR2230_SID		1
#endif

/* ADC channels for PMXR2230_ADC for PMIC5 Gen3 */
#define PMXR2230_ADC5_GEN3_OFFSET_REF			(PMXR2230_SID << 8 | 0x00)
#define PMXR2230_ADC5_GEN3_1P25VREF			(PMXR2230_SID << 8 | 0x01)
#define PMXR2230_ADC5_GEN3_VREF_VADC			(PMXR2230_SID << 8 | 0x02)
#define PMXR2230_ADC5_GEN3_DIE_TEMP			(PMXR2230_SID << 8 | 0x03)

#define PMXR2230_ADC5_GEN3_AMUX_THM1			(PMXR2230_SID << 8 | 0x04)
#define PMXR2230_ADC5_GEN3_AMUX_THM2			(PMXR2230_SID << 8 | 0x05)
#define PMXR2230_ADC5_GEN3_AMUX_THM3			(PMXR2230_SID << 8 | 0x06)
#define PMXR2230_ADC5_GEN3_AMUX_THM4			(PMXR2230_SID << 8 | 0x07)
#define PMXR2230_ADC5_GEN3_AMUX_THM5			(PMXR2230_SID << 8 | 0x08)
#define PMXR2230_ADC5_GEN3_AMUX_THM6_GPIO2		(PMXR2230_SID << 8 | 0x09)
#define PMXR2230_ADC5_GEN3_AMUX1_GPIO3			(PMXR2230_SID << 8 | 0x0a)
#define PMXR2230_ADC5_GEN3_AMUX2_GPIO4			(PMXR2230_SID << 8 | 0x0b)
#define PMXR2230_ADC5_GEN3_AMUX3_GPIO7			(PMXR2230_SID << 8 | 0x0c)
#define PMXR2230_ADC5_GEN3_AMUX4_GPIO10			(PMXR2230_SID << 8 | 0x0d)

/* 100k pull-up */
#define PMXR2230_ADC5_GEN3_AMUX_THM1_100K_PU		(PMXR2230_SID << 8 | 0x44)
#define PMXR2230_ADC5_GEN3_AMUX_THM2_100K_PU		(PMXR2230_SID << 8 | 0x45)
#define PMXR2230_ADC5_GEN3_AMUX_THM3_100K_PU		(PMXR2230_SID << 8 | 0x46)
#define PMXR2230_ADC5_GEN3_AMUX_THM4_100K_PU		(PMXR2230_SID << 8 | 0x47)
#define PMXR2230_ADC5_GEN3_AMUX_THM5_100K_PU		(PMXR2230_SID << 8 | 0x48)
#define PMXR2230_ADC5_GEN3_AMUX_THM6_GPIO2_100K_PU	(PMXR2230_SID << 8 | 0x49)
#define PMXR2230_ADC5_GEN3_AMUX1_GPIO3_100K_PU		(PMXR2230_SID << 8 | 0x4a)
#define PMXR2230_ADC5_GEN3_AMUX2_GPIO4_100K_PU		(PMXR2230_SID << 8 | 0x4b)
#define PMXR2230_ADC5_GEN3_AMUX3_GPIO7_100K_PU		(PMXR2230_SID << 8 | 0x4c)
#define PMXR2230_ADC5_GEN3_AMUX4_GPIO10_100K_PU		(PMXR2230_SID << 8 | 0x4d)

/* 1/3 Divider */
#define PMXR2230_ADC5_GEN3_AMUX3_GPIO7_DIV3		(PMXR2230_SID << 8 | 0x8c)
#define PMXR2230_ADC5_GEN3_AMUX4_GPIO10_DIV3		(PMXR2230_SID << 8 | 0x8d)

#define PMXR2230_ADC5_GEN3_VPH_PWR			(PMXR2230_SID << 8 | 0x8e)

#endif /* _DT_BINDINGS_QCOM_SPMI_VADC_PMXR2230_H */