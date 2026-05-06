// SPDX-License-Identifier: MIT
// cctest_csmith_a213bd3e.c --- cctest case csmith_a213bd3e (csmith seed 2719202622)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd672d719 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2719202622 -o /tmp/csmith_gen_urdbwxgw/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_19 = 0L;
static int32_t g_53 = 0x425452E2L;
static uint32_t g_75[1][1] = {{0x92C249DDL}};
static uint32_t g_104[1] = {0x39A88327L};
static int8_t g_109 = 5L;
static int8_t g_128 = 1L;
static uint32_t g_151[5][2] = {{5UL,0x9B7E06FDL},{7UL,7UL},{7UL,0x9B7E06FDL},{5UL,1UL},{0x9B7E06FDL,1UL}};
static int8_t g_154 = 0x9BL;
static int32_t g_155 = 0L;
static int32_t g_158[2] = {(-7L),(-7L)};
static uint64_t g_159 = 0xA19F56D68B9C3B6FLL;
static int32_t g_171 = 0L;
static int8_t g_218 = 0x2AL;
static int8_t g_257 = 0x88L;
static uint8_t g_259 = 0xD2L;
static int8_t g_282 = 0x98L;
static int64_t g_283 = 0xB201384C8C45096FLL;
static uint8_t g_284 = 5UL;



static int64_t  func_1(void);
static int64_t  func_4(int64_t  p_5, uint32_t  p_6, int64_t  p_7);
static const uint8_t  func_13(uint32_t  p_14, int32_t  p_15, uint64_t  p_16, uint32_t  p_17, int16_t  p_18);
static int32_t  func_20(const int32_t  p_21, int32_t  p_22, uint8_t  p_23);




