// SPDX-License-Identifier: GPL-2.0
/*
 * Android Vendor Hook Tracepoints - Definitions
 *
 * This file provides the actual tracepoint definitions for Android
 * vendor hooks that are declared in include/trace/hooks/syscall_check.h
 * Without this file, the kernel build fails with undefined reference errors.
 */
#define CREATE_TRACE_POINTS
#include <trace/hooks/syscall_check.h>
