/****************************************************************************
 * arch/arm/include/armv7-a/irq.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/* This file should never be included directly but, rather, only indirectly
 * through nuttx/irq.h
 */

#ifndef __ARCH_ARM_INCLUDE_ARMV7_A_IRQ_H
#define __ARCH_ARM_INCLUDE_ARMV7_A_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <nuttx/irq.h>

#ifndef __ASSEMBLY__
#  include <stdint.h>
#endif

#include <arch/armv7-a/cp15.h>

/****************************************************************************
 * Pre-processor Prototypes
 ****************************************************************************/

#ifdef __ghs__
#  define __ARM_ARCH 7
#endif

/* IRQ Stack Frame Format:
 *
 * Context is always saved/restored in the same way:
 *
 *   (1) stmia rx, {r0-r14}
 *   (2) then the PC and CPSR
 *
 * This results in the following set of indices that can be used to access
 * individual registers in the xcp.regs array:
 */

/* If the MCU supports a floating point unit, then it will be necessary
 * to save the state of the FPU status register and data registers on
 * each context switch.  These registers are not saved during interrupt
 * level processing, however. So, as a consequence, floating point
 * operations may NOT be performed in interrupt handlers.
 *
 * The FPU provides an extension register file containing 32 single-
 * precision registers. These can be viewed as:
 *
 * - Sixteen 64-bit double word registers, D0-D15
 * - Thirty-two 32-bit single-word registers, S0-S31
 *   S<2n> maps to the least significant half of D<n>
 *   S<2n+1> maps to the most significant half of D<n>.
 */

#ifdef CONFIG_ARCH_FPU
#  define REG_D0            (0)  /* D0 */
#  define REG_S0            (0)  /* S0 */
#  define REG_S1            (1)  /* S1 */
#  define REG_D1            (2)  /* D1 */
#  define REG_S2            (2)  /* S2 */
#  define REG_S3            (3)  /* S3 */
#  define REG_D2            (4)  /* D2 */
#  define REG_S4            (4)  /* S4 */
#  define REG_S5            (5)  /* S5 */
#  define REG_D3            (6)  /* D3 */
#  define REG_S6            (6)  /* S6 */
#  define REG_S7            (7)  /* S7 */
#  define REG_D4            (8)  /* D4 */
#  define REG_S8            (8)  /* S8 */
#  define REG_S9            (9)  /* S9 */
#  define REG_D5            (10) /* D5 */
#  define REG_S10           (10) /* S10 */
#  define REG_S11           (11) /* S11 */
#  define REG_D6            (12) /* D6 */
#  define REG_S12           (12) /* S12 */
#  define REG_S13           (13) /* S13 */
#  define REG_D7            (14) /* D7 */
#  define REG_S14           (14) /* S14 */
#  define REG_S15           (15) /* S15 */
#  define REG_D8            (16) /* D8 */
#  define REG_S16           (16) /* S16 */
#  define REG_S17           (17) /* S17 */
#  define REG_D9            (18) /* D9 */
#  define REG_S18           (18) /* S18 */
#  define REG_S19           (19) /* S19 */
#  define REG_D10           (20) /* D10 */
#  define REG_S20           (20) /* S20 */
#  define REG_S21           (21) /* S21 */
#  define REG_D11           (22) /* D11 */
#  define REG_S22           (22) /* S22 */
#  define REG_S23           (23) /* S23 */
#  define REG_D12           (24) /* D12 */
#  define REG_S24           (24) /* S24 */
#  define REG_S25           (25) /* S25 */
#  define REG_D13           (26) /* D13 */
#  define REG_S26           (26) /* S26 */
#  define REG_S27           (27) /* S27 */
#  define REG_D14           (28) /* D14 */
#  define REG_S28           (28) /* S28 */
#  define REG_S29           (29) /* S29 */
#  define REG_D15           (30) /* D15 */
#  define REG_S30           (30) /* S30 */
#  define REG_S31           (31) /* S31 */
#  ifdef CONFIG_ARM_HAVE_DPFPU32
#    define REG_D16         (32) /* D16 */
#    define REG_D17         (34) /* D17 */
#    define REG_D18         (36) /* D18 */
#    define REG_D19         (38) /* D19 */
#    define REG_D20         (40) /* D20 */
#    define REG_D21         (42) /* D21 */
#    define REG_D22         (44) /* D22 */
#    define REG_D23         (46) /* D23 */
#    define REG_D24         (48) /* D24 */
#    define REG_D25         (50) /* D25 */
#    define REG_D26         (52) /* D26 */
#    define REG_D27         (54) /* D27 */
#    define REG_D28         (56) /* D28 */
#    define REG_D29         (58) /* D29 */
#    define REG_D30         (60) /* D30 */
#    define REG_D31         (62) /* D31 */
#    define REG_FPSCR       (64) /* Floating point status and control */
#    define FPU_CONTEXT_REGS  (65)
#  else
#    define REG_FPSCR       (32) /* Floating point status and control */
#    define FPU_CONTEXT_REGS  (33)
#  endif
#else
#  define FPU_CONTEXT_REGS  (0)
#endif

