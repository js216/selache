// SPDX-License-Identifier: MIT
// cctest_csmith_5e2bee6b.c --- cctest case csmith_5e2bee6b (csmith seed 1579937387)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb85ae7d9 */

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

// Options:   -s 1579937387 -o /tmp/csmith_gen_dae8nmss/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2 = 0x25B9B55BL;
static uint8_t g_10 = 0UL;
static int32_t g_33[5][2] = {{0x8D96753FL,0L},{0x73DF2EF5L,0x8D96753FL},{0xB30498D2L,0xB30498D2L},{0xB30498D2L,0x8D96753FL},{0x73DF2EF5L,0L}};
static int64_t g_35 = 0xF8CD3BED162C5D17LL;
static uint64_t g_37 = 0xAFBEBF0A0CD95FF7LL;
static uint32_t g_72 = 8UL;
static int32_t g_92 = 8L;
static uint8_t g_93 = 0xD3L;
static uint8_t g_94 = 253UL;
static int16_t g_129 = 0xA217L;
static int64_t g_158[5][2] = {{0x821C9B562ECAC6B4LL,0x821C9B562ECAC6B4LL},{0x19D3F86503DD1F41LL,0x821C9B562ECAC6B4LL},{0x821C9B562ECAC6B4LL,0x19D3F86503DD1F41LL},{0x821C9B562ECAC6B4LL,0x821C9B562ECAC6B4LL},{0x19D3F86503DD1F41LL,0x821C9B562ECAC6B4LL}};
static uint32_t g_235 = 0UL;
static int64_t g_253 = 0x7ED4FC6649FB2015LL;
static const uint32_t g_263[5][1][2] = {{{0x976ACA0DL,0x976ACA0DL}},{{0x976ACA0DL,0x976ACA0DL}},{{0x976ACA0DL,0x976ACA0DL}},{{0x976ACA0DL,0x976ACA0DL}},{{0x976ACA0DL,0x976ACA0DL}}};
static uint8_t g_278 = 0xC9L;
static uint64_t g_295 = 0x8292663875D3E32FLL;
static int16_t g_377[2] = {(-7L),(-7L)};



static int32_t  func_1(void);
static int8_t  func_5(uint8_t  p_6, uint8_t  p_7, uint16_t  p_8, int16_t  p_9);
static const int64_t  func_14(int32_t  p_15, const uint32_t  p_16, uint32_t  p_17, uint64_t  p_18, uint32_t  p_19);
static int32_t  func_23(uint64_t  p_24, int32_t  p_25);




static int32_t  func_1(void)
{ 
    int32_t l_36 = 1L;
    int32_t l_340 = 0xE90412A0L;
    int32_t l_345 = 0x7CA57BEBL;
    for (g_2 = 0; (g_2 == 24); g_2 = safe_add_func_uint32_t_u_u(g_2, 7))
    { 
        const uint8_t l_20 = 1UL;
        int32_t l_34 = (-1L);
        int32_t l_333 = 0x8BF8A446L;
        uint64_t l_352 = 0xB866B586D9411513LL;
        l_340 |= ((func_5(((g_10--) , ((+g_10) >= func_14(g_10, l_20, (safe_sub_func_int16_t_s_s((func_23((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((~(--g_37)) | (g_10 <= l_20)), g_2)) || l_36), l_36)), 0x70CCL)), l_20) || 4294967287UL), g_10)), l_20, l_20))), g_263[0][0][0], l_333, l_36) ^ 0x52L) & l_333);
        g_33[0][1] = (safe_lshift_func_int16_t_s_s(1L, ((safe_mod_func_int16_t_s_s((((l_345 , ((((l_333 > (safe_mod_func_int32_t_s_s(g_129, g_253))) == 0L) & l_34) | l_333)) & 0xDBL) & 5L), l_20)) && l_34)));
        l_340 = (g_33[2][0] = ((safe_div_func_uint32_t_u_u(((1UL && (safe_add_func_uint32_t_u_u(0xE2769096L, ((l_352 <= ((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_295, g_129)), 1UL)), g_158[1][0])) <= 0UL)) || g_235)))) != g_92), g_10)) <= g_235));
    }
    for (g_129 = (-20); (g_129 < (-4)); g_129++)
    { 
        int64_t l_380 = (-10L);
        g_2 = (g_33[0][1] ^= ((safe_div_func_int16_t_s_s(g_295, (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((g_377[0] = (safe_mod_func_int64_t_s_s(0L, g_35))), (safe_mod_func_uint32_t_u_u(g_158[1][0], g_263[4][0][1])))), g_92)), l_345)) && 0xC1E316D0FEA91B57LL), l_380)) == 0x16L) ^ g_253), 5UL)) <= 1UL), g_10)))) , 0x29CD995CL));
    }
    return g_129;
}



