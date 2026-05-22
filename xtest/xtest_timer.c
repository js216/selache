// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Jakob Kastelic
// xtest_timer.c --- xtest-local TIMER0 tick counter

#include "xtest_timer.h"

#define MMR(addr) (*(volatile uint32_t *)(addr))

// TIMER0 sub-timer 0 registers (ADSP-2156x HRM chapter 18).
#define REG_TIMER0_RUN_SET  0x31018008U
#define REG_TIMER0_RUN_CLR  0x3101800CU
#define REG_TIMER0_TMR0_CFG 0x31018060U
#define REG_TIMER0_TMR0_CNT 0x31018064U
#define REG_TIMER0_TMR0_PER 0x31018068U
#define REG_TIMER0_TMR0_WID 0x3101806CU
#define REG_TIMER0_TMR0_DLY 0x31018070U

#define BIT_TMR_CFG_OUTDIS    (1U << 11U)
#define POS_TMR_CFG_CLKSEL    8U
#define POS_TMR_CFG_TMODE     0U
#define TMR_TMODE_PWMOUT_CONT 12U
#define TMR_CLKSEL_SCLK       0U

#define TMR_PERIOD_MAX 0xFFFFFFFFU
#define TMR_WIDTH_HALF 0x80000000U

void xtest_timer_init(void)
{
   MMR(REG_TIMER0_RUN_CLR) = 1U << 0U;

   MMR(REG_TIMER0_TMR0_CFG) = BIT_TMR_CFG_OUTDIS |
                              (TMR_CLKSEL_SCLK << POS_TMR_CFG_CLKSEL) |
                              (TMR_TMODE_PWMOUT_CONT << POS_TMR_CFG_TMODE);
   MMR(REG_TIMER0_TMR0_PER) = TMR_PERIOD_MAX;
   MMR(REG_TIMER0_TMR0_WID) = TMR_WIDTH_HALF;
   MMR(REG_TIMER0_TMR0_DLY) = 0U;

   MMR(REG_TIMER0_RUN_SET) = 1U << 0U;
}

uint32_t xtest_timer_ticks(void)
{
   return MMR(REG_TIMER0_TMR0_CNT);
}
