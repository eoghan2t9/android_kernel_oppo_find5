/* Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _ASM_ARCH_MSM_RESTART_H_
#define _ASM_ARCH_MSM_RESTART_H_

#define RESTART_NORMAL 0x0
#define RESTART_DLOAD  0x1

#if defined(CONFIG_LGE_CRASH_HANDLER)
#define SUB_THD_F_PWR	0x0190
#define SUB_THD_F_SD	0x0110
#define SUB_UNAB_THD	0x0120
#define SUB_RESET_SOC	0x0130
#define SUB_UNKNOWN	0x0140
#endif

#ifdef CONFIG_MACH_OPPO
#define FASTBOOT_MODE	0x77665500
#define RECOVERY_MODE	0x77665502
#define FACTORY_MODE	0x77665504
#define WLAN_MODE	0x77665505
#define RF_MODE		0x77665506
#define KERNEL_MODE	0x7766550a
#define MODEM_MODE	0x7766550b
#define ANDROID_MODE	0x7766550c
#endif

#if defined(CONFIG_MSM_NATIVE_RESTART)
void msm_set_restart_mode(int mode);
void msm_restart(char mode, const char *cmd);
#elif defined(CONFIG_ARCH_FSM9XXX)
void fsm_restart(char mode, const char *cmd);
#else
#define msm_set_restart_mode(mode)
#endif

extern int pmic_reset_irq;

#endif
