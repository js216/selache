// SPDX-License-Identifier: MIT
// cctest_csmith_23f8c02c.c --- cctest case csmith_23f8c02c (csmith seed 603504684)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x54796a2c */

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

// Options:   -s 603504684 -o /tmp/csmith_gen_1g0n4w4i/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint16_t g_10[2] = {0xC309L,0xC309L};
static uint64_t g_20[1][4] = {{0xBAEF6E229EDCA8FELL,0xBAEF6E229EDCA8FELL,0xBAEF6E229EDCA8FELL,0xBAEF6E229EDCA8FELL}};
static int32_t g_39 = 0xB13B1067L;
static uint16_t g_60[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static uint8_t g_68 = 0x19L;
static uint64_t g_70 = 1UL;
static uint32_t g_87 = 0x186717EFL;
static int16_t g_100[1] = {1L};
static int8_t g_115 = 1L;
static uint8_t g_140 = 0x8EL;
static int32_t g_142 = 0xCC771BE4L;
static int64_t g_179[1][2][5] = {{{0xA6E62E55A95E6A16LL,(-1L),0xA6E62E55A95E6A16LL,(-1L),0xA6E62E55A95E6A16LL},{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
static uint64_t g_180 = 0xACEA086712C952AELL;
static uint64_t g_189[5] = {7UL,7UL,7UL,7UL,7UL};
static uint8_t g_192 = 0xB3L;



static int32_t  func_1(void);
static int32_t  func_2(const uint32_t  p_3);
static uint32_t  func_4(int8_t  p_5, uint64_t  p_6, int32_t  p_7, int8_t  p_8, int8_t  p_9);
static uint64_t  func_11(uint64_t  p_12);




static int32_t  func_1(void)
{ 
    int8_t l_21[4] = {6L,6L,6L,6L};
    int32_t l_22 = 1L;
    int32_t l_27 = 0x7626A9D9L;
    const int16_t l_114 = 0x1754L;
    uint32_t l_136[2][4][1] = {{{2UL},{2UL},{18446744073709551607UL},{2UL}},{{2UL},{18446744073709551607UL},{2UL},{2UL}}};
    uint64_t l_143 = 0x3F18804D593052EALL;
    const int16_t l_166 = 1L;
    int32_t l_205 = 1L;
    int i, j, k;
    if (func_2(func_4(g_10[0], func_11((+(l_22 = ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((g_10[0] > ((safe_lshift_func_int8_t_s_u((l_21[3] = ((g_20[0][2] = (g_10[1] , g_10[0])) , g_10[0])), g_10[0])) != g_10[0])), l_22)) <= l_22) , g_20[0][2]), g_10[0])) || g_10[1])))), l_27, g_10[0], l_27)))
    { 
        uint16_t l_105 = 0UL;
        int16_t l_118 = (-4L);
        int32_t l_137 = 0x9DE2F31DL;
        l_27 ^= (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((l_105 , g_20[0][2]), ((((((l_22 ^= (l_21[3] , (0x89C8F7CEBB1B1B7DLL & g_68))) > 1L) , l_21[3]) & g_100[0]) && l_105) > 65529UL))) > g_60[3][1]), l_105));
        g_115 = (g_39 = (0x8D9BCA39L <= (safe_lshift_func_int16_t_s_u(g_10[0], ((((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((((0x7FB2C377C446C13ALL != (safe_sub_func_int8_t_s_s(0x91L, l_27))) , g_70) || l_105) , 0x9C48L), l_21[0])), l_21[3])) < 0x12C4L) > g_87) && l_114)))));
        for (l_27 = 0; (l_27 != 3); l_27++)
        { 
            int8_t l_135 = 0xC1L;
            for (g_87 = 0; (g_87 <= 1); g_87 += 1)
            { 
                l_118 = (g_10[0] == (g_100[0] != g_39));
            }
            l_137 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_39, 2)) != ((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((((((0x75BB60882539F82ELL >= (l_22 >= ((((g_68 > l_135) | l_105) ^ l_136[0][3][0]) >= 0xB4L))) <= (-8L)) < l_21[0]) < l_105) > l_114), l_105)), l_136[0][3][0])) , l_136[0][3][0])), 2)), g_39)), g_100[0])), g_100[0]));
        }
    }
    else
    { 
        int64_t l_141 = 0xB66E786C87C1BE54LL;
        for (g_115 = 19; (g_115 == (-10)); g_115 = safe_sub_func_uint16_t_u_u(g_115, 1))
        { 
            g_39 = g_60[0][0];
            l_141 = g_140;
        }
    }
    --l_143;
    if ((g_20[0][0] > (safe_div_func_int16_t_s_s(((l_136[0][3][0] != 0xA4L) != (((g_10[1] ^= 65532UL) <= l_136[0][3][0]) == l_21[3])), g_87))))
    { 
        int64_t l_159 = 0x2BEBD04F644B9F4ELL;
        int32_t l_167 = (-1L);
        uint16_t l_168 = 0x5899L;
        if (((safe_add_func_int64_t_s_s((((((((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_115, (~(l_167 = (safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((l_159 = g_87), ((safe_add_func_int8_t_s_s(0x3BL, (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(l_166, g_87)) > g_20[0][2]), g_68)))) < l_167))) | 0L), l_167)))))), l_168)) != l_136[0][3][0]) > l_22) != (-1L)) || g_10[0]) ^ 0x58E85FBC085BF0B6LL) > 0x9AF0E199F5E48977LL), g_20[0][1])) , l_27))
        { 
            const int32_t l_178[4][1] = {{0xC1FD706CL},{0xC1FD706CL},{0xC1FD706CL},{0xC1FD706CL}};
            int i, j;
            for (g_142 = 0; (g_142 <= (-7)); g_142--)
            { 
                int32_t l_171 = 0x4F43482BL;
                l_171 = l_171;
            }
            g_39 &= (safe_add_func_int32_t_s_s((1L < (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_87, (0x71L <= ((g_140 >= 1UL) ^ g_100[0])))) , l_178[1][0]), g_10[1]))), 0x125C51E8L));
        }
        else
        { 
            uint8_t l_188 = 255UL;
            for (l_167 = 0; (l_167 >= 0); l_167 -= 1)
            { 
                ++g_180;
            }
            for (g_39 = (-17); (g_39 == (-17)); g_39 = safe_add_func_int8_t_s_s(g_39, 8))
            { 
                uint8_t l_185[3][4][1] = {{{5UL},{0x24L},{5UL},{0x24L}},{{5UL},{0x24L},{5UL},{0x24L}},{{5UL},{0x24L},{5UL},{0x24L}}};
                int i, j, k;
                return l_185[0][2][0];
            }
            for (g_39 = 0; (g_39 >= (-10)); g_39 = safe_sub_func_uint32_t_u_u(g_39, 7))
            { 
                g_189[1] = ((g_115 |= l_166) > l_188);
                g_192 |= ((-1L) == (safe_add_func_int8_t_s_s(l_188, (0x77158421D5CA3CFALL == g_115))));
            }
        }
    }
    else
    { 
        int32_t l_206 = 0x50B4F93AL;
        int32_t l_207[4] = {0x6744F569L,0x6744F569L,0x6744F569L,0x6744F569L};
        int i;
        g_39 = (safe_sub_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((-5L), (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((g_87 < (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_20[0][2], (0x8A8D5B53L >= 2UL))), l_205))) >= g_140), g_10[0])) && l_206), g_60[0][0])))) < l_206) , l_207[1]) & g_100[0]), (-1L)));
    }
    return l_21[1];
}



