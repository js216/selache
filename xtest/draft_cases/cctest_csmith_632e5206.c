// SPDX-License-Identifier: MIT
// cctest_csmith_632e5206.c --- cctest case csmith_632e5206 (csmith seed 1663980038)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x43f2e2d8 */

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

// Options:   -s 1663980038 -o /tmp/csmith_gen_6i2cxsup/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2 = (-3L);
static int64_t g_6[4][4] = {{0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL},{0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL},{0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL},{0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL,0x4D2EDC7555B7CEFALL}};
static int32_t g_7 = 0xC14173BFL;
static int32_t g_9 = (-9L);
static uint16_t g_11 = 0x1AAEL;
static uint32_t g_14 = 3UL;
static int64_t g_40 = (-1L);
static int32_t g_49 = 0x326D35DFL;
static uint32_t g_50 = 0x6B299B5FL;
static int64_t g_51 = (-1L);
static uint64_t g_113 = 0x313C76A600E36C3ALL;
static uint32_t g_121[2] = {1UL,1UL};
static int64_t g_130 = (-8L);
static int64_t g_132 = (-1L);
static uint32_t g_133 = 18446744073709551615UL;
static uint16_t g_154[2][3][4] = {{{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL}},{{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL},{65528UL,65528UL,65528UL,65528UL}}};
static uint32_t g_173 = 0xCC5C9A55L;



static uint64_t  func_1(void);
static uint8_t  func_27(uint8_t  p_28, int32_t  p_29, int32_t  p_30, const int32_t  p_31, uint64_t  p_32);
static int8_t  func_36(uint32_t  p_37);
static uint32_t  func_38(uint16_t  p_39);




static uint64_t  func_1(void)
{ 
    int16_t l_5 = (-1L);
    int32_t l_8 = 0x2FA4AD74L;
    int32_t l_10 = 0x9570A50BL;
lbl_176:
    for (g_2 = (-28); (g_2 >= 16); g_2 = safe_add_func_int8_t_s_s(g_2, 9))
    { 
        if (g_2)
            break;
        ++g_11;
        for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
        { 
            g_14++;
        }
    }
    for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
    { 
        int32_t l_33 = 0x3C3AE507L;
        int32_t l_172[5][3] = {{3L,(-1L),(-1L)},{1L,0xCDD1267AL,(-1L)},{0x0CE1991DL,(-1L),1L},{1L,1L,1L},{(-1L),0x0CE1991DL,(-1L)}};
        int i, j;
        if ((safe_div_func_int8_t_s_s(g_9, (safe_rshift_func_uint8_t_u_s(g_6[1][2], 5)))))
        { 
            uint32_t l_21 = 0x045DCEFBL;
            for (l_5 = 3; (l_5 >= 0); l_5 -= 1)
            { 
                int32_t l_22 = 0x6574B604L;
                int i, j;
                l_21 = g_6[l_5][l_5];
                l_22 = g_2;
                if (g_6[l_5][l_5])
                    continue;
            }
        }
        else
        { 
            int16_t l_26 = (-1L);
            l_172[0][2] = (safe_sub_func_uint64_t_u_u(g_14, (+(l_26 < (func_27(((g_11 , ((l_33 = g_6[1][0]) > l_10)) , l_33), l_10, g_6[3][2], g_11, g_9) && l_26)))));
        }
        g_173--;
        g_2 = (g_132 | l_33);
        for (l_10 = 0; (l_10 <= 3); l_10 += 1)
        { 
            int i, j;
            if (g_6[g_9][l_10])
                break;
            if (g_6[g_9][g_9])
                break;
            for (l_33 = 0; (l_33 <= 3); l_33 += 1)
            { 
                int i, j;
                g_2 = g_6[l_10][l_10];
                if (g_14)
                    goto lbl_176;
            }
        }
    }
    g_9 |= l_8;
    return l_10;
}