#define REG_R13             (FPU_CONTEXT_REGS+0)
#define REG_R14             (FPU_CONTEXT_REGS+1)
#define REG_R0              (FPU_CONTEXT_REGS+2)
#define REG_R1              (FPU_CONTEXT_REGS+3)
#define REG_R2              (FPU_CONTEXT_REGS+4)
#define REG_R3              (FPU_CONTEXT_REGS+5)
#define REG_R4              (FPU_CONTEXT_REGS+6)
#define REG_R5              (FPU_CONTEXT_REGS+7)
#define REG_R6              (FPU_CONTEXT_REGS+8)
#define REG_R7              (FPU_CONTEXT_REGS+9)
#define REG_R8              (FPU_CONTEXT_REGS+10)
#define REG_R9              (FPU_CONTEXT_REGS+11)
#define REG_R10             (FPU_CONTEXT_REGS+12)
#define REG_R11             (FPU_CONTEXT_REGS+13)
#define REG_R12             (FPU_CONTEXT_REGS+14)
#define REG_R15             (FPU_CONTEXT_REGS+15)
#define REG_CPSR            (FPU_CONTEXT_REGS+16)

#define ARM_CONTEXT_REGS    (17)

/* The total number of registers saved by software */

#define XCPTCONTEXT_REGS    (FPU_CONTEXT_REGS + ARM_CONTEXT_REGS)
#define XCPTCONTEXT_SIZE    (4 * XCPTCONTEXT_REGS)

/* Friendly register names */

#define REG_A1              REG_R0
#define REG_A2              REG_R1
#define REG_A3              REG_R2
#define REG_A4              REG_R3
#define REG_V1              REG_R4
#define REG_V2              REG_R5
#define REG_V3              REG_R6
#define REG_V4              REG_R7
#define REG_V5              REG_R8
#define REG_V6              REG_R9
#define REG_V7              REG_R10
#define REG_SB              REG_R9
#define REG_SL              REG_R10
#ifdef CONFIG_ARM_THUMB
  #define REG_FP            REG_R7
#else
  #define REG_FP            REG_R11
#endif /* CONFIG_ARM_THUMB */
#define REG_IP              REG_R12
#define REG_SP              REG_R13
#define REG_LR              REG_R14
#define REG_PC              REG_R15

/* The PIC register is usually R10. It can be R9 is stack checking is enabled
 * or if the user changes it with -mpic-register on the GCC command line.
 */

#define REG_PIC             REG_R10

/* Multiprocessor Affinity Register (MPIDR): CRn=c0, opc1=0, CRm=c0, opc2=5 */

#define MPIDR_CPUID_SHIFT   (0)       /* Bits 0-1: CPU ID */
#define MPIDR_CPUID_MASK    (3 << MPIDR_CPUID_SHIFT)
#  define MPIDR_CPUID_CPU0  (0 << MPIDR_CPUID_SHIFT)
#  define MPIDR_CPUID_CPU1  (1 << MPIDR_CPUID_SHIFT)
#  define MPIDR_CPUID_CPU2  (2 << MPIDR_CPUID_SHIFT)
#  define MPIDR_CPUID_CPU3  (3 << MPIDR_CPUID_SHIFT)
                                      /* Bits 2-7: Reserved */