static int8_t  func_5(uint8_t  p_6, uint8_t  p_7, uint16_t  p_8, int16_t  p_9)
{ 
    int8_t l_334 = 0xE6L;
    int32_t l_335[1][2];
    uint32_t l_336 = 8UL;
    int32_t l_339[5] = {1L,1L,1L,1L,1L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_335[i][j] = 0L;
    }
    ++l_336;
    return l_339[3];
}



static const int64_t  func_14(int32_t  p_15, const uint32_t  p_16, uint32_t  p_17, uint64_t  p_18, uint32_t  p_19)
{ 
    int64_t l_250 = (-9L);
    int32_t l_251 = 0x7EB81725L;
    int32_t l_252[4];
    uint8_t l_257 = 1UL;
    uint16_t l_264[5][3] = {{8UL,8UL,8UL},{0UL,0UL,0UL},{8UL,8UL,8UL},{0UL,0UL,0UL},{8UL,8UL,8UL}};
    const int16_t l_318 = 8L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_252[i] = 0x6BB79693L;
    if ((((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((l_252[0] = (l_251 = (safe_lshift_func_uint16_t_u_s((((g_33[0][1] == (safe_mod_func_uint16_t_u_u((((-1L) && (((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(g_33[4][1], (l_250 && g_93))), g_129)) , p_15) ^ (-10L))) , l_250), l_250))) , l_250) == l_250), 10)))) < l_250), l_250)), 0x412D541CL)) > l_250), p_17)) || g_253) | 0x66L) & p_17) & p_19))
    { 
        const uint8_t l_254 = 0x32L;
        l_252[0] &= 0x73CEC42EL;
        g_33[4][0] = ((l_252[0] = ((l_254 && (safe_rshift_func_int8_t_s_s((((g_94 , l_257) < (safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_252[0], l_254)), g_37))))) != g_263[0][0][0]), 6))) <= l_250)) , l_264[4][0]);
    }
    else
    { 
        int32_t l_288 = 0x82A31379L;
        int32_t l_291[3];
        int64_t l_308[2][5];
        int i, j;
        for (i = 0; i < 3; i++)
            l_291[i] = 0x571923A1L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_308[i][j] = 2L;
        }
        if (p_18)
        { 
            int16_t l_277 = 1L;
            int16_t l_289 = 0xBA97L;
            int32_t l_294 = 0x6D3DB75EL;
            if ((+l_251))
            { 
                int32_t l_279 = (-4L);
                g_92 |= (((safe_add_func_uint64_t_u_u((0xBE09L & ((g_158[2][0] |= (safe_sub_func_int32_t_s_s((!((safe_add_func_uint64_t_u_u(g_253, (((g_278 ^= ((safe_mod_func_uint16_t_u_u((0x79A8L > (((safe_mul_func_int8_t_s_s(0xFCL, p_19)) || 0x8A341D8F6A000359LL) == p_15)), 0x2236L)) ^ l_277)) , l_279) || 0UL))) , 65535UL)), p_18))) <= 0x43417B0AFA02BDA3LL)), g_235)) || p_18) >= l_279);
                g_33[0][1] = g_33[0][1];
                g_33[0][1] = (g_92 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((l_252[2] ^= (l_279 |= ((safe_lshift_func_uint16_t_u_u(0x4FE0L, 4)) < 0x66AEB5C9L))), (((4294967295UL > g_253) != g_72) > 0L))) >= g_93), g_158[4][1])));
            }
            else
            { 
                int32_t l_286 = 0x438A0F69L;
                int32_t l_287 = (-8L);
                int32_t l_290 = 1L;
                int32_t l_292 = 0xF9B407F3L;
                int32_t l_293 = 0xD13F60D9L;
                g_295--;
            }
            if (((safe_sub_func_uint8_t_u_u((g_33[2][1] ^ (safe_add_func_int16_t_s_s((l_294 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((g_33[0][1] > (g_72 = (((safe_mod_func_int8_t_s_s((0xFB84L && l_264[1][0]), l_277)) != p_19) < p_18))), p_15)), g_295)) < p_15)), l_291[2]))), l_289)) < 0xA902L))
            { 
                uint64_t l_317 = 18446744073709551615UL;
                l_294 ^= (l_308[0][4] > ((safe_lshift_func_uint16_t_u_u(g_263[2][0][0], 9)) < (safe_div_func_uint32_t_u_u((0xD341B89557B5D56ELL && (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_317, 5UL)), 3))), p_19))));
            }
            else
            { 
                return l_318;
            }
        }
        else
        { 
            return g_263[0][0][0];
        }
        for (l_250 = (-4); (l_250 <= (-18)); l_250 = safe_sub_func_int16_t_s_s(l_250, 5))
        { 
            uint8_t l_329 = 0xD7L;
            for (l_251 = 26; (l_251 != (-19)); l_251 = safe_sub_func_uint64_t_u_u(l_251, 9))
            { 
                g_92 |= (1L < (0xD2L | (g_94 = (p_19 > ((safe_add_func_uint64_t_u_u(((0xDFL >= g_235) == 1L), 0L)) ^ l_288)))));
            }
            for (p_18 = 11; (p_18 < 52); p_18++)
            { 
                uint64_t l_330 = 0x7116D0E17F5D895FLL;
                l_329 = (safe_add_func_uint32_t_u_u(((-1L) & (0x6D38L != 6L)), (-6L)));
                l_330--;
                l_251 = (g_33[0][1] = (-1L));
            }
        }
    }
    return l_264[4][0];
}