static uint8_t  func_27(uint8_t  p_28, int32_t  p_29, int32_t  p_30, const int32_t  p_31, uint64_t  p_32)
{ 
    uint64_t l_72 = 18446744073709551608UL;
    int32_t l_73 = (-6L);
    int32_t l_74[3];
    uint32_t l_78 = 0x40AC15C2L;
    int64_t l_120[1];
    uint64_t l_123 = 0x148970CE46C46319LL;
    int i;
    for (i = 0; i < 3; i++)
        l_74[i] = 0L;
    for (i = 0; i < 1; i++)
        l_120[i] = 3L;
    for (p_32 = 5; (p_32 < 49); p_32 = safe_add_func_uint64_t_u_u(p_32, 4))
    { 
        int8_t l_44 = 0xF3L;
        int32_t l_54 = 0x60A95A2EL;
        int32_t l_55 = 0xBD8E7029L;
        l_55 = (func_36((l_54 = func_38(((((((g_40 = (-3L)) != ((((0xBF094577L | (-6L)) & (+(safe_add_func_int8_t_s_s(((0x575FL & g_9) || g_11), p_28)))) != 1L) < l_44)) <= g_6[1][0]) <= 1UL) || 0xE8F8L) > g_11)))) < l_44);
        l_74[2] = (safe_sub_func_int64_t_s_s(((l_73 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_40, (safe_rshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((((4294967295UL | ((safe_sub_func_int64_t_s_s((-8L), ((g_7 |= ((g_2 <= 1L) == p_29)) < 0UL))) | 6L)) != l_72) , 0x0179E4C0C5DC7473LL), 1UL)) & l_54) | l_72), 4)))) & 0L), p_29)) , g_9), p_28)), 2))) && 1UL), 0x6AB799115BA09F94LL));
    }
    if (p_30)
    { 
        uint64_t l_75[1];
        int32_t l_100[4];
        uint8_t l_153 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_75[i] = 1UL;
        for (i = 0; i < 4; i++)
            l_100[i] = 1L;
        if ((0x6CE7L > (((l_75[0] |= 0x777EF5E1L) < (safe_lshift_func_uint8_t_u_u(l_72, (((-9L) | l_78) , 1UL)))) , 0x9E47L)))
        { 
            int16_t l_91[4][4][2] = {{{1L,0x0576L},{0x0576L,1L},{0x8768L,(-9L)},{0x8768L,1L}},{{0x0576L,0x0576L},{1L,0x8768L},{(-9L),0x8768L},{1L,0x0576L}},{{0x0576L,1L},{0x8768L,(-9L)},{0x8768L,1L},{0x0576L,0x0576L}},{{1L,0x8768L},{(-9L),0x8768L},{1L,0x0576L},{0x0576L,1L}}};
            int32_t l_122 = 4L;
            int i, j, k;
            if ((l_78 == ((0x9AD35785L || (safe_mul_func_int8_t_s_s((g_6[1][2] != p_29), l_75[0]))) > 1UL)))
            { 
                l_74[0] ^= (safe_add_func_uint64_t_u_u(g_7, (safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(l_78, g_51)), ((!(safe_sub_func_int8_t_s_s((~((-8L) || 0x1B93L)), g_6[2][0]))) == l_91[0][1][0])))));
                return l_91[0][2][1];
            }
            else
            { 
                l_74[2] = ((safe_lshift_func_int16_t_s_s((g_6[0][1] & 1L), 1)) , ((((((safe_unary_minus_func_int32_t_s((!(safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(l_72, l_74[2])), 7))))) | p_28) , 0xB18E11B1L) | p_30) <= l_78) , p_32));
                l_100[1] = 0x71BA0D89L;
            }
            if ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(((p_30 , l_72) & ((safe_lshift_func_int16_t_s_u((l_122 = ((g_121[1] = ((safe_mul_func_uint16_t_u_u(p_32, ((safe_lshift_func_uint8_t_u_u((++g_113), 4)) , ((((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((((p_29 == p_28) ^ 0xF0B4AB81L) < l_91[2][2][1]), g_113)) , l_72) < 0x8DL) > 9UL), g_11)) | 0x6B7A3D1CL) > 9L) != l_120[0])))) != p_29)) , 0x23CDL)), g_6[1][0])) , l_74[2])), g_6[1][2])) > p_28), g_50)) != l_75[0]), l_91[0][1][0])))
            { 
                uint64_t l_124[1][4][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_124[i][j][k] = 0x97F26D1EE2074A6ALL;
                    }
                }
                l_100[1] &= l_122;
                l_122 = l_123;
                l_100[1] = (g_7 |= (l_124[0][3][0] <= (g_49 , (safe_add_func_int16_t_s_s((((p_30 && (g_6[1][2] <= 1L)) < 0xF9CA1EE17268510ELL) >= g_49), l_100[1])))));
            }
            else
            { 
                uint8_t l_127 = 0x1BL;
                return l_127;
            }
        }
        else
        { 
            int8_t l_128 = 0xDAL;
            int32_t l_129 = 7L;
            int32_t l_131[3][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
            uint32_t l_152[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_152[i] = 0x667A4CD6L;
            g_133--;
            g_2 = ((safe_sub_func_uint32_t_u_u(l_78, (65531UL < (safe_lshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_129 |= l_72), (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_154[0][0][0] = ((((((safe_add_func_int8_t_s_s(g_2, 0x00L)) != p_30) > g_50) ^ l_152[2]) && l_153) , l_75[0])), p_28)), 0xF10F9C02L)) >= 0L), (-1L))))), l_128)) > 0x98L) != 0x8B969CE4L), p_29))))) < l_73);
        }
        for (g_40 = 0; (g_40 <= 3); g_40 += 1)
        { 
            int i;
            return l_100[g_40];
        }
        for (l_78 = 0; (l_78 != 44); l_78 = safe_add_func_uint64_t_u_u(l_78, 2))
        { 
            int8_t l_169 = 9L;
            if (g_11)
            { 
                int32_t l_170 = 8L;
                l_73 = (safe_div_func_uint32_t_u_u(((((safe_div_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((p_32 = (((p_30 = (safe_div_func_uint16_t_u_u(p_28, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((l_74[2] = g_121[0]), 7)) <= (1UL != (0x2685L ^ 0x1211L))), p_32))))) , l_169) <= p_32)) > g_130), 2)) && 1L) ^ g_121[1]), 0x1CL)) < p_28) | l_153) & l_170), p_28));
            }
            else
            { 
                return l_100[0];
            }
        }
    }
    else
    { 
        int8_t l_171 = (-6L);
        l_171 = (-1L);
    }
    g_2 = (l_74[2] = l_74[2]);
    return l_78;
}



static int8_t  func_36(uint32_t  p_37)
{ 
    return p_37;
}



static uint32_t  func_38(uint16_t  p_39)
{ 
    int16_t l_52 = 0xD714L;
    int32_t l_53 = 0x43D9D76CL;
    l_53 = ((p_39 || (((p_39 | ((((g_51 &= (safe_lshift_func_uint16_t_u_s((1UL & (g_50 = (safe_mul_func_uint8_t_u_u((p_39 && g_49), g_9)))), 7))) != g_11) & l_52) | 0x88A3L)) , l_52) ^ g_6[1][2])) | l_52);
    return l_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);

    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