static int32_t  func_2(const uint32_t  p_3)
{ 
    uint64_t l_74 = 0xAA688ECCDF337836LL;
    int32_t l_77 = 0L;
    int32_t l_78 = 0x29C6F6B9L;
    int32_t l_85 = 0L;
    if (((((safe_add_func_uint8_t_u_u(l_74, (-3L))) != ((safe_rshift_func_uint8_t_u_u((g_68 = ((g_60[0][0]--) > g_39)), (safe_div_func_uint64_t_u_u((g_20[0][2] = g_20[0][2]), (-4L))))) >= 0x9887L)) || p_3) , g_70))
    { 
        int64_t l_86 = (-4L);
        g_87 ^= ((((p_3 | ((0x5D51L != ((((((safe_div_func_int16_t_s_s(((1UL > ((((g_10[1] <= l_85) ^ l_78) , 1L) , 0L)) <= 0xB79DL), l_86)) , 0L) == 0x7CD67D5F2590C119LL) || g_10[0]) > g_39) | l_86)) >= 0xD2A9E323L)) || 0x4DC16D461820E1BCLL) && g_60[0][0]) && g_39);
    }
    else
    { 
        uint16_t l_99 = 65530UL;
        g_100[0] = ((((safe_unary_minus_func_int32_t_s((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((((safe_sub_func_int8_t_s_s(((0xAD213B74EAE5124ALL != (((safe_add_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s((((p_3 ^ (g_20[0][2] < (safe_lshift_func_uint8_t_u_s(g_20[0][2], p_3)))) , (-1L)) == (-2L)))) >= 0x43182763L) ^ p_3), (-10L))) && g_20[0][2]) > p_3)) | g_39), p_3)) ^ l_77) <= 251UL))), p_3)) ^ l_74) & l_85))) , 0x5C35L) & p_3) , l_99);
    }
    return l_77;
}



