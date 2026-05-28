// SPDX-License-Identifier: MIT
// cctest_csmith_a9d3cce6.c --- cctest case csmith_a9d3cce6 (csmith seed 2849230054)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x75dc773f */
/* @exp_ticks 0x3782 */

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

// Options:   -s 2849230054 -o /tmp/csmith_gen_ocxzcu_g/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint16_t g_2 = 65526UL;
static uint64_t g_21 = 18446744073709551610UL;
static uint8_t g_41 = 255UL;
static int16_t g_45 = 0x758AL;
static int32_t g_70[3][2] = {{0x5A2E206CL,0x5A2E206CL},{0x5A2E206CL,0x5A2E206CL},{0x5A2E206CL,0x5A2E206CL}};
static int32_t g_88[2][2] = {{(-7L),(-7L)},{(-7L),(-7L)}};
static uint8_t g_91 = 255UL;
static uint32_t g_100 = 4294967290UL;
static int32_t g_101 = (-8L);
static uint32_t g_102 = 0xB034E2D8L;
static uint64_t g_119 = 0UL;
static int32_t g_134[2] = {0xA9312FBDL,0xA9312FBDL};
static uint32_t g_146[1] = {4294967295UL};
static uint32_t g_153 = 4294967293UL;
static int32_t g_158 = 1L;
static uint32_t g_182 = 0xF4735756L;



static uint8_t  func_1(void);
static uint64_t  func_7(int32_t  p_8, int16_t  p_9, const int32_t  p_10, int64_t  p_11);
static int32_t  func_12(uint8_t  p_13);




static uint8_t  func_1(void)
{ 
    int64_t l_20 = (-6L);
    uint32_t l_71 = 0x8E7029BBL;
    int32_t l_137[2][4] = {{0xCA7285EBL,0xCA7285EBL,0L,0xCA7285EBL},{0xCA7285EBL,(-1L),(-1L),0xCA7285EBL}};
    uint64_t l_155[3][4] = {{0x1D9B9EA2DD67205CLL,0x05C96C501646CDBDLL,0xC23E70AEA978AFB3LL,0x05C96C501646CDBDLL},{0x05C96C501646CDBDLL,0xACB9E1148926895FLL,0xC23E70AEA978AFB3LL,0xC23E70AEA978AFB3LL},{0x1D9B9EA2DD67205CLL,0x1D9B9EA2DD67205CLL,0x05C96C501646CDBDLL,0xC23E70AEA978AFB3LL}};
    uint32_t l_165 = 0x460F080FL;
    uint8_t l_176 = 0x85L;
    int16_t l_179 = 0x03ACL;
    int8_t l_188 = (-1L);
    int i, j;
    if (((g_2 , (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((func_7((l_71 = func_12((((safe_mod_func_int8_t_s_s((g_21 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_20, (1UL && g_2))) & g_2), 0x8AE5L))), g_2)) || g_21) , 0x04L))), l_20, g_2, g_2) <= (-10L)) , l_71), 0xF5528475ADB6E275LL)), l_20))) >= l_20))
    { 
        int64_t l_123 = (-10L);
        uint32_t l_135 = 3UL;
        int32_t l_136 = (-1L);
        l_136 = (((((safe_lshift_func_uint16_t_u_s((g_102 >= l_123), (safe_mod_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((g_134[0] &= (safe_lshift_func_int16_t_s_s(0x5E43L, 7))) | l_135), l_71)), l_20)) && g_119) == g_70[1][0]), 2UL)) ^ g_91) < 255UL), l_123)))) < l_123) , g_88[0][0]) > 0xBC6E4DE629050135LL) | 3L);
        l_137[0][2] = g_88[0][0];
    }
    else
    { 
        uint16_t l_145 = 0x203CL;
        const uint8_t l_159 = 1UL;
        int64_t l_180 = 0x38B4BADC3C1F5F02LL;
        for (l_20 = 0; (l_20 <= 1); l_20 += 1)
        { 
            int32_t l_144 = 0x9CA1EE17L;
            uint64_t l_172 = 0xBF61D406CBD5F440LL;
            int i;
            if (((((safe_div_func_int16_t_s_s((l_144 ^= ((safe_mul_func_int16_t_s_s(((0x4A6A36E0L | (safe_mod_func_uint64_t_u_u(18446744073709551610UL, (0x7E28L | 6UL)))) , 0x1D13L), g_134[l_20])) > g_70[0][0])), g_88[1][0])) >= l_145) <= g_146[0]) & 0x884595356471FAE9LL))
            { 
                int32_t l_156[4] = {0x2A0AEB11L,0x2A0AEB11L,0x2A0AEB11L,0x2A0AEB11L};
                int32_t l_157 = 0xD77F32F3L;
                int i;
                g_158 ^= ((((((g_100 , (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_156[3] ^= ((safe_mul_func_int16_t_s_s(((g_153 = 0xF8CB8F1EL) ^ (!((g_88[0][0] ^ 3UL) && g_70[1][0]))), g_88[0][0])) != l_155[2][1])) , g_88[0][0]), l_20)), g_119))) == g_88[0][0]) < g_70[2][0]) <= 0UL) <= 0L) | l_157);
                l_165 = ((l_159 & 0x0DE40056L) , (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((+g_45), g_21)) || g_41) || g_102), 15)));
                l_156[3] = (l_156[3] < (g_2++));
            }
            else
            { 
                uint8_t l_175 = 0xE8L;
                int16_t l_181 = 0xD185L;
                g_158 = ((g_2 |= ((((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((l_172 ^ (l_71 & (safe_div_func_uint32_t_u_u(g_134[1], g_146[0])))), g_134[0])), l_155[1][2])) != 0x1412115AF14B1F07LL) <= (-8L)) <= l_175)) , l_176);
                g_158 &= (((safe_div_func_uint8_t_u_u(l_20, (g_134[l_20] & (((g_119 &= ((l_175 || l_179) > l_180)) > g_153) && l_159)))) ^ g_134[1]) ^ 0xB42118B5L);
                l_137[0][1] = l_181;
            }
            g_182++;
            for (g_45 = 0; (g_45 <= 1); g_45 += 1)
            { 
                int i, j;
                return g_88[l_20][l_20];
            }
        }
        for (l_176 = 0; (l_176 != 10); l_176 = safe_add_func_uint64_t_u_u(l_176, 5))
        { 
            return g_158;
        }
    }
    g_158 &= (!((((((0x4EA75E2CL ^ (0x90L < 0x65L)) != l_188) , g_134[0]) != g_134[0]) || 0xE4L) ^ 0xF0D76A68AF11E84FLL));
    return g_134[0];
}