static int32_t  func_23(uint64_t  p_24, int32_t  p_25)
{ 
    const int32_t l_64 = 0x41824674L;
    int64_t l_65[4][1];
    int32_t l_66 = 0xB2A12551L;
    int32_t l_67 = 0x70E7C4BDL;
    int16_t l_95 = 0xF7A6L;
    uint16_t l_135[5][2] = {{3UL,6UL},{0xCB7BL,0xCB7BL},{0xCB7BL,6UL},{3UL,9UL},{6UL,9UL}};
    uint32_t l_147 = 1UL;
    int16_t l_173[1][3][2] = {{{0x1E50L,0x1E50L},{0x1E50L,0x1E50L},{0x1E50L,0x1E50L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_65[i][j] = (-9L);
    }
    if (((((safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(g_33[0][1], 13)) > ((safe_lshift_func_uint8_t_u_s(252UL, 3)) || ((safe_div_func_int16_t_s_s((+(safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((+(safe_add_func_int64_t_s_s(l_64, ((l_64 && p_25) ^ l_64)))), l_64)), 2)) != l_64), 0x4C90L))), 0xF0CFL)) , l_65[3][0]))) ^ 0UL), l_64)) != 0xA917L), p_25)), l_64)) >= l_64) ^ 0x29L), 0xD2926A09L)) != p_24) < g_2) <= g_35))
    { 
        int64_t l_96 = 0x1152F54C42697258LL;
        int32_t l_105[1][4] = {{0xDE9127F4L,0xDE9127F4L,0xDE9127F4L,0xDE9127F4L}};
        int32_t l_107 = 0x9581CA57L;
        int64_t l_145[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_145[i] = 0xB2AC3FE914D0EF1DLL;
        l_67 = (l_66 &= (g_33[4][0] = l_64));
        if ((safe_add_func_uint16_t_u_u((((p_25 && g_35) ^ (l_67 |= (safe_mod_func_int16_t_s_s(((g_72 = g_37) <= l_66), 1UL)))) | (-1L)), 0x34D7L)))
        { 
            uint8_t l_91[1][4];
            int32_t l_106 = 0L;
            int32_t l_108 = 4L;
            int64_t l_128[3][5][4] = {{{0x3EA5DEB7CA390A41LL,6L,0xD7DDD927223651BELL,0x7E953CD9AAC9FE4BLL},{0xE570C895DEA71313LL,0x81B78F42CBA3753CLL,(-1L),0x863468C50A102B46LL},{0x7E953CD9AAC9FE4BLL,(-1L),1L,0xD7DDD927223651BELL},{0x7E953CD9AAC9FE4BLL,0L,(-1L),0x782A0B0D0ED264C9LL},{0xE570C895DEA71313LL,0xD7DDD927223651BELL,0xD7DDD927223651BELL,0xE570C895DEA71313LL}},{{0x3EA5DEB7CA390A41LL,0x3F40280C152E9544LL,0xE570C895DEA71313LL,3L},{1L,0x782A0B0D0ED264C9LL,6L,0x41CD86053C14B3F5LL},{1L,0x863468C50A102B46LL,6L,0x41CD86053C14B3F5LL},{0x3F40280C152E9544LL,0x782A0B0D0ED264C9LL,0x469C6BC52267D0ECLL,3L},{0L,0x3F40280C152E9544LL,0L,0xE570C895DEA71313LL}},{{6L,0xD7DDD927223651BELL,0x7E953CD9AAC9FE4BLL,0x782A0B0D0ED264C9LL},{0x41CD86053C14B3F5LL,0L,3L,0xD7DDD927223651BELL},{9L,(-1L),3L,0x863468C50A102B46LL},{0x41CD86053C14B3F5LL,0x81B78F42CBA3753CLL,0x7E953CD9AAC9FE4BLL,0x7E953CD9AAC9FE4BLL},{6L,6L,0L,9L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_91[i][j] = 247UL;
            }
            l_96 = (((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_94 |= (g_93 &= ((safe_add_func_int16_t_s_s(0x4D98L, ((safe_rshift_func_int16_t_s_s(((g_33[4][1] = p_24) < (safe_div_func_uint16_t_u_u((g_92 = (safe_add_func_int32_t_s_s((l_91[0][1] || 4294967294UL), l_91[0][1]))), (-1L)))), g_10)) & g_37))) , g_35))), 1)), 0x72F71451L)), 14)), 0x82L)), l_95)) < g_10) > 0x78L);
            l_108 = (g_92 = (l_107 ^= (l_106 = (safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((-1L), (l_105[0][0] = (safe_rshift_func_int8_t_s_u(p_24, 1))))), (((((g_2 , g_92) <= l_91[0][1]) < g_92) == g_37) ^ p_25))) | p_24), l_96)))));
            for (l_107 = 0; (l_107 <= 0); l_107 += 1)
            { 
                int16_t l_115 = 0xB9B4L;
                int32_t l_130 = 0x7A6E0921L;
                l_105[0][0] = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_unary_minus_func_int8_t_s(g_35)) > ((((l_115 || (--g_93)) >= (safe_rshift_func_int16_t_s_s(l_107, 8))) <= (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_129 = ((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((1UL >= 18446744073709551614UL), g_2)), l_105[0][0])) < l_128[1][4][3])), p_25)), l_115))) & l_65[3][0])) | p_25))), (-6L))) <= l_115), g_33[2][1]));
                g_33[0][1] = 0x710A75E5L;
                l_130 = g_33[1][0];
            }
        }
        else
        { 
            uint8_t l_144 = 0x09L;
            int64_t l_146 = 0xB5E4FDE8E729AE47LL;
            int8_t l_148 = 0xFBL;
            int32_t l_149 = (-9L);
            l_149 = (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x67L, (((l_135[3][1] = 0x5C4B4462L) & ((l_148 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((l_107 <= ((l_146 = (l_67 = (safe_div_func_int8_t_s_s((((((0xAEFD05EA4B618F96LL >= 18446744073709551612UL) <= 0x7E59L) > l_144) < l_145[1]) <= g_33[2][0]), 0x82L)))) , 0xFCL)), 6)) <= 8L) > 1L) != l_64), l_147)), 7))) >= 7UL)) , 252UL))), 7)) , (-3L)) < g_93);
            l_105[0][0] = ((l_148 & (g_2 , (l_107 && p_24))) & p_24);
        }
    }
    else
    { 
        int16_t l_171 = 0x5D6DL;
        int32_t l_172 = 4L;
        for (g_37 = (-2); (g_37 <= 55); ++g_37)
        { 
            int32_t l_154 = 0xECE23272L;
            g_92 = ((safe_div_func_int8_t_s_s(l_135[1][1], (g_158[1][0] = (l_154 , (safe_mod_func_uint16_t_u_u((p_25 && (!((0x3F48115FL != g_37) <= p_25))), (-8L))))))) < g_93);
        }
        l_67 &= (((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(p_24, (safe_sub_func_uint64_t_u_u((l_66 |= (safe_rshift_func_uint16_t_u_s(0x3ED1L, ((safe_rshift_func_uint16_t_u_s((p_24 < (((((safe_div_func_uint64_t_u_u(((l_172 = ((p_25 < g_158[1][0]) < l_171)) , p_25), (-1L))) & p_24) | l_173[0][2][1]) > g_158[0][1]) > 0x30EC2AC0L)), 14)) , l_64)))), 0UL)))) | p_24), 0x2F7DL)) < l_171) > l_171);
        for (g_37 = 0; (g_37 == 57); ++g_37)
        { 
            uint64_t l_176[4][1] = {{9UL},{0x442C49E95A25E2A7LL},{9UL},{0x442C49E95A25E2A7LL}};
            int i, j;
            l_176[1][0]--;
        }
    }
    if (g_93)
    { 
        for (l_66 = (-16); (l_66 <= (-25)); l_66 = safe_sub_func_uint32_t_u_u(l_66, 1))
        { 
            for (g_92 = 0; (g_92 <= 1); g_92 += 1)
            { 
                int i, j;
                return g_158[(g_92 + 2)][g_92];
            }
        }
    }
    else
    { 
        uint8_t l_205 = 255UL;
        int32_t l_219 = 0xEF65FC75L;
        for (g_94 = 8; (g_94 == 50); g_94 = safe_add_func_int8_t_s_s(g_94, 8))
        { 
            uint16_t l_204 = 0UL;
            for (g_72 = 0; (g_72 >= 11); g_72 = safe_add_func_int32_t_s_s(g_72, 3))
            { 
                int32_t l_206 = 1L;
                int32_t l_207 = 0xF6C1FB7AL;
                int32_t l_208 = 0L;
                l_208 = ((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((p_24 != g_35) , (safe_add_func_int32_t_s_s(((l_207 = (safe_mul_func_int16_t_s_s(g_72, ((safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(((l_205 = l_204) > 0x677AL))) > (-2L)), 2)), 6UL)) ^ l_206), g_10)) || 0x69L), p_25)) == 0x78CBL) < g_94), g_94)) && 0UL)))) < 7UL), (-1L)))), 0x7F47EB60L)), 0x03L)) && 0x46L);
            }
        }
        for (g_35 = 0; (g_35 < (-30)); g_35 = safe_sub_func_uint16_t_u_u(g_35, 5))
        { 
            int8_t l_218 = (-6L);
            g_33[2][1] &= (l_205 > (((safe_add_func_int16_t_s_s(1L, (safe_mul_func_int16_t_s_s((~18446744073709551615UL), 0x2547L)))) , g_10) == 9L));
            l_219 = (0x2B89L > (((safe_mul_func_int16_t_s_s((p_24 != (l_66 = ((g_158[1][1] = l_218) > ((((g_33[4][1] <= p_25) , 1L) , l_218) | 18446744073709551615UL)))), 0x0569L)) > 0xCAL) || g_35));
            for (g_129 = 0; (g_129 >= 0); g_129 -= 1)
            { 
                int i, j;
                g_33[4][0] = l_65[(g_129 + 3)][g_129];
                l_219 ^= ((((safe_add_func_uint8_t_u_u((~0x5FL), (safe_div_func_uint32_t_u_u(((g_37 ^= (8L & ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((g_235 |= ((safe_mul_func_uint16_t_u_u((0xB59524D3L > ((safe_lshift_func_int8_t_s_s((-1L), 1)) ^ l_65[(g_129 + 3)][g_129])), 0x4486L)) > 0xC7L)), p_25)), 1)), 5)) > g_129))) || 0xF3864CD2CDE1B850LL), 1L)))) && g_235) , p_24) != 0x8772C455D1EC5715LL);
            }
        }
    }
    return p_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_263[i][j][k], "g_263[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_377[i], "g_377[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
