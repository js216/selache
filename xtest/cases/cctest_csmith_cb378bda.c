// SPDX-License-Identifier: MIT
// cctest_csmith_cb378bda.c --- cctest case csmith_cb378bda (csmith seed 3409415130)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc1b5dc72 */
/* @exp_ticks 0x3af3 */

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

// Options:   -s 3409415130 -o /tmp/csmith_gen_vobe4wb7/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = (-1L);
static int8_t g_14 = 5L;
static int32_t g_35 = 5L;
static int32_t g_40 = 6L;
static int32_t g_49 = 0x69D0863EL;
static int64_t g_50 = 8L;
static int16_t g_68 = (-1L);
static uint8_t g_81[2][3] = {{253UL,253UL,253UL},{0UL,0UL,0UL}};
static int16_t g_82 = 0x3A76L;
static int64_t g_83 = 0L;
static uint16_t g_89 = 0x3846L;
static int32_t g_118[3][4] = {{7L,(-6L),7L,7L},{(-6L),(-6L),3L,(-6L)},{(-6L),7L,7L,(-6L)}};
static uint32_t g_144[1][3] = {{6UL,6UL,6UL}};
static int8_t g_152 = 0xAEL;
static int16_t g_157[4][3] = {{0x1917L,0x1917L,0x1917L},{0x539BL,0x539BL,0x539BL},{0x1917L,0x1917L,0x1917L},{0x539BL,0x539BL,0x539BL}};
static uint8_t g_159 = 255UL;
static uint8_t g_180 = 0x90L;
static uint8_t g_201 = 248UL;



static uint8_t  func_1(void);
static const uint16_t  func_17(const uint16_t  p_18, uint32_t  p_19, const uint8_t  p_20, int64_t  p_21, uint64_t  p_22);
static uint8_t  func_25(int16_t  p_26, uint32_t  p_27, int32_t  p_28, int16_t  p_29);




static uint8_t  func_1(void)
{ 
    int8_t l_16 = (-10L);
    int32_t l_158 = 0xFB27AD41L;
    int32_t l_192 = 0x2CB2754EL;
    for (g_2 = 0; (g_2 < (-22)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 7))
    { 
        int32_t l_15 = 0x2579253AL;
        uint32_t l_155 = 4294967289UL;
        int32_t l_156 = (-9L);
        uint8_t l_179 = 0x89L;
        uint16_t l_200[1];
        int i;
        for (i = 0; i < 1; i++)
            l_200[i] = 0x7510L;
        if ((safe_add_func_uint64_t_u_u((l_156 = ((!(((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((l_15 = (g_14 = 0L)), 4)) != l_16) , ((func_17((safe_rshift_func_int16_t_s_u(((func_25(g_2, l_16, g_2, g_14) >= g_2) <= (-10L)), l_16)), l_16, g_14, l_16, g_2) ^ l_15) , l_16)), l_155)), g_49)) || 0xF77D20874A55526DLL) >= 0UL)) >= l_16)), l_155)))
        { 
            --g_159;
        }
        else
        { 
            int32_t l_164[1][1];
            int32_t l_191[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
            uint8_t l_199 = 254UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_164[i][j] = 0xBF1337B5L;
            }
            l_164[0][0] = (((0xE1L && (g_152 ^ 0L)) & g_40) != g_40);
            g_180 ^= (safe_div_func_uint64_t_u_u((g_159 ^ (g_144[0][1] = ((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(0xE2L, ((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_68 = ((safe_rshift_func_uint8_t_u_u((g_81[0][1] = 0x1BL), g_118[2][3])) > g_35)), 2)), 0L)) ^ g_89) , 65528UL), 3)) , g_144[0][1]))) > l_164[0][0]) >= l_179), g_144[0][0])) > g_152))), 8UL));
            g_201 |= (safe_add_func_uint16_t_u_u(l_158, (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_158, (--g_81[0][0]))), ((safe_mul_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(l_199, 0UL)) != 0x4F4D21A5L) , 0xC73BF6A40AF48925LL) >= l_179), l_158)) | (-8L)))), l_200[0])), l_192))));
        }
    }
    g_2 = ((g_159 >= g_83) >= (l_192 = (((g_118[2][3] , g_159) <= l_158) <= g_14)));
    g_2 = ((safe_mul_func_uint16_t_u_u((l_192 | (l_158 = g_14)), (safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_157[1][0], l_16)) ^ l_192), l_192)))) ^ 0xD732L);
    return g_68;
}



