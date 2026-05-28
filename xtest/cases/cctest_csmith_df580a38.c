// SPDX-License-Identifier: MIT
// cctest_csmith_df580a38.c --- cctest case csmith_df580a38 (csmith seed 3747088952)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3eb31ad2 */
/* @exp_ticks 0x35cc */

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

// Options:   -s 3747088952 -o /tmp/csmith_gen_84qbv1_1/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int8_t g_2 = 0L;
static int32_t g_41 = 0x0525C7E4L;
static uint64_t g_47 = 18446744073709551615UL;
static uint32_t g_52[3] = {0x8B1460DEL,0x8B1460DEL,0x8B1460DEL};
static int16_t g_86 = 0xCFCBL;
static uint64_t g_122 = 0xFF4590BACEAEEF4ALL;
static int32_t g_128 = 9L;
static uint32_t g_130 = 0x70792702L;
static uint8_t g_179 = 1UL;
static uint32_t g_191[4] = {9UL,9UL,9UL,9UL};
static int32_t g_196 = (-1L);
static int64_t g_197 = 1L;
static int32_t g_204 = 0x027B00CAL;
static uint8_t g_243 = 246UL;
static int8_t g_272[4] = {0xEAL,0xEAL,0xEAL,0xEAL};



static int8_t  func_1(void);
static uint64_t  func_3(uint32_t  p_4, uint64_t  p_5, const uint32_t  p_6, int16_t  p_7, int32_t  p_8);
static int32_t  func_25(uint64_t  p_26, const int64_t  p_27, uint8_t  p_28, int16_t  p_29, uint32_t  p_30);




static int8_t  func_1(void)
{ 
    uint32_t l_9 = 0xAD38DC53L;
    int64_t l_10 = 1L;
    int32_t l_216 = 1L;
    int32_t l_217 = (-1L);
    uint16_t l_287[4][2];
    int16_t l_288[4][2] = {{0x033DL,(-3L)},{0x033DL,(-3L)},{0x033DL,(-3L)},{0x033DL,(-3L)}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_287[i][j] = 65526UL;
    }
    if ((0xFDL <= (((g_2 != (((func_3(((((0xD4L ^ 0x3FL) > g_2) == g_2) , l_9), l_9, l_9, l_10, l_9) ^ 0x154B7D5238762AC0LL) ^ 0x36C1BE63L) , g_122)) && 0x57L) && l_9)))
    { 
        uint8_t l_215[1][4] = {{1UL,1UL,1UL,1UL}};
        int i, j;
        l_217 = ((g_179 = ((g_204 = l_9) ^ (safe_mod_func_uint64_t_u_u(((((!(safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((~(l_216 ^= (g_130 & (1UL != l_215[0][2])))), g_41)) , (-1L)) , 0x07BBL), 0)) <= l_9), g_179))) && l_215[0][3]) & 0x1AL) || (-1L)), 0xF389892B93441F19LL)))) & g_196);
        g_41 = (safe_div_func_int64_t_s_s((((!(safe_mod_func_int32_t_s_s((l_9 ^ (safe_sub_func_uint32_t_u_u(g_191[0], ((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(0x4938FFB3L)), (-1L))) == 4L) , l_9) ^ 0UL)))), g_191[0]))) < (-3L)) > l_217), g_41));
    }
    else
    { 
        int32_t l_247 = 9L;
        int32_t l_278[3];
        int i;
        for (i = 0; i < 3; i++)
            l_278[i] = 0x38292736L;
        if ((safe_unary_minus_func_uint32_t_u((g_191[1] = (safe_lshift_func_uint8_t_u_u((l_217 = (((((safe_mul_func_int16_t_s_s((-2L), (safe_div_func_int32_t_s_s((g_41 = (safe_rshift_func_uint16_t_u_s((g_204 != ((!(safe_rshift_func_uint16_t_u_s((~(safe_add_func_uint16_t_u_u((g_243++), (((~((g_41 > g_179) > 0x69L)) | 7L) && g_128)))), l_10))) & (-1L))), 12))), l_9)))) , l_247) ^ g_130) <= l_217) , l_217)), l_216))))))
        { 
            int64_t l_248 = 0x70149C1215010C31LL;
            l_248 = (g_47 | g_196);
        }
        else
        { 
            uint32_t l_265 = 0xBC0DA515L;
            int32_t l_271 = 9L;
            for (g_130 = (-27); (g_130 < 45); g_130++)
            { 
                int32_t l_255[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_255[i][j] = 0L;
                }
                g_196 |= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((g_191[0] != l_255[0][1]), (~((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(l_265, l_216)), 7)), l_9)) > l_217), l_247)) & (-1L)) ^ l_217) ^ l_265)))) != g_47), g_122));
                g_41 |= ((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_247, (l_271 &= (l_9 != l_9)))), 12)))) == l_265);
                g_272[2] = l_265;
            }
            if (l_271)
                goto lbl_277;