static int64_t  func_1(void)
{ 
    int32_t l_8[2];
    int32_t l_206 = 0x08B660CDL;
    int32_t l_225 = 0x52370E72L;
    int i;
    for (i = 0; i < 2; i++)
        l_8[i] = 0xE8588D0DL;
    if (((-6L) == ((l_8[1] = (safe_lshift_func_uint8_t_u_u(((func_4(l_8[1], (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(func_13(l_8[1], l_8[1], g_19, l_8[0], l_8[1]), 2)), l_8[0])), l_8[0]) , l_8[1]) > 0x0A69L), 0))) < (-9L))))
    { 
        uint32_t l_186 = 0xBB9802BAL;
        int32_t l_204 = 0x7397E21AL;
        int32_t l_205 = 0L;
        l_206 &= (l_205 &= (safe_rshift_func_int16_t_s_s(((l_8[1] , ((l_186 && (g_104[0] = (l_204 ^= ((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((+(safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((~(safe_unary_minus_func_int64_t_s(l_8[1]))), (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_8[1], l_186)), g_159)), l_186)))) == 0xC5L), l_8[1]))), 0x436219FDL)), l_186)) && (-1L))))) ^ (-1L))) ^ l_8[1]), g_151[0][0])));
        for (g_171 = 0; (g_171 <= 1); g_171 += 1)
        { 
            uint64_t l_217 = 0UL;
            int32_t l_219 = (-8L);
            int i;
            for (g_53 = 0; (g_53 >= 0); g_53 -= 1)
            { 
                int i, j;
                g_19 = l_8[(g_53 + 1)];
                g_19 = (safe_lshift_func_int8_t_s_u((((safe_mod_func_int64_t_s_s((l_8[(g_53 + 1)] = (safe_rshift_func_uint8_t_u_s(((g_218 ^= (safe_mod_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(g_151[g_171][g_171], ((-3L) || g_151[g_53][(g_53 + 1)]))) || ((l_217 = (g_151[g_53][g_171] != 0xFC2DL)) < g_151[(g_171 + 1)][g_53])) , g_104[g_53]), 0xA440L))) & l_8[1]), l_186))), g_104[g_53])) && l_217) >= 0x46BFL), l_219));
            }
            return l_8[g_171];
        }
    }
    else
    { 
        uint32_t l_224[3];
        int16_t l_227[3];
        int32_t l_280 = (-7L);
        int i;
        for (i = 0; i < 3; i++)
            l_224[i] = 1UL;
        for (i = 0; i < 3; i++)
            l_227[i] = 1L;
        g_19 = (safe_div_func_uint16_t_u_u(65535UL, (g_155 || g_155)));
        for (g_159 = (-15); (g_159 >= 51); g_159 = safe_add_func_uint16_t_u_u(g_159, 1))
        { 
            uint16_t l_231[5][1];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_231[i][j] = 65528UL;
            }
            g_19 ^= g_128;
            if (g_151[0][0])
            { 
                l_224[0] ^= g_158[0];
                l_225 = (-1L);
            }
            else
            { 
                uint8_t l_226 = 0xE0L;
                int32_t l_230 = (-1L);
                l_230 = ((g_128 ^= ((l_227[1] = l_226) >= (safe_lshift_func_uint16_t_u_u((l_224[0] >= (l_8[1] ^= g_151[0][0])), 8)))) , 1L);
                g_19 = (l_231[3][0] && g_19);
            }
        }
        if (l_8[1])
        { 
            uint32_t l_237 = 6UL;
            int32_t l_258 = 0x4488EE7CL;
            for (g_19 = 12; (g_19 <= (-29)); g_19 = safe_sub_func_int16_t_s_s(g_19, 5))
            { 
                int32_t l_236 = 3L;
                l_237 = (g_19 & ((safe_sub_func_int32_t_s_s(l_225, (g_155 = (l_236 = ((l_236 | ((g_158[0] & g_19) , g_154)) , l_236))))) >= g_218));
                l_236 = (safe_mul_func_int8_t_s_s(g_171, 2UL));
            }
            g_155 = (65535UL ^ (safe_add_func_int64_t_s_s(g_158[0], (7UL <= (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(1UL, 0x544CB16BL)), l_225))))));
            for (g_19 = 18; (g_19 != (-11)); g_19--)
            { 
                uint32_t l_254 = 0xC49979F6L;
                l_206 ^= ((g_259 = (((((safe_mul_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u((l_258 &= (g_257 = (0x033F47E5L < (((safe_lshift_func_uint8_t_u_u((l_254 >= l_8[1]), 1)) & (((safe_add_func_uint8_t_u_u((l_224[1] & (-1L)), 2UL)) , g_171) > 18446744073709551615UL)) , g_218)))), 0x666CL)) <= 0L) | 0x778E50C8L) < 1L) && g_155), l_237)) | 0x15DDL) != g_151[0][0]) , g_154) ^ g_104[0])) >= l_237);
            }
        }
        else
        { 
            const uint64_t l_281 = 6UL;
            l_8[0] = ((g_155 <= 0x5359L) && g_75[0][0]);
            g_155 = (safe_add_func_int64_t_s_s(0x6FD85EE549EA4207LL, (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(g_158[0], ((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((0x7999FF8B330E336DLL == (l_280 = (safe_lshift_func_uint16_t_u_u(g_53, 0)))))) , g_53), g_109)) , g_159))))), g_151[0][0])), g_155)), g_53)), l_281)), g_109))));
            l_206 = l_227[0];
        }
    }
    g_284++;
    return g_159;
}