static const uint16_t  func_17(const uint16_t  p_18, uint32_t  p_19, const uint8_t  p_20, int64_t  p_21, uint64_t  p_22)
{ 
    uint32_t l_31 = 0xFBD10CAAL;
    int32_t l_51 = 0x8C8A251AL;
    uint8_t l_54[2][2] = {{0UL,0UL},{0UL,0UL}};
    int64_t l_67 = 0x1695EA989989A98ELL;
    int32_t l_85[4][2];
    int32_t l_109 = 7L;
    int32_t l_130 = 0L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_85[i][j] = 0L;
    }
    l_31 &= 1L;
    for (g_14 = 3; (g_14 <= (-21)); g_14 = safe_sub_func_uint16_t_u_u(g_14, 1))
    { 
        int16_t l_46 = 0xE404L;
        uint64_t l_47 = 1UL;
        int32_t l_48[4] = {1L,1L,1L,1L};
        int i;
        g_35 = (+p_22);
        for (p_19 = 2; (p_19 != 11); p_19 = safe_add_func_uint64_t_u_u(p_19, 1))
        { 
            int64_t l_53 = 0xF2BBA2D3C5EBB4EELL;
            int32_t l_69[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_69[i][j] = 0x18344157L;
            }
            if (((g_40 = (safe_add_func_uint8_t_u_u(249UL, p_19))) <= ((safe_mul_func_uint16_t_u_u((!((safe_rshift_func_uint8_t_u_s((l_46 = 0xD5L), l_31)) != 0x96BC712BL)), l_47)) >= 18446744073709551615UL)))
            { 
                int64_t l_52 = 1L;
                --l_54[1][0];
                l_51 = (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_22, 10)) < 0x275F98A97D63F7CELL), (-9L))), 65535UL));
                if (g_50)
                    continue;
            }
            else
            { 
                int8_t l_80 = (-6L);
                int32_t l_84 = 0x61CFA8ABL;
                int32_t l_86 = 1L;
                int32_t l_87 = (-1L);
                int32_t l_88 = (-2L);
                l_69[0][2] = (0x74D4L >= ((-1L) ^ ((safe_lshift_func_int8_t_s_s(((g_68 = ((((((safe_lshift_func_uint8_t_u_s(((((0xFC5446EDL == 1UL) , g_49) , 0xCDL) || l_67), l_46)) >= l_46) < 0UL) == 0x4BFCC0C20EB8FC40LL) ^ p_20) > g_49)) | p_20), g_49)) != g_49)));
                g_81[0][0] = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((0UL < 1UL), ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_80 > 0xB73DL) != 0xA97CAD95L), l_53)), 1)) , l_46))), g_68)), p_19));
                g_89++;
            }
            l_85[3][1] = g_50;
            for (g_40 = 7; (g_40 > 19); ++g_40)
            { 
                if (p_22)
                    break;
            }
        }
        for (l_67 = 1; (l_67 >= 0); l_67 -= 1)
        { 
            uint32_t l_94 = 7UL;
            for (l_31 = 0; (l_31 <= 1); l_31 += 1)
            { 
                int i, j;
                l_94--;
            }
            for (p_22 = 0; (p_22 <= 1); p_22 += 1)
            { 
                int i, j;
                l_85[(l_67 + 1)][l_67] = ((safe_mul_func_uint8_t_u_u(0xE4L, (g_81[l_67][l_67] = ((((safe_rshift_func_uint8_t_u_s(0UL, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_85[(l_67 + 2)][l_67], 3)), p_20)), (-9L))))) & 0x21F8E690L) , p_18) || 6UL)))) || l_54[1][1]);
                l_85[(l_67 + 1)][l_67] = ((safe_mul_func_uint16_t_u_u(l_109, g_81[0][1])) != l_67);
            }
        }
    }
    for (p_22 = 0; (p_22 == 28); p_22 = safe_add_func_int64_t_s_s(p_22, 3))
    { 
        uint8_t l_120 = 248UL;
        int32_t l_135 = 8L;
        for (g_35 = 0; (g_35 == 9); g_35 = safe_add_func_uint16_t_u_u(g_35, 6))
        { 
            int8_t l_116[3][2];
            int32_t l_117 = 0xBDBB176AL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_116[i][j] = 0xA4L;
            }
            for (g_82 = 0; (g_82 != 6); g_82 = safe_add_func_int8_t_s_s(g_82, 1))
            { 
                int32_t l_119 = 0x8A8B4E14L;
                g_118[2][3] ^= ((g_83 ^= (p_21 |= (l_116[2][1] < (l_117 = p_18)))) , l_116[2][1]);
                l_120 |= (l_119 = (-1L));
                l_119 = (safe_mod_func_uint64_t_u_u(l_85[3][1], g_68));
            }
        }
        if (((!(safe_rshift_func_uint16_t_u_u((((((((safe_lshift_func_int16_t_s_s((g_82 = ((safe_rshift_func_uint16_t_u_s(g_2, p_22)) , ((l_109 < p_22) , 1L))), g_118[1][0])) | 0x2D38L) , l_120) | g_118[2][3]) && g_118[2][1]) > p_19) && l_130), g_14))) && p_21))
        { 
            uint64_t l_131 = 0x9DB3CA632B0D1CDFLL;
            l_131 = (l_85[1][1] = p_22);
        }
        else
        { 
            uint16_t l_132 = 0x70F8L;
            l_85[2][1] = 0x3F392410L;
            l_135 |= (l_132 , (0xBE94L && (safe_div_func_uint32_t_u_u(g_49, 0xCBA7A3D7L))));
            return l_132;
        }
        for (l_67 = 4; (l_67 <= 16); l_67 = safe_add_func_int32_t_s_s(l_67, 7))
        { 
            if ((g_81[0][0] == (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((p_22 <= ((((safe_mod_func_int16_t_s_s(g_81[1][0], 0xB5C8L)) & (-1L)) & 1L) || l_31)), p_22)), l_120))))
            { 
                uint8_t l_149 = 0x2DL;
                g_144[0][1]--;
                l_135 = g_81[0][2];
                l_135 = ((safe_lshift_func_int8_t_s_s(g_81[0][0], 1)) & (((--l_149) && p_20) && 1UL));
            }
            else
            { 
                g_152 ^= g_35;
            }
            for (l_130 = 0; (l_130 != (-4)); l_130 = safe_sub_func_int64_t_s_s(l_130, 4))
            { 
                return g_50;
            }
        }
    }
    return l_31;
}



static uint8_t  func_25(int16_t  p_26, uint32_t  p_27, int32_t  p_28, int16_t  p_29)
{ 
    uint16_t l_30[1][2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_30[i][j] = 5UL;
    }
    l_30[0][0] = g_14;
    return p_29;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_118[i][j], "g_118[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_144[i][j], "g_144[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_157[i][j], "g_157[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
