/*
 * Copyright (c) 2015-2016 MediaTek Inc.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef _DTS_IOMMU_PORT_MT6765_H_
#define _DTS_IOMMU_PORT_MT6765_H_

#define MTK_M4U_ID(larb, port)	(((larb) << 5) | (port))

/* Local arbiter ID */
#define MTK_M4U_TO_LARB(id)		(((id) >> 5) & 0x7)
/* PortID within the local arbiter */
#define MTK_M4U_TO_PORT(id)		((id) & 0x1f)



#define M4U_LARB0_ID		8
#define M4U_LARB1_ID		11
#define M4U_LARB2_ID		12
#define M4U_LARB3_ID		21

#define MTK_IOMMU_LARB_NR 4

/* larb0 */
#define M4U_PORT_DISP_OVL0		MTK_M4U_ID(0, 0)
#define M4U_PORT_DISP_2L_OVL0_LARB0	MTK_M4U_ID(0, 1)
#define M4U_PORT_DISP_RDMA0		MTK_M4U_ID(0, 2)
#define M4U_PORT_DISP_WDMA0		MTK_M4U_ID(0, 3)
#define M4U_PORT_MDP_RDMA0		MTK_M4U_ID(0, 4)
#define M4U_PORT_MDP_WDMA0		MTK_M4U_ID(0, 5)
#define M4U_PORT_MDP_WROT0		MTK_M4U_ID(0, 6)
#define M4U_PORT_DISP_FAKE0		MTK_M4U_ID(0, 7)
/* larb1 */
#define M4U_PORT_VENC_RCPU		MTK_M4U_ID(1, 0)
#define M4U_PORT_VENC_REC		MTK_M4U_ID(1, 1)
#define M4U_PORT_VENC_BSDMA		MTK_M4U_ID(1, 2)
#define M4U_PORT_VENC_SV_COMV		MTK_M4U_ID(1, 3)
#define M4U_PORT_VENC_RD_COMV		MTK_M4U_ID(1, 4)
#define M4U_PORT_JPGENC_RDMA		MTK_M4U_ID(1, 5)
#define M4U_PORT_JPGENC_BSDMA		MTK_M4U_ID(1, 6)
#define M4U_PORT_VENC_CUR_LUMA	MTK_M4U_ID(1, 7)
#define M4U_PORT_VENC_CUR_CHROMA	MTK_M4U_ID(1, 8)
#define M4U_PORT_VENC_REF_LUMA	MTK_M4U_ID(1, 9)
#define M4U_PORT_VENC_REF_CHROMA	MTK_M4U_ID(1, 10)
/* larb2 */
#define M4U_PORT_CAM_IMGI		MTK_M4U_ID(2, 0)
#define M4U_PORT_CAM_IMG2O		MTK_M4U_ID(2, 1)
#define M4U_PORT_CAM_IMG3O		MTK_M4U_ID(2, 2)
#define M4U_PORT_CAM_VIPI		MTK_M4U_ID(2, 3)
#define M4U_PORT_CAM_LCEI		MTK_M4U_ID(2, 4)
#define M4U_PORT_CAM_FD_RP		MTK_M4U_ID(2, 5)
#define M4U_PORT_CAM_FD_WR		MTK_M4U_ID(2, 6)
#define M4U_PORT_CAM_FD_RB		MTK_M4U_ID(2, 7)
#define M4U_PORT_CAM_DPE_RDMA		MTK_M4U_ID(2, 8)
#define M4U_PORT_CAM_DPE_WDMA		MTK_M4U_ID(2, 9)
#define M4U_PORT_CAM_RSC_RDMA		MTK_M4U_ID(2, 10)
#define M4U_PORT_CAM_RSC_WDMA		MTK_M4U_ID(2, 11)
/* larb3 */
#define M4U_PORT_CAM_IMGO		MTK_M4U_ID(3, 0)
#define M4U_PORT_CAM_RRZO		MTK_M4U_ID(3, 1)
#define M4U_PORT_CAM_AAO		MTK_M4U_ID(3, 2)
#define M4U_PORT_CAM_AFO		MTK_M4U_ID(3, 3)
#define M4U_PORT_CAM_LSCI0		MTK_M4U_ID(3, 4)
#define M4U_PORT_CAM_LSCI1		MTK_M4U_ID(3, 5)
#define M4U_PORT_CAM_PDO		MTK_M4U_ID(3, 6)
#define M4U_PORT_CAM_BPCI		MTK_M4U_ID(3, 7)
#define M4U_PORT_CAM_LCSO		MTK_M4U_ID(3, 8)
#define M4U_PORT_CAM_RSSO_A		MTK_M4U_ID(3, 9)
#define M4U_PORT_CAM_RSSO_B		MTK_M4U_ID(3, 10)
#define M4U_PORT_CAM_UFEO		MTK_M4U_ID(3, 11)
#define M4U_PORT_CAM_SOC0		MTK_M4U_ID(3, 12)
#define M4U_PORT_CAM_SOC1		MTK_M4U_ID(3, 13)
#define M4U_PORT_CAM_SOC2		MTK_M4U_ID(3, 14)
#define M4U_PORT_CAM_CCUI		MTK_M4U_ID(3, 15)
#define M4U_PORT_CAM_CCUO		MTK_M4U_ID(3, 16)
#define M4U_PORT_CAM_CACI		MTK_M4U_ID(3, 17)
#define M4U_PORT_CAM_RAWI_A		MTK_M4U_ID(3, 18)
#define M4U_PORT_CAM_RAWI_B		MTK_M4U_ID(3, 19)
#define M4U_PORT_CAM_CCUG		MTK_M4U_ID(3, 20)

#define M4U_PORT_UNKNOWN		(M4U_PORT_CAM_CCUG+1)

#endif