static uint32_t  func_4(int8_t  p_5, uint64_t  p_6, int32_t  p_7, int8_t  p_8, int8_t  p_9)
{ 
    int32_t l_32 = 0xB81230B6L;
    int32_t l_40 = 1L;
    int8_t l_46 = 0xB2L;
    int32_t l_69 = (-9L);
    int32_t l_71 = (-1L);
    p_7 = (((safe_rshift_func_int8_t_s_s(0x39L, 0)) , ((safe_rshift_func_uint16_t_u_u(((l_40 |= (l_32 < (safe_lshift_func_uint8_t_u_s(l_32, ((g_39 = ((((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(0xE1F9L, g_20[0][0])) == 0xC6L) | g_10[1]), l_32)) | l_32) >= 0xD579DEB4L) , l_32)) && 0x9D70L))))) , l_40), 12)) >= 0x55DBFE6BL)) || 0x57A772BE76DCB0C7LL);
    for (p_5 = 5; (p_5 == 26); p_5 = safe_add_func_int8_t_s_s(p_5, 3))
    { 
        uint32_t l_43 = 5UL;
        int32_t l_59 = 0x09D52FFAL;
        l_40 &= (l_43 != ((((4294967295UL && (safe_sub_func_uint8_t_u_u((1UL <= 0xCF63547A0585C2C1LL), g_10[1]))) == p_7) && l_46) == l_43));
        l_71 |= ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((0x68E480B0L ^ (l_43 | ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((g_70 = ((safe_mul_func_uint8_t_u_u(((g_10[0] != (((safe_div_func_uint16_t_u_u((g_60[0][0]--), (g_68 ^= ((safe_mul_func_uint16_t_u_u((((((((((safe_div_func_uint64_t_u_u((((~(l_40 = p_9)) , g_20[0][0]) != 0x7B9758AC42121A65LL), 0xFB601BA2AAC5DA29LL)) > g_10[0]) == p_7) < p_6) == l_43) | g_39) > p_6) , g_39) || l_59), 0x2D5FL)) <= g_10[1])))) & 1UL) <= g_10[1])) & l_69), 8UL)) && 1L)) || g_10[0]) >= g_10[1]) < 18446744073709551613UL), g_39)), 0UL)) != l_59))), 0UL)) & 0UL), g_20[0][1])) & g_20[0][2]);
    }
    return g_70;
}



static uint64_t  func_11(uint64_t  p_12)
{ 
    uint32_t l_25 = 0UL;
    for (p_12 = 27; (p_12 <= 35); p_12 = safe_add_func_uint32_t_u_u(p_12, 3))
    { 
        uint32_t l_26[5] = {0x721F7D96L,0x721F7D96L,0x721F7D96L,0x721F7D96L,0x721F7D96L};
        int i;
        l_26[3] &= l_25;
    }
    return g_20[0][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_60[i][j], "g_60[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_179[i][j][k], "g_179[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);

    }
    transparent_crc(g_192, "g_192", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
