/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2022 Huawei Technologies Co., Ltd. All rights reserved.
 */

#ifndef ZRHUNG_H
#define ZRHUNG_H

#include <linux/version.h>
#if LINUX_VERSION_CODE > KERNEL_VERSION(5, 10, 197)
int zrhung_send_event_bbox(const char *domain, const char *event_name, const char *timestamp, const char *reset);
#endif

int zrhung_send_event(const char *domain, const char *event_name, const char *msg_buf);

#endif /* ZRHUNG_H */