lbl_277:
            for (g_243 = 0; (g_243 != 52); ++g_243)
            { 
                g_196 = g_2;
                l_247 ^= (g_41 >= (safe_mod_func_uint32_t_u_u(0x5F3529B9L, g_197)));
            }
            g_41 = l_278[1];
        }
    }
    l_288[2][1] = (l_10 <= (safe_div_func_uint16_t_u_u(((0x2DE1L && ((safe_add_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x7DDE3D06L, g_196)), g_196)) , l_287[0][0]), g_191[3])) <= l_287[0][0])) , 0xDBBEL), l_9)));
    return l_10;
}



static uint64_t  func_3(uint32_t  p_4, uint64_t  p_5, const uint32_t  p_6, int16_t  p_7, int32_t  p_8)
{ 
    uint32_t l_11 = 4294967295UL;
    int32_t l_12 = 0xDC99CDF9L;
    int32_t l_123 = (-9L);
    int32_t l_194 = (-7L);
    int32_t l_195 = 0xD6B0DCD2L;
    int32_t l_198[1];
    int i;
    for (i = 0; i < 1; i++)
        l_198[i] = 0xB30F1BEDL;
    l_12 = l_11;
    if (((0xDF11BBB4L > (safe_div_func_int8_t_s_s(0xFEL, g_2))) , g_2))
    { 
        uint32_t l_21[1][4] = {{0xC75DAA08L,0xC75DAA08L,0xC75DAA08L,0xC75DAA08L}};
        int32_t l_22[3];
        uint32_t l_44 = 8UL;
        int8_t l_45 = 0x50L;
        int32_t l_46 = (-1L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_22[i] = 9L;
        l_22[2] = (((safe_lshift_func_int8_t_s_s(p_4, (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((l_21[0][3] = (l_12 = (!l_11))))), p_6)))) != 0x0955205300CE3D97LL) , p_6);
        if ((safe_mod_func_int32_t_s_s(l_11, func_25((l_46 = ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((g_41 = g_2), (safe_lshift_func_int16_t_s_u((l_22[2] &= 0xB49AL), p_7)))) & l_44), l_21[0][3])) == 0L) , 65531UL), 1)) | 0xDA3BL), l_45)) < l_44)), l_12, p_7, l_11, g_47))))
        { 
            return g_2;
        }
        else
        { 
            return g_41;
        }
    }
    else
    { 
        int64_t l_129[2];
        int32_t l_131[3][2] = {{0xA2D9A964L,0xA2D9A964L},{0xA2D9A964L,0xA2D9A964L},{0xA2D9A964L,0xA2D9A964L}};
        int16_t l_142 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_129[i] = 0x7417BD2F3BE12964LL;
        l_123 &= ((safe_div_func_int8_t_s_s((((((g_122 = (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((0x8437L >= (p_6 , ((safe_div_func_int8_t_s_s(p_6, l_12)) | 0x7DL))) , 1L), p_7)), p_8))) , g_52[2]) <= g_47) != g_2) , g_52[1]), g_52[2])) ^ p_6);
        l_131[0][1] = ((safe_rshift_func_uint8_t_u_u((g_130 = (((g_128 = (safe_rshift_func_int16_t_s_s((l_11 & ((p_4 ^ p_8) > l_12)), g_86))) & l_129[1]) | 0x5D92485DL)), 4)) ^ g_47);
        if (((g_2 > ((p_7 > 0L) , p_7)) < 0xC0FF22B7L))
        { 
            uint64_t l_139 = 0x722EB29FA79916B1LL;
            l_123 = (safe_lshift_func_uint16_t_u_s(0x9878L, 7));
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            { 
                int32_t l_138 = 0x13E0D8C1L;
                int i;
                g_128 = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((l_138 ^= 0x93L), 6)) >= ((l_12 &= (0x11L | g_52[(g_41 + 1)])) && p_7)) , g_122), g_128));
            }
            for (p_7 = 2; (p_7 >= 0); p_7 -= 1)
            { 
                l_139--;
            }
        }
        else
        { 
            int32_t l_145 = (-1L);
            int64_t l_146 = (-1L);
            if (((p_5 = ((l_142 != ((safe_add_func_uint8_t_u_u((l_145 && (((g_52[1] && l_12) < l_146) <= l_11)), g_2)) >= 5L)) >= l_123)) , 1L))
            { 
                return l_11;
            }
            else
            { 
                l_123 &= (g_122 , (g_128 ^= ((((-1L) < (((safe_div_func_uint16_t_u_u(g_41, 0xBB46L)) < l_12) | p_6)) , l_131[0][1]) && g_41)));
                return g_52[2];
            }
        }
    }
    if ((safe_sub_func_uint64_t_u_u(l_11, (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(l_123, 8)) | g_2) < g_122), l_123)))))
    { 
        uint32_t l_155 = 0UL;
        int32_t l_168 = 0xDBE92475L;
        int32_t l_180[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_180[i][j] = (-9L);
        }
        g_41 |= l_155;
        l_12 = (safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((l_123 = (((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_2 , (((g_128 & (safe_sub_func_int32_t_s_s(0x0FB40517L, l_123))) > g_128) | l_168)), g_122)), g_52[2])), p_6)) < 4UL) , p_4)), l_11)), g_52[2]));
        if ((((l_180[0][1] = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((0x72EEF0EDL <= (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(0L, g_179)), l_12))), l_11)) < 0xD8D885D17D95D16DLL), 0x7AL)), g_2))) & 0UL) && 65533UL))
        { 
            int32_t l_181 = 0xC0103155L;
            l_181 = l_168;
            g_41 = (((safe_mul_func_int8_t_s_s(0x45L, (((safe_div_func_uint64_t_u_u(((!(p_8 , (safe_add_func_uint64_t_u_u(((((g_179 ^= (safe_mul_func_uint8_t_u_u(((g_191[0] ^= g_86) , p_7), 0x7CL))) < p_7) < 0xE6D3FFD8805FBE3FLL) >= l_180[0][1]), 18446744073709551608UL)))) , l_180[0][3]), g_2)) <= g_2) < l_11))) > p_7) || l_180[0][3]);
        }
        else
        { 
            l_180[0][1] &= (((l_123 ^= (p_8 <= (safe_lshift_func_int8_t_s_s((-7L), 7)))) , 0xDCL) && 0L);
            l_123 = g_191[3];
            l_180[0][2] = ((-5L) < l_12);
        }
    }
    else
    { 
        uint64_t l_199 = 1UL;
        ++l_199;
        g_41 = (l_195 ^= (((l_199 || (safe_sub_func_int64_t_s_s((-1L), g_130))) >= l_199) < (-1L)));
    }
    return g_86;
}



