/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __Q6CORE_H__
#define __Q6CORE_H__

struct q6core_svc_api_info {
	uint32_t service_id;
	uint32_t api_version;
	uint32_t api_branch_version;
};

enum {
	Q6_ADSP_VERSION_2_6,
	Q6_ADSP_VERSION_2_7,
	Q6_ADSP_VERSION_2_8,
};

bool q6core_is_adsp_ready(void);
int q6core_get_adsp_version(void);
int q6core_get_svc_api_info(int svc_id, struct q6core_svc_api_info *ainfo);

#endif /* __Q6CORE_H__ */