static int64_t  func_4(int64_t  p_5, uint32_t  p_6, int64_t  p_7)
{ 
    uint32_t l_139 = 18446744073709551615UL;
    int32_t l_148 = 0x874BDA33L;
    int32_t l_149[4];
    int32_t l_150 = (-10L);
    uint16_t l_175[2];
    int i;
    for (i = 0; i < 4; i++)
        l_149[i] = 0x94393331L;
    for (i = 0; i < 2; i++)
        l_175[i] = 0x78F7L;
    g_19 = (g_151[0][0] |= ((((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_150 &= (safe_mod_func_uint16_t_u_u(65526UL, (safe_mod_func_uint8_t_u_u((l_149[1] = ((safe_mul_func_int16_t_s_s(((((l_139++) >= (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(3UL, g_109)), (l_148 = (l_148 >= l_148)))) ^ l_149[2]), 0UL))) | 1L) != g_109), g_75[0][0])) >= l_149[2])), p_6))))) > g_19), 7)) , 0L), g_104[0])) ^ g_128) || g_109) >= g_75[0][0]));
    for (p_5 = 1; (p_5 >= 0); p_5 -= 1)
    { 
        int8_t l_152 = 0x34L;
        int32_t l_157 = 0x258A0805L;
        for (g_19 = 1; (g_19 >= 0); g_19 -= 1)
        { 
            int32_t l_153 = 0xFEBFBDA8L;
            int32_t l_156[1][3][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_156[i][j][k] = (-1L);
                }
            }
            --g_159;
            for (g_53 = 0; (g_53 <= 1); g_53 += 1)
            { 
                int i, j;
                if (g_151[g_19][p_5])
                    break;
            }
        }
        for (g_154 = 0; g_154 < 5; g_154 += 1)
        {
            for (p_6 = 0; p_6 < 2; p_6 += 1)
            {
                g_151[g_154][p_6] = 0xCB4500EEL;
            }
        }
        for (g_155 = 0; (g_155 <= 1); g_155 += 1)
        { 
            int8_t l_170 = 1L;
            int32_t l_172[3][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
            int i, j;
            if ((safe_mul_func_int16_t_s_s(((l_172[0][1] = ((((safe_mul_func_uint16_t_u_u((p_6 , (l_149[0] = (g_171 = (((l_150 |= p_5) | (safe_rshift_func_int8_t_s_u(l_149[2], 0))) && ((l_157 = (safe_lshift_func_uint8_t_u_s((l_170 &= (((p_5 , l_149[0]) < 18446744073709551607UL) , l_157)), p_6))) || (-1L)))))), l_152)) ^ p_7) | g_158[0]) , 0xD8F89870L)) <= p_5), 3L)))
            { 
                l_172[2][1] &= (((safe_sub_func_uint8_t_u_u(l_175[0], ((safe_lshift_func_int8_t_s_u((0xBCEFL || (safe_mul_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((0x7578L || (safe_rshift_func_uint16_t_u_u((0x56L > p_7), 12))), 1L)) || p_5) >= 0x3850L), l_152))), l_170)) && l_175[0]))) == g_75[0][0]) & 0x40L);
            }
            else
            { 
                l_172[0][1] = p_6;
            }
            l_149[2] = l_157;
        }
    }
    return g_151[0][0];
}



static const uint8_t  func_13(uint32_t  p_14, int32_t  p_15, uint64_t  p_16, uint32_t  p_17, int16_t  p_18)
{ 
    const int32_t l_30[4][4] = {{0x81720D70L,0x81720D70L,0x81720D70L,0x81720D70L},{0x81720D70L,0x81720D70L,0x81720D70L,0x81720D70L},{0x81720D70L,0x81720D70L,0x81720D70L,0x81720D70L},{0x81720D70L,0x81720D70L,0x81720D70L,0x81720D70L}};
    uint32_t l_31 = 0x4F78D7CBL;
    int i, j;
    p_15 = func_20(p_17, p_16, ((safe_div_func_int8_t_s_s(g_19, (safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(g_19, l_30[2][1])) < l_31), p_16)))) ^ p_18));
    return l_31;
}