static int32_t  func_25(uint64_t  p_26, const int64_t  p_27, uint8_t  p_28, int16_t  p_29, uint32_t  p_30)
{ 
    uint64_t l_66 = 0xE3979D795BCD5918LL;
    int32_t l_103 = (-1L);
    int32_t l_113[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_113[i][j] = (-1L);
    }
    for (g_41 = 21; (g_41 >= 4); g_41--)
    { 
        for (p_29 = 0; (p_29 < 16); ++p_29)
        { 
            g_52[2]--;
            return g_2;
        }
    }
    for (p_29 = 10; (p_29 != (-20)); p_29 = safe_sub_func_uint64_t_u_u(p_29, 3))
    { 
        int16_t l_63 = 0xDFEFL;
        uint32_t l_64 = 5UL;
        int32_t l_85 = 0x9FB3884EL;
        if (((((safe_sub_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s((0UL < ((safe_lshift_func_int8_t_s_s((0x69L ^ ((((p_27 != g_2) ^ l_63) >= g_47) == g_47)), l_63)) < g_52[2])), l_63)) , l_64), 0x1CA9286DF497A847LL)) >= (-10L)) != 1UL) , l_63))
        { 
            int32_t l_65 = 0x92179B10L;
            int32_t l_79 = (-6L);
            int8_t l_80 = 0x50L;
            l_65 &= l_64;
            ++l_66;
            if ((safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((0x75AC3517D3E8228FLL || l_63), (safe_mod_func_int8_t_s_s(p_27, 0x80L)))) || l_79), p_26)) >= l_80), g_2)) , g_52[2]), 0x6125F897L)))
            { 
                uint64_t l_87 = 0x7AF0C8B8AFECA800LL;
                int16_t l_88 = 1L;
                l_88 = (l_65 > (((253UL == ((g_86 = (safe_lshift_func_int16_t_s_s((l_85 = g_52[2]), 14))) <= l_87)) >= p_26) < g_52[2]));
            }
            else
            { 
                l_65 = p_29;
                return p_30;
            }
        }
        else
        { 
            int16_t l_93 = 0x19E2L;
            int32_t l_104[2];
            int i;
            for (i = 0; i < 2; i++)
                l_104[i] = (-1L);
            g_41 = (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((g_47 = l_93) & (+((safe_sub_func_uint64_t_u_u(l_66, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((((l_104[1] ^= (safe_add_func_int64_t_s_s(((((l_93 > p_30) & 4294967295UL) <= g_41) >= l_66), l_103))) <= l_66) ^ l_93) , l_104[1]), p_28)), g_86)))) || 0x5EL))), (-1L))) != g_52[1]), g_52[2]));
        }
        l_85 &= g_41;
    }
    g_41 &= (safe_sub_func_uint8_t_u_u(0x76L, (((((safe_add_func_int64_t_s_s(((9L != ((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((1UL > p_29) >= l_103), g_2)), l_103)) > (-8L))) , l_113[0][1]), p_30)) < p_28) , 0x76L) != 0x11L) != 0L)));
    return l_66;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_272[i], "g_272[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