#define MPIDR_CLUSTID_SHIFT (8)       /* Bits 8-11: Cluster ID value */
#define MPIDR_CLUSTID_MASK  (15 << MPIDR_CLUSTID_SHIFT)
                                      /* Bits 12-29: Reserved */
#define MPIDR_U             (1 << 30) /* Bit 30: Multiprocessing Extensions. */

/****************************************************************************
 * Public Types
 ****************************************************************************/

#ifndef __ASSEMBLY__

/* This structure represents the return state from a system call */

#ifdef CONFIG_LIB_SYSCALL
struct xcpt_syscall_s
{
#ifdef CONFIG_BUILD_KERNEL
  uint32_t cpsr;        /* The CPSR value */
#endif
  uint32_t sysreturn;   /* The return PC */
};
#endif

/* This struct defines the way the registers are stored.  We need to save:
 *
 *  1  CPSR
 *  7  Static registers, v1-v7 (aka r4-r10)
 *  1  Frame pointer, fp (aka r11)
 *  1  Stack pointer, sp (aka r13)
 *  1  Return address, lr (aka r14)
 * ---
 * 11  (XCPTCONTEXT_USER_REG)
 *
 * On interrupts, we also need to save:
 *  4  Volatile registers, a1-a4 (aka r0-r3)
 *  1  Scratch Register, ip (aka r12)
 *---
 *  5  (XCPTCONTEXT_IRQ_REGS)
 *
 * For a total of 17 (XCPTCONTEXT_REGS)
 */

struct xcptcontext
{
  /* These are saved copies of the context used during
   * signal processing.
   */

  uint32_t *saved_regs;

#ifdef CONFIG_BUILD_KERNEL
  /* This is the saved address to use when returning from a user-space
   * signal handler.
   */

  uint32_t sigreturn;

#endif

  /* Register save area with XCPTCONTEXT_SIZE, only valid when:
   * 1.The task isn't running or
   * 2.The task is interrupted
   * otherwise task is running, and regs contain the stale value.
   */

  uint32_t *regs;

  /* Extra fault address register saved for common paging logic.  In the
   * case of the pre-fetch abort, this value is the same as regs[REG_R15];
   * For the case of the data abort, this value is the value of the fault
   * address register (FAR) at the time of data abort exception.
   */

#ifdef CONFIG_LEGACY_PAGING
  uintptr_t far;
#endif

#ifdef CONFIG_LIB_SYSCALL
  /* The following array holds the return address and the exc_return value
   * needed to return from each nested system call.
   */

  uint8_t nsyscalls;
  struct xcpt_syscall_s syscall[CONFIG_SYS_NNEST];
#endif

#ifdef CONFIG_ARCH_ADDRENV
#ifdef CONFIG_ARCH_STACK_DYNAMIC
  /* Experimental support for dynamically sized stacks.  We using per-task
   * l1entry, so only record the ustack virtual address base.
   *
   * REVISIT: ARCH_STACK_DYNAMIC not fully implemented.  Have to check
   *          if want to use this feature.  L1 page table per-task stored,
   *          we only record the ustackbase in the context.
   */

  uintptr_t ustackbase;
#endif

#ifdef CONFIG_ARCH_KERNEL_STACK
  /* In this configuration, all syscalls execute from an internal kernel
   * stack.  Why?  Because when we instantiate and initialize the address
   * environment of the new user process, we will temporarily lose the
   * address environment of the old user process, including its stack
   * contents.  The kernel C logic will crash immediately with no valid
   * stack in place.
   */

  uint32_t *ustkptr;  /* Saved user stack pointer */
  uint32_t *kstack;   /* Allocate base of the (aligned) kernel stack */
  uint32_t *kstkptr;  /* Saved kernel stack pointer */
#endif
#endif
};

/****************************************************************************
 * Inline functions
 ****************************************************************************/