static int32_t  func_20(const int32_t  p_21, int32_t  p_22, uint8_t  p_23)
{ 
    int16_t l_34 = 0x2A04L;
    int32_t l_40 = (-8L);
    int32_t l_74 = 1L;
    int32_t l_100 = 0xF9A51C30L;
    for (p_22 = 29; (p_22 < 0); --p_22)
    { 
        int32_t l_45 = 0x786FF529L;
        int32_t l_46 = 0x2EFE8E60L;
        int32_t l_48 = 1L;
        l_34 = p_23;
        for (p_23 = 13; (p_23 < 55); p_23 = safe_add_func_uint64_t_u_u(p_23, 5))
        { 
            uint32_t l_39 = 8UL;
            const uint16_t l_47 = 0UL;
            int32_t l_58 = 0x1B3B3333L;
            int32_t l_59 = 0x4B440417L;
            l_48 ^= ((0x7D6446BDL ^ (((p_21 < (safe_lshift_func_uint16_t_u_u((l_40 = (l_39 |= l_34)), (l_46 ^= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_19, p_22)), l_45)))))) && (-1L)) || g_19)) <= l_47);
            l_59 = ((1UL && (((safe_rshift_func_int16_t_s_u((g_53 , (l_48 &= (safe_mul_func_uint8_t_u_u(1UL, ((safe_rshift_func_int8_t_s_s((l_58 = l_39), g_19)) && g_53))))), 15)) != l_39) == l_34)) && 0x56L);
        }
        g_75[0][0] = ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((l_74 = (safe_unary_minus_func_uint32_t_u(((l_40 = (p_22 && (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-1L), ((~((0xE3L | (safe_sub_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((g_19 = ((((g_53 ^ 0x46F9L) || p_22) >= g_19) ^ 0UL)), g_53)) | l_48) != l_45), p_22))) || p_23)) && 1UL))), 0x0DL)))) , p_21)))), 0x5F1EL)), 1)) <= g_53);
    }
    if (((((l_34 != ((+(safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_53, (safe_mul_func_uint8_t_u_u(((255UL && 1UL) >= 0x593EB6B3L), l_34)))) , 0x96L), p_22))) && 0xBFL)) < 1UL) | 0x8B63L) > l_40))
    { 
        int32_t l_85 = 0L;
        for (p_23 = 3; (p_23 < 47); p_23++)
        { 
            uint32_t l_96 = 0UL;
            uint8_t l_97 = 253UL;
            g_19 = (l_74 = g_53);
            if (l_85)
            { 
                int64_t l_91 = 0x2C75BC6281B62C3DLL;
                if (g_53)
                    break;
                l_74 |= (((g_19 >= (safe_sub_func_uint16_t_u_u((l_40 ^= ((safe_rshift_func_int8_t_s_u(((l_96 = (~(0xE652606BDE5E333ALL != (l_91 , (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(0xF4D7L, l_34)) , p_23), 0x964400D4L)))))) != 0UL), g_19)) == g_75[0][0])), l_97))) < g_19) & (-2L));
            }
            else
            { 
                g_19 = (safe_mul_func_int16_t_s_s(l_100, (g_53 , (safe_lshift_func_int8_t_s_u(g_75[0][0], 5)))));
            }
        }
    }
    else
    { 
        int16_t l_103 = 0x473AL;
        int32_t l_112 = 0x7D4ADD7DL;
        l_40 = ((g_104[0] |= l_103) , (((-3L) & (g_109 = ((safe_add_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((l_103 > 0xEC61L) != p_21), p_22)) != (-5L)), p_21)) ^ p_21))) < g_53));
        for (p_23 = 0; (p_23 <= 0); p_23 += 1)
        { 
            int32_t l_121 = 0x461AF475L;
            l_40 = (safe_rshift_func_int8_t_s_s(l_103, 7));
            l_112 &= g_75[0][0];
            for (l_100 = 0; (l_100 <= 0); l_100 += 1)
            { 
                int i, j;
                g_19 = g_75[l_100][l_100];
                l_74 = (((+(g_19 = (~(6UL < ((0x3AD1FF0D8C8EF010LL ^ (safe_mul_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_121 |= (safe_add_func_int32_t_s_s((0x8A3BAB64809F77A2LL > (0xCAF28F66L <= 0x81D3E15EL)), 1UL))), l_34)) < p_22), g_53))) <= 0xDCCCL))))) && 65531UL) > 0xDAL);
            }
        }
        g_128 &= (g_19 = (((((safe_add_func_uint8_t_u_u(l_112, ((safe_lshift_func_uint8_t_u_u((((((l_74 & ((((((p_23 , ((safe_mul_func_uint16_t_u_u(((l_40 = 255UL) ^ 246UL), 1UL)) , l_112)) < 0xE8L) && p_22) && l_112) >= l_34) < g_19)) <= g_104[0]) && 0x8A02802FD5892074LL) | 1L) && g_109), 2)) >= 0xDAAEL))) < g_53) , p_22) == l_100) & g_53));
    }
    return g_104[0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);

    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_151[i][j], "g_151[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