static uint64_t  func_7(int32_t  p_8, int16_t  p_9, const int32_t  p_10, int64_t  p_11)
{ 
    uint8_t l_72 = 0x55L;
    uint32_t l_99[3];
    int32_t l_120 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_99[i] = 0x091208AFL;
    if ((((g_2 || ((l_72 = 0L) , (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_72 >= l_72), 0)), l_72)))) >= p_8) | 0xDE17L))
    { 
        int8_t l_89[4] = {0x22L,0x22L,0x22L,0x22L};
        int32_t l_110[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_110[i][j] = 0xDF6EF7D1L;
        }
        for (g_2 = 0; (g_2 <= 1); g_2 += 1)
        { 
            const uint16_t l_86 = 2UL;
            int32_t l_87 = 0L;
            if (g_41)
            { 
                uint32_t l_77[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_77[i] = 18446744073709551608UL;
                l_77[2]--;
            }
            else
            { 
                l_87 = (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s((g_21 , ((p_9 < (safe_rshift_func_int8_t_s_s(0xC7L, 7))) || l_86)), g_2)), p_8));
            }
            for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
            { 
                int64_t l_90[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_90[i] = 0x86CE7EF2A96A4AF1LL;
                g_88[0][0] = p_8;
                g_91--;
            }
        }
        g_102 |= ((g_100 = (safe_rshift_func_uint8_t_u_s(0x94L, ((p_11 = l_89[1]) == (safe_rshift_func_int16_t_s_u((((+l_72) , l_89[2]) , l_99[0]), 13)))))) | g_101);
        for (g_91 = 0; (g_91 > 16); g_91++)
        { 
            uint64_t l_109[3][3] = {{0UL,18446744073709551615UL,18446744073709551615UL},{0UL,18446744073709551615UL,0x26CF9C76A8768DD0LL},{18446744073709551615UL,0x26CF9C76A8768DD0LL,0x26CF9C76A8768DD0LL}};
            int i, j;
            l_110[0][2] = (((safe_mul_func_uint8_t_u_u((l_72 ^ (l_99[0] ^ ((safe_mod_func_int16_t_s_s(g_88[0][0], g_70[2][0])) == p_11))), l_109[1][1])) != 65535UL) == g_70[2][1]);
            for (g_21 = 1; (g_21 <= 41); g_21++)
            { 
                g_119 = ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((g_2 < ((p_10 & (l_89[2] | 0x8F0AL)) & l_109[1][1])) || l_72), (-1L))), p_9)) >= 5UL), l_109[2][2])) != 0x6930L);
                if (g_2)
                    break;
            }
            if (l_109[1][1])
                break;
        }
    }
    else
    { 
        l_120 = 0L;
    }
    return p_8;
}



static int32_t  func_12(uint8_t  p_13)
{ 
    uint64_t l_26 = 0UL;
    int16_t l_42 = 0L;
    uint32_t l_43 = 0x420EA1BCL;
    int32_t l_44 = 0x511904E2L;
    uint8_t l_65 = 5UL;
    g_45 = ((safe_sub_func_int16_t_s_s(((l_44 ^= (safe_add_func_int8_t_s_s(((l_26 , (((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((((((safe_mod_func_uint8_t_u_u((g_41 = (safe_rshift_func_int8_t_s_s((g_21 | 18446744073709551615UL), 1))), 0x7EL)) < g_21) < l_26) , g_41) != g_2), l_26)) && 0L) & g_21), p_13)), p_13)), l_42)) != l_43) <= 0x396DL), 0L)) , g_2) , l_26)) < 0x971CF717L), 0xD7L))) , p_13), p_13)) == p_13);
    g_70[2][0] = ((~(safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((l_65 = (l_44 = g_45)) == (0xC9ADL && (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((((((l_42 >= 0x40E8L) <= p_13) ^ l_42) == (-9L)) < g_2) >= g_2), l_42)), g_21)))), 0x47FD326D35DF961DLL)), g_41)), p_13)), g_21)) == 0x4BF8E16DL) , (-4L)), p_13)), l_26)), g_45)), l_26)), 0L))) > g_41);
    return l_26;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_134[i], "g_134[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