/* Name: up_irq_save, up_irq_restore, and friends.
 *
 * NOTE: This function should never be called from application code and,
 * as a general rule unless you really know what you are doing, this
 * function should not be called directly from operation system code either:
 * Typically, the wrapper functions, enter_critical_section() and
 * leave_critical section(), are probably what you really want.
 */

/* Return the current IRQ state */

static inline_function irqstate_t irqstate(void)
{
  unsigned int cpsr;

  __asm__ __volatile__
    (
      "\tmrs    %0, cpsr\n"
      : "=r" (cpsr)
      :
      : "memory"
    );

  return cpsr;
}

/* Disable IRQs and return the previous IRQ state */

noinstrument_function static inline_function irqstate_t up_irq_save(void)
{
  unsigned int cpsr;

  __asm__ __volatile__
    (
      "\tmrs    %0, cpsr\n"
#ifdef CONFIG_ARCH_TRUSTZONE_SECURE
      "\tcpsid  f\n"
#else
      "\tcpsid  i\n"
#endif
      : "=r" (cpsr)
      :
      : "memory"
    );

  return cpsr;
}

/* Enable IRQs and return the previous IRQ state */

static inline_function irqstate_t up_irq_enable(void)
{
  unsigned int cpsr;

  __asm__ __volatile__
    (
      "\tmrs    %0, cpsr\n"
#if defined(CONFIG_ARCH_HIPRI_INTERRUPT)
      "\tcpsie  if\n"
#elif defined(CONFIG_ARCH_TRUSTZONE_SECURE)
      "\tcpsie  f\n"
#else
      "\tcpsie  i\n"
#endif
      : "=r" (cpsr)
      :
      : "memory"
    );

  return cpsr;
}

/* Disable IRQs and return the previous IRQ state */

static inline_function irqstate_t up_irq_disable(void)
{
  unsigned int cpsr;

  __asm__ __volatile__
    (
      "\tmrs    %0, cpsr\n"
      "\tcpsid  i\n"
      : "=r" (cpsr)
      :
      : "memory"
    );

  return cpsr;
}

/* Restore saved IRQ & FIQ state */

noinstrument_function static inline_function
void up_irq_restore(irqstate_t flags)
{
  __asm__ __volatile__
    (
      "msr    cpsr_c, %0"
      :
      : "r" (flags)
      : "memory"
    );
}

/****************************************************************************
 * Name: up_cpu_index
 *
 * Description:
 *   Return the real core number regardless CONFIG_SMP setting
 *
 ****************************************************************************/

#ifdef CONFIG_ARCH_HAVE_MULTICPU
noinstrument_function
static inline_function int up_cpu_index(void)
{
  unsigned int mpidr;

  /* Read the Multiprocessor Affinity Register (MPIDR) */

  mpidr = CP15_GET(MPIDR);

  /* And return the CPU ID field */

  return (mpidr & MPIDR_CPUID_MASK) >> MPIDR_CPUID_SHIFT;
}
#endif /* CONFIG_ARCH_HAVE_MULTICPU */

static inline_function uint32_t up_getsp(void)
{
  register uint32_t sp;

  __asm__ __volatile__
  (
    "mov %0, sp\n"
    : "=r" (sp)
  );

  return sp;
}

static inline_function uintptr_t up_getusrsp(void *regs)
{
  uint32_t *ptr = (uint32_t *)regs;
  return ptr[REG_SP];
}

noinstrument_function
static inline_function void up_set_interrupt_context(bool flag)
{
  CP15_MODIFY(flag, 1ul, TPIDRPRW);
}

#define up_this_task()         ((struct tcb_s *)(CP15_GET(TPIDRPRW) & ~1ul))
#define up_update_task(t)      CP15_MODIFY(t, ~1ul, TPIDRPRW)
#define up_interrupt_context() (CP15_GET(TPIDRPRW) & 1)

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#undef EXTERN
#ifdef __cplusplus
}
#endif
#endif /* __ASSEMBLY__ */

#endif /* __ARCH_ARM_INCLUDE_ARMV7_A_IRQ_H */
